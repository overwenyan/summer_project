#include "mydatabase.h"
#include"abstractuser.h"
#include"launcher.h"
#include"manager.h"
#include"translator.h"
#include<QString>
#include<QList>

 QVector<AbstractUser>userlist;
 QVector<AbstractUser>launcherlist;
 QVector<task>tasklist;
 QVector<AbstractUser>managerlist;
 QVector<translator>translatorlist;

mydatabase::mydatabase()
{
     createConnection();   //创建关系，使得表格能够被初始化
     createTables();       //创建各个表格

     //数据库中一共7张表格，以下函数负责将数据库中的数据读入内存
     initialAbstractUser();//先初始化最初的用户
     initialTask();        //初始化任务

     initialLauncher();    //再初始化发布者的信息
     initialManager();     //再初始化负责人

     initialMBeSelect();   //初始化各项任务中的负责人报名者
     initialTBeSelect();   //初始化各项任务中的翻译人报名者

     initialTranslator();  //初始化各项任务中的翻译人列表
}

mydatabase::~mydatabase()
{
    memory();//程序退出时记忆
}

bool mydatabase::createConnection()//建立连接
{
    db = QSqlDatabase::addDatabase("QSQLITE","connection");
    db.setDatabaseName("Qt_Translation.db");

    if(!db.open()){
        QMessageBox msg;
        msg.setText(QStringLiteral("打开数据库失败!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    else {
        qDebug()<<"Qt_translation.db open succeeded";
    }
    return true;
}


bool mydatabase::createTables()//创建表格
{
    //用户列表的初始化：userlist，分别记录用户的各项信息，包括用户的手机号码，用户名，证件号，密码、资质,个人积分和余额，一共7项
    //其中用户的用户名是整个程序中至关重要的参数，相当于“身份证号”
    QSqlQuery query(db);
    query.prepare("create table IF NOT EXISTS userlist"
                 "(phoneNum varchar(250), username varchar(230),idNum varchar(230),passwd varchar(230),quality varchar(250),point int,amount double);");
    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table userlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create usertable successfully";


    //任务列表的初始化：tasklist，需要记录任务简介，任务原文，任务奖励，翻译种类，任务状态，任务的发布人，发布日期，发布时间，一共8项
    //任务名是各项任务中最重要的部分，包括
    query.prepare("create table IF NOT EXISTS tasklist"
                 "(text varchar(255), intro varchar(230), reward double, transtate int,taskState int,"
                  "launchername varchar(100) ,launchdate varchar(200), launchtime varchar(200));");
    if( !query.exec() )
    {
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table tasklist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create tasktable successfully";


    //任务发起者列表的初始化:launcherlist，需要记录发布任务的名称，发布者的姓名，一共2项
    query.prepare("create table IF NOT EXISTS launcherlist"
                 "(bookname varchar(250), username varchar(230));");

    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table launcherlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create launchertable successfully";


    //任务发起者列表的初始化:managerlist，需要记录负责的任务的名称，负责人的名称，负责人设置的任务翻译人报名截止日期，
    //翻译人报名截止时间，翻译人人数（默认是2），上传的最终任务，一共6项
    query.prepare("create table IF NOT EXISTS managerlist"
                 "(bookname varchar(100),managername varchar(100),"
                  "applyTdate varchar(70),applyTtime varchar(70),translatorNum int,"
                  "finaltasktext varchar(200));");

    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table managerlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create managertable successfully";


    //任务负责人报名列表：taskMlist，记录了用户任务的名称，报名者的名字，一共2项
    query.prepare("create table IF NOT EXISTS taskMlist"
                 "(bookname varchar(200), applierMname varchar(100));");
    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table taskMlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create taskMtable successfully";


    //等待候选翻译人的任务及报名人列表：taskTlist，记录了任务名称和申请任务翻译者的用户名，一共2项
    query.prepare("create table IF NOT EXISTS taskTlist"
                 "(bookname varchar(200),applierTname varchar(200));");
    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table taskTlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create taskTtable successfully";


    //任务翻译人列表：translatorlist，记录了任务名称,任务译者名,译者被分配的任务文稿，译者的译稿，对译者的评价，一共5项
    query.prepare("create table IF NOT EXISTS translatorlist"
                 "(bookname varchar(200),translatorname varchar(200),"
                  "sectionText varchar(200),sectionTranslate varchar(200),comment varchar(200));");
    if( !query.exec() ){
        QMessageBox msg;
        msg.setText("Fatal error! Failed to create table translatorlist!");
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    qDebug()<<"Create translatorlist successfully";
    return true;
}


bool mydatabase::initialAbstractUser(){//打开数据库初始化顾客列表
    QSqlQuery query(db);
    query.exec("select * from userlist");
    int i=0;
    while(query.next())
    {
        QString _phoneNum = query.value(0).toString();
        QString _username = query.value(1).toString();
        QString idNum = query.value(2).toString();
        QString _passwd = query.value(3).toString();
        QString _quality = query.value(4).toString();
        int points = query.value(5).toInt();
        double amount = query.value(6).toDouble();
        AbstractUser abu(_phoneNum, _username, idNum,  _passwd, _quality,points);
        abu.setAmount(amount);
        userlist.append(abu);
        qDebug()<<"Get user "<<i<<abu.username<<", points ="<<abu.points;
        i+=1;
    }
    return true;
}


bool mydatabase::initialTask(){//打开初始化列表
    QSqlQuery query(db);
    query.exec("select * from tasklist");
    int count=0;
    while(query.next())
    {
        QString text = query.value(0).toString();
        QString intro = query.value(1).toString();
        double reward = query.value(2).toDouble();
        int tras = query.value(3).toInt();
        int taskstate = query.value(4).toInt();
        QString tlaunchername = query.value(5).toString();

        QString sapplyddldate = query.value(6).toString();
        QDate tapplyddldate = QDate::fromString(sapplyddldate,"yyyy-MM-dd");
        QString sapplyddltime = query.value(7).toString();
        QTime tapplyddltime = QTime::fromString(sapplyddltime,"hh:mm:ss");
        QDateTime tapplyddl(tapplyddldate,tapplyddltime);

        transType anothertrans = static_cast<transType>(tras);
        task oldtask(text,intro, reward, anothertrans,tapplyddl);

        oldtask.setTaskState(static_cast<taskState>(taskstate));

        for (int i=0;i<userlist.size();i++) {
            if(tlaunchername==userlist[i].getName()){
               // launcher lau(userlist[i]);
                oldtask.setLauncher(&userlist[i]);
            }
        }

        tasklist.append(oldtask);
        qDebug()<<"Get task"<<count<<tasklist[count].getIntro()<<tasklist[count].getLauncher()->getName()<<tasklist[count].getStrTaskState();
        count++;
    }

    return true;
}






bool mydatabase::initialLauncher()
{
    QSqlQuery query(db);
    query.exec("select * from launcherlist");
    int iCount=0;
    while(query.next())
    {
        QString _bookname = query.value(0).toString();
        QString _username = query.value(1).toString();
        for (int j=0;j<tasklist.size();j++) {
            if(tasklist[j].getIntro()==_bookname){
                for (int i=0;i<userlist.size();i++) {
                    if(userlist[i].getName()==_username){
                        //launcher lau(userlist[i]);
                        launcherlist.append(userlist[i]);
                        tasklist[j].setLauncher(&userlist[i]);
                        //lau.setTask(&tasklist[j]);
                        qDebug()<<"Get launcher "<<iCount<<tasklist[j].getLauncher()->getName();
                        iCount+=1;
                    }
                }
            }
        }
    }
    return true;
}

bool mydatabase::initialManager()
{
    QSqlQuery query(db);
    query.exec("select * from managerlist");
    int iCount=0;
    while(query.next())
    {
        QString _bookname = query.value(0).toString();
        QString _username = query.value(1).toString();

        QString sddlTdate = query.value(2).toString();
        QDate ddlTTdate = QDate::fromString(sddlTdate,"yyyy-MM-dd");
        QString sddlTTtime = query.value(3).toString();
        QTime ddlTTtime = QTime::fromString(sddlTTtime,"hh:mm:ss");
        QDateTime ddlTdatetime(ddlTTdate,ddlTTtime);

        int translatorNum = query.value(4).toInt();
        QString finaltext = query.value(5).toString();
        for (int i=0;i<tasklist.size();i++) {
            if(tasklist[i].getIntro()==_bookname){
                if(tasklist[i].getTaskState()!=launched){
                    for (int j=0;j<userlist.size();j++) {
                        if(userlist[j].getName()==_username){   //从userlist中找到了manager的名字
                           // manager man(userlist[j]);
                            managerlist.append(userlist[j]);
                            tasklist[i].setManager(&userlist[j]);
                            qDebug()<<"Get manager "<<iCount<<managerlist[iCount].getName()<<", points ="<<managerlist[iCount].points;
                            if(tasklist[i].getTaskState()!=managed) {
                                tasklist[i].setApplyTddldatetime(ddlTdatetime);
                                tasklist[i].setTranslatorNum(translatorNum);
                                if(tasklist[i].getTaskState()==submitted||tasklist[i].getTaskState()==paid){
                                    tasklist[i].setFinalTranslation(finaltext);
                                }
                            }
                            iCount++;
                        }
                    }//end of for2
                }
            }
        }//end of for1
    }
    return true;
}




bool mydatabase::initialMBeSelect()
{
    QSqlQuery query(db);
    query.exec("select * from taskMlist");
    int i=0;
    //qDebug()<<"启动时，tasklist.size()=="<<tasklist.size();
    while(query.next())
    {
        QString _bookname = query.value(0).toString();
        QString _username = query.value(1).toString();
        qDebug()<<_bookname<<"appliername"<<_username;
        for (int i=0;i<tasklist.size();i++) {
            if(tasklist[i].getIntro()==_bookname){
                for (int j=0;j<userlist.size();j++) {
                    if (_username == userlist[j].getName()) {
                        tasklist[i].applyMlist.append(&userlist[j]);
                        qDebug()<<"Get task"<<tasklist[i].getIntro()<<"managerApplier"<<userlist[j].getName();
                    }
                }
            }
        }
        i+=1;
    }
    return true;
}



bool mydatabase::initialTBeSelect()
{
    QSqlQuery query(db);
    query.exec("select * from taskTlist");
    int i=0;
    while(query.next())
    {
        QString bookname = query.value(0).toString();
        QString _applierTname = query.value(1).toString();

        for (int j=0;j<tasklist.size();j++) {
            if(tasklist[j].getIntro()==bookname){
                for (int k=0;k<userlist.size();k++) {
                    if(userlist[k].getName()==_applierTname){
                        tasklist[j].applyTlist.append(&userlist[k]);
                        qDebug()<<"Get task"<<tasklist[j].getIntro()<<"translatorApplier"<<userlist[k].getName();
                    }
                }
            }
        }
        i+=1;
    }
    return true;
}

bool mydatabase::initialTranslator()
{
    QSqlQuery query(db);
    query.exec("select * from translatorlist");
    int i=0;
    while(query.next())
    {
        QString bookname = query.value(0).toString();
        QString translator = query.value(1).toString();
        QString sectionText = query.value(2).toString();
        QString sectionTranslate = query.value(3).toString();
        QString comment = query.value(4).toString();

        for (int j=0;j<tasklist.size();j++) {
            if(tasklist[j].getIntro()==bookname){
                for (int k=0;k<userlist.size();k++) {
                    if(userlist[k].getName()==translator){
                        tasklist[j].tTranslatorlist.append(&userlist[k]);
                        tasklist[j].sectiontextlist.append(sectionText);
                        tasklist[j].sectiondraftlist.append(sectionTranslate);
                        tasklist[j].sectioncommentlist.append(comment);
                        qDebug()<<"Get task"<<tasklist[j].getIntro()<<"translator"<<userlist[k].getName();
                        qDebug()<<tasklist[j].getIntro()<<tasklist[j].tTranslatorlist.size();
                    }
                }
            }
        }
        i+=1;
    }
    return true;
}



bool mydatabase::memory()
{
    QSqlQuery query(db);

    //userlist的储存
    query.exec("DELETE from userlist");
    query.prepare("insert into userlist (phoneNum,username,idNum,passwd,quality,point,amount)"
                  "values(?,?,?,?,?,?,?);");
    for(int i=0;i<userlist.size();i++){
        query.bindValue(0,userlist[i].phoneNum);
        query.bindValue(1,userlist[i].username);
        query.bindValue(2,userlist[i].idNum);
        query.bindValue(3,userlist[i].passwd);
        query.bindValue(4,userlist[i].quality);
        query.bindValue(5,userlist[i].points);
        query.bindValue(6,userlist[i].getAmount());
        qDebug()<<"Remember user "<<i<<" "<<userlist[i].getName()<<"phone: "<<userlist[i].phoneNum;
        bool success=query.exec();
        if(!success){
            QMessageBox msg;
            msg.setText(QStringLiteral("更新用户列表失败!"));
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
        }
    }//end of for
    //userlist储存结束

    //tasklist的储存
    query.exec("DELETE from tasklist");
    query.prepare("insert into tasklist(text,intro,reward,transtate,taskState,"
                  "launchername, launchdate,launchtime)"
                  "values(?,?,?,?,?,?,?,?);");

     for(int i=0;i<tasklist.size();i++){
        query.bindValue(0,tasklist[i].text);
        query.bindValue(1,tasklist[i].intro);
        query.bindValue(2,tasklist[i].reward);
        qDebug()<<"tasklist["<<i<<"].getTaskState()=="<<tasklist[i].getTaskState();
        query.bindValue(3,tasklist[i].getTransType());
        query.bindValue(4,tasklist[i].getTaskState());
        query.bindValue(5,tasklist[i].getLauncher()->getName());
        query.bindValue(6,tasklist[i].getApplyDate().toString("yyyy-MM-dd"));
        query.bindValue(7,tasklist[i].getApplyTime().toString("hh:mm:ss"));

        qDebug()<<"Remember task"<<i<<tasklist[i].getIntro()<<tasklist[i].getLauncher()->getName();
        bool success=query.exec();

        qDebug()<<"tasklist"<<query.lastError();
        if(!success){
            QMessageBox msg;
            msg.setText(QStringLiteral("更新任务表格失败!"));
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
        }
    }//end of for
    //tasklist储存结束


    //managerlist的储存
    query.exec("DELETE from managerlist");
    query.prepare("insert into managerlist(bookname,managername,applyTdate,applyTtime,translatorNum,finaltasktext)"
                  "values(?,?,?,?,?,?);");
    int icount=0;
    for(int i=0;i<tasklist.size();i++){
        if(tasklist[i].getTaskState()!=launched){
            query.bindValue(0,tasklist[i].getIntro());
            query.bindValue(1,tasklist[i].getManager()->getName());
            qDebug()<<"Remember manager "<<icount<<tasklist[i].getManager()->getName()<<tasklist[i].getIntro();
            icount++;
            if(tasklist[i].getTaskState()==managed){                              //managed状态中没有各种时间数据
                query.bindValue(2,"");
                query.bindValue(3,"");
                query.bindValue(4,2);
                query.bindValue(5,"");
            }
            else if(tasklist[i].getTaskState()==translated){                                   //translated
                query.bindValue(2,tasklist[i].getApplyTddldate().toString("yyyy-MM-dd"));
                query.bindValue(3,tasklist[i].getApplyTddltime().toString("hh:mm:ss"));
                query.bindValue(4,tasklist[i].getTranslatorNum());
                query.bindValue(5,"");
            }
            else {                                                               //submited,paid
                query.bindValue(2,tasklist[i].getApplyTddldate().toString("yyyy-MM-dd"));
                query.bindValue(3,tasklist[i].getApplyTddltime().toString("hh:mm:ss"));
                query.bindValue(4,tasklist[i].getTranslatorNum());
                query.bindValue(5,tasklist[i].getFinalTranslation());
            }
        }
        else {                                  //对于launched状态下，没有负责人，只存一次
            query.bindValue(0,tasklist[i].getIntro());
            query.bindValue(1,"");
            query.bindValue(2,"");
            query.bindValue(3,"");
            query.bindValue(4,"");
            query.bindValue(5,"");
        }

        bool success=query.exec();
        qDebug()<<"managerlist"<<query.lastError();
        if(!success){
            QMessageBox msg;
            msg.setText(QStringLiteral("更新负责人表格失败!"));
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
        }
      }//end of for
     //managerlist储存结束


    //launcherlist的储存
    query.exec("DELETE from launcherlist");
    query.prepare("insert into launcherlist(bookname,username)"
                  "values(?,?);");
    for(int i=0;i<tasklist.size();i++){
      query.bindValue(0,tasklist[i].getIntro());
      query.bindValue(1,tasklist[i].getLauncher()->getName());

        bool success=query.exec();
        qDebug()<<"launcherlist"<<query.lastError();
        if(!success){
            QMessageBox msg;
            msg.setText(QStringLiteral("更新发布人表格失败!"));
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
        }
      }//end of for
    //launcherlist储存结束


    //任务负责人申请列表储存
     query.exec("DELETE from taskMlist");
     query.prepare("insert into taskMlist(bookname,applierMname)"
                   "values(?,?);");
    // qDebug()<<"储存时，tasklist.size()=="<<tasklist.size();
  //   if(tasklist.size()>0){qDebug()<<"tasklist[0].applyMlist.size()=="<<tasklist[0].applyMlist.size();}
     bool success=true;
     for(int i=0;i<tasklist.size();i++){
         if(tasklist[i].applyMlist.size()>0){
             for (int j=0;j<tasklist[i].applyMlist.size();j++){
                 query.bindValue(0,tasklist[i].getIntro());
                 query.bindValue(1,tasklist[i].applyMlist[j]->getName());
                 qDebug()<<tasklist[i].getIntro()<<"applier"<<tasklist[i].applyMlist[j]->getName();
                 success=query.exec();
             }
         }
         else {
             query.bindValue(0,tasklist[i].getIntro());
             query.bindValue(1,"");
             success=query.exec();
         }
     }//end of for

     qDebug()<<"taskMlist"<<query.lastError();
     if(!success){
         QMessageBox msg;
         msg.setText(QStringLiteral("更新任务负责人申请列表失败!"));
         msg.setWindowTitle(QStringLiteral("Error！"));
         msg.exec();
     }
    //taskMlist储存结束


     //taskTlist的储存
     query.exec("DELETE from taskTlist");
     query.prepare("insert into taskTlist(bookname,applierTname)"
                   "values(?,?);");
    // if(tasklist.size()>0){qDebug()<<"tasklist[0].applyTlist.size()=="<<tasklist[0].applyTlist.size();}
     bool success2=true;
     for(int i=0;i<tasklist.size();i++){
         if(tasklist[i].applyTlist.size()>0){
             for (int k=0;k<tasklist[i].applyTlist.size();k++) {
                 query.bindValue(0,tasklist[i].getIntro());
                 query.bindValue(1,tasklist[i].applyTlist[k]->getName());
                 success2 = query.exec();
             }
         }
         else {
             query.bindValue(0,tasklist[i].getIntro());
             query.bindValue(1,"");
             success2 = query.exec();
         }

     }//end of for
     qDebug()<<"taskTlist"<<query.lastError();
     if(!success2){
         QMessageBox msg;
         msg.setText(QStringLiteral("更新任务翻译者申请列表失败!"));
         msg.setWindowTitle(QStringLiteral("Error！"));
         msg.exec();
     }
    //taskTlist的储存结束


     //translatorlist的储存
         query.exec("DELETE from translatorlist");
         query.prepare("insert into translatorlist(bookname, translatorname, sectionText, sectionTranslate, comment)"
                       "values(?,?,?,?,?);");
         bool success3 = true;
         for (int j=0;j<tasklist.size();j++) {
             if(tasklist[j].getTaskState() == translated||tasklist[j].getTaskState() == submitted||tasklist[j].getTaskState()==paid){
                 if(tasklist[j].tTranslatorlist.size()>0){
                     for (int i=0;i<tasklist[j].tTranslatorlist.size();i++) {
                         query.bindValue(0,tasklist[j].getIntro());
                         query.bindValue(1,tasklist[j].tTranslatorlist[i]->getName());
                         query.bindValue(2,tasklist[j].sectiontextlist[i]);
                         query.bindValue(3,tasklist[j].sectiondraftlist[i]);
                         query.bindValue(4,tasklist[j].sectioncommentlist[i]);
                         success3=query.exec();
                     }
                 }
                 else {
                     query.bindValue(0,tasklist[j].getIntro());
                     query.bindValue(1,"");
                     query.bindValue(2,"");
                     query.bindValue(3,"");
                     query.bindValue(4,"");
                     success3=query.exec();
                 }
             }
             else {
                 query.bindValue(0,tasklist[j].getIntro());
                 query.bindValue(1,"");
                 query.bindValue(2,"");
                 query.bindValue(3,"");
                 query.bindValue(4,"");
                 success3=query.exec();
             }


           }//end of for

         qDebug()<<"translatorlist"<<query.lastError();
         if(!success3){QMessageBox msg;
             msg.setText(QStringLiteral("更新任务翻译人失败!"));
             msg.setWindowTitle(QStringLiteral("Error！"));
             msg.exec();}
     //translatorlist的储存结束

    qDebug()<<"储存结束，即将退出程序......";
    return true;
}





