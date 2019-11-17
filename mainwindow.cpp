#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringListModel>
#include<QDebug>
#include"ltaskwindow.h"

#include"task.h"
#include "ltaskwindow.h"
#include"settddl.h"
#include"mydatabase.h"


MainWindow::MainWindow(loginwindows *l, AbstractUser *puser):
    ui(new Ui::MainWindow),
    parent(l),pUser(puser)
{
    ui->setupUi(this);
    qDebug()<<"目前登录的用户是"<<pUser->getName();
    showinfo();
    if(tasklist.size()!=0){
        showMyLaunchedTask();
        showMyManagedTask();
        showMyTranslateTask();
        showtaskGetmanager();
        showtaskGettranslator();
    }
    connect(ui->bLaunchTask,SIGNAL(clicked()),this,SLOT(launchtask()));
    connect(ui->bRefreshMyLtask, SIGNAL(clicked()), this ,SLOT(showMyLaunchedTask()));
    connect(ui->bRefreshMyMtask,SIGNAL(clicked()),this,SLOT(showMyManagedTask()));
    connect(ui->bRefreshMyTtask,SIGNAL(clicked()),this,SLOT(showMyTranslateTask()));
    connect(ui->bReturn, SIGNAL(clicked()), this, SLOT(reLoginw()));
    connect(ui->bRefreshMain,SIGNAL(clicked()), this, SLOT(showtaskGetmanager()));
    connect(ui->bRefreshMain_2,SIGNAL(clicked()), this, SLOT(showtaskGettranslator()));
    connect(ui->bApManager,SIGNAL(clicked()),this,SLOT(applyManager()));
    connect(ui->bApTranslator,SIGNAL(clicked()),this,SLOT(applyTranslaor()));
    connect(ui->bGetApply,SIGNAL(clicked()), this, SLOT(showApplyManagerState()));
    connect(ui->bGetTransApply,SIGNAL(clicked()),this,SLOT(showApplyTranslatorState()));
    connect(ui->bsetTddl, SIGNAL(clicked()),this,SLOT(setTapplyddl()));
    connect(ui->bFindTranslator,SIGNAL(clicked()),this,SLOT(showFinalTranslator()));
    connect(ui->bGetTransTask,SIGNAL(clicked()),this,SLOT(getMyTranslateTask()));
    connect(ui->bFinalSubmit,SIGNAL(clicked()),this,SLOT(managerFinalSubmit()));
    connect(ui->bGetFinalTranslation,SIGNAL(clicked()),this,SLOT(launcherGetFinalTranslation()));
    connect(ui->bAddAmount,SIGNAL(clicked()),this,SLOT(addMoney()));
   // qDebug()<<"tasklist.size=="<<tasklist.size();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
    delete ltaskw;
}

AbstractUser *MainWindow::getUser()
{
    return pUser;
}

void MainWindow::showinfo()
{
    QStringList userInfo;
    userInfo<<"手机号码: "<<pUser->getphoneNum()<<"";
    userInfo<<"用户名："<<pUser->getName()<<"";
    userInfo<<"身份证号: "<<pUser->getid()<<"";
    userInfo<<"我的资质: "<<pUser->getQuality()<<"";
    userInfo<<"我的积分: "<<QString::number(pUser->getPoints())<<"";
    userInfo<<"账户余额: "<<QString::number(pUser->getAmount());
    model = new QStringListModel(userInfo) ;
    ui->lInfo->setModel(model);
}

void MainWindow::showMyLaunchedTask()//用户发布任务表格
{
    ui->twMyLTask->setRowCount(4);
    ui->twMyLTask->setColumnCount(5);
    ui->twMyLTask->setColumnWidth(0,100);
    for (int i=1;i<5;i++) {
        ui->twMyLTask->setColumnWidth(i,190);
    }
    ui->twMyLTask->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务简介" << "任务原文" << "招募负责人时限" <<"该任务负责人"<< "当前任务状态";
    ui->twMyLTask->setHorizontalHeaderLabels(sListHeader);
    int lTaskNum = 0;
    myLtasklist.clear();
    for (int i=0 ;i<tasklist.length();i++) {
        qDebug()<<i<<tasklist[i].getLauncher()->getName();
            if( pUser->getName() == tasklist[i].getLauncher()->getName())
            {
                myLtasklist.append(&tasklist[i]);
                qDebug()<<"tasklist[i].getIntro()=="<<tasklist[i].getIntro();
                ui->twMyLTask->setItem(lTaskNum,0,new QTableWidgetItem(tasklist[i].getIntro()));
                ui->twMyLTask->setItem(lTaskNum,1,new QTableWidgetItem(tasklist[i].getText()));
                ui->twMyLTask->setItem(lTaskNum,2,new QTableWidgetItem(tasklist[i].getLdatetime().toString("yyyy-MM-dd hh:mm:ss")));
               if(!(tasklist[i].getTaskState()==launched)){
                    ui->twMyLTask->setItem(lTaskNum,3,new QTableWidgetItem(tasklist[i].getManager()->getName()));
                }
                ui->twMyLTask->setItem(lTaskNum,4,new QTableWidgetItem(tasklist[i].getStrTaskState()));
                lTaskNum++;
            }
        }

    qDebug()<<"我发布的任务列表已刷新";
}

void MainWindow::showMyManagedTask()//用户负责任务表格
{
    ui->twMyMTask->setRowCount(5);
    ui->twMyMTask->setColumnCount(4);
    for (int i=0;i<4;i++) {
        ui->twMyMTask->setColumnWidth(i,190);
    }

    ui->twMyMTask->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务简介" << "任务原文" << "招募翻译人时限" << "当前任务状态";
    ui->twMyMTask->setHorizontalHeaderLabels(sListHeader);
    int mTaskNum = 0;

    myMtasklist.clear();
    for (int i=0 ;i<tasklist.size();i++) {
        if(!(tasklist[i].getTaskState()==launched)){//未指定候选人的列表不执行一下的函数
            if((pUser->getName() == tasklist[i].getManager()->getName()))
            {
                myMtasklist.append(&tasklist[i]);

                ui->twMyMTask->setItem(mTaskNum,0,new QTableWidgetItem(tasklist[i].getIntro()));
                ui->twMyMTask->setItem(mTaskNum,1,new QTableWidgetItem(tasklist[i].getText()));

                ui->twMyMTask->setItem(mTaskNum,2,new QTableWidgetItem(tasklist[i].getApplyTddldatetime().toString("yyyy-MM-dd hh:mm:ss")));
                if(!(tasklist[i].getTaskState()==launched || tasklist[i].getTaskState()==managed))
                {
                    ui->twMyMTask->setItem(mTaskNum,3,new QTableWidgetItem(tasklist[i].getStrTaskState()));
          //      if(tasklist[i].tTranslatorlist.size()>0){
           //         ui->twMyMTask->setItem(mTaskNum,4,new QTableWidgetItem(tasklist[i].tTranslatorlist[0]->getName()));}
                }
                mTaskNum++;
            }
        }
    }
    qDebug()<<"我负责的任务列表已刷新";
}

void MainWindow::showMyTranslateTask()
{
    ui->twMyTTask->setRowCount(5);
    ui->twMyTTask->setColumnCount(4);
    for (int i=0;i<4;i++) {
        ui->twMyTTask->setColumnWidth(i,190);
    }

    ui->twMyTTask->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务简介" << "任务原文"<<"负责人名称"<< "当前任务状态";
    ui->twMyTTask->setHorizontalHeaderLabels(sListHeader);
    int mTaskNum = 0;


    myTtasklist.clear();
    for (int i=0 ;i<tasklist.size();i++) {
        if(!(tasklist[i].getTaskState()==launched && tasklist[i].getTaskState()==managed)){//未处于翻译状态的列表不执行一下的函数
            for (int j=0;j<tasklist[i].tTranslatorlist.size();j++) {//先扫描这个任务的翻译人列表，如果存在一定会有定义
                if((pUser->getName() == tasklist[i].tTranslatorlist[j]->getName())){
                    myTtasklist.append(&tasklist[i]);
                    ui->twMyTTask->setItem(mTaskNum,0,new QTableWidgetItem(tasklist[i].getIntro()));
                    ui->twMyTTask->setItem(mTaskNum,1,new QTableWidgetItem(tasklist[i].getText()));
                    if(tasklist[i].getTaskState()!=launched){
                    ui->twMyTTask->setItem(mTaskNum,2,new QTableWidgetItem(tasklist[i].getManager()->getName()));}
                    ui->twMyTTask->setItem(mTaskNum,3,new QTableWidgetItem(tasklist[i].getStrTaskState()));
                    mTaskNum++;
                }

            }

        }
    }
    qDebug()<<"我翻译的任务列表已刷新";
}
void MainWindow::launchtask()
{
    ltaskw =new LaunchTask(this);
    ltaskw->show();
}

void MainWindow::reLoginw()
{
    this->close();
    parent->show();
}

void MainWindow::showtaskGetmanager()//正在招募负责人的表格
{
    ui->twApingMa->clear();
    ui->twApingMa->setRowCount(6);
    ui->twApingMa->setColumnCount(5);
    for (int i=0;i<4;i++) {ui->twApingMa->setColumnWidth(i,150);}
    ui->twApingMa->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务简介"  << "发布人用户名"<<"任务酬金" << "负责人报名截止时间"<<"翻译类型";
    ui->twApingMa->setHorizontalHeaderLabels(sListHeader);
    int lTaskNum = 0;
    qDebug()<<"tasklist.size()=="<<tasklist.size();
    cruitMtasklist.clear();
    for (int i=0 ;i<tasklist.length();i++) {
        if((tasklist[i].getTaskState()==launched))
        {
            cruitMtasklist.append(&tasklist[i]);
            ui->twApingMa->setItem(lTaskNum,0,new QTableWidgetItem(tasklist[i].getIntro()));
            ui->twApingMa->setItem(lTaskNum,1,new QTableWidgetItem(tasklist[i].getLauncher()->getName()));
            ui->twApingMa->setItem(lTaskNum,2,new QTableWidgetItem(QString::number(tasklist[i].getReward())));
            ui->twApingMa->setItem(lTaskNum,3,new QTableWidgetItem(tasklist[i].getLdatetime().toString("yyyy-MM-dd hh:mm:ss")));
            ui->twApingMa->setItem(lTaskNum,4,new QTableWidgetItem(tasklist[i].getStrTransType()));
            lTaskNum++;
        }
    }//end of for
}

void MainWindow::showtaskGettranslator()//正在招募翻译者的表格
{
    ui->twApingTr->clear();
    ui->twApingTr->setRowCount(6);
    ui->twApingTr->setColumnCount(6);
    for (int i=0;i<4;i++) {ui->twApingTr->setColumnWidth(i,150);}
    ui->twApingTr->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务简介"<< "负责人用户名"<<"任务积分"<<"译者报名截止时间"<<"招募译者人数"<<"翻译类型";
    ui->twApingTr->setHorizontalHeaderLabels(sListHeader);
    int lTaskNum = 0;
    cruitTtasklist.clear();
    for (int i=0 ;i<tasklist.length();i++) {
        if((tasklist[i].getTaskState()==managed)||(tasklist[i].getTaskState()==setTaskTddl))
        {
            cruitTtasklist.append(&tasklist[i]);
            ui->twApingTr->setItem(lTaskNum,0,new QTableWidgetItem(tasklist[i].getIntro()));
            ui->twApingTr->setItem(lTaskNum,1,new QTableWidgetItem(tasklist[i].getManager()->getName()));
            ui->twApingTr->setItem(lTaskNum,2,new QTableWidgetItem(QString::number(tasklist[i].getReward())));
            ui->twApingTr->setItem(lTaskNum,3,new QTableWidgetItem(tasklist[i].getApplyTddldatetime().toString("yyyy-MM-dd hh:mm:ss")));
            ui->twApingTr->setItem(lTaskNum,4,new QTableWidgetItem(QString::number( tasklist[i].getTranslatorNum())));
            ui->twApingTr->setItem(lTaskNum,5,new QTableWidgetItem(tasklist[i].getStrTransType()));
            lTaskNum++;
        }
    }//end of for
}

void MainWindow::applyManager()//主页申请成为负责人
{
    int row=-1;
    row =ui->twApingMa->currentRow();
 //   qDebug()<<"row=="<<row;
    if(row >= cruitMtasklist.size()||row == -1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前任务栏没有合法的任务或没有选择任务栏!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    if(cruitMtasklist[row]->getLdatetime()<QDateTime::currentDateTime()){
        QMessageBox msg;
        msg.setText(QStringLiteral("负责人报名时间已过！"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    apmw = new applyManagerw(this, this->pUser, cruitMtasklist[row]);
    apmw->show();
    return;
}

void MainWindow::applyTranslaor()
{
    int row=-1;
    row =ui->twApingTr->currentRow();
 //   qDebug()<<"row=="<<row;
    if(row >= cruitTtasklist.size()||row == -1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前任务栏没有合法的任务或没有选择任务栏!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    if(!cruitTtasklist[row]->getisSetTddl()){
        QMessageBox msg;
        msg.setText(QStringLiteral("负责人尚未设置报名截止时间！"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
    }
    else if(cruitTtasklist[row]->getApplyTddldatetime() < QDateTime::currentDateTime()){
        QMessageBox msg;
        msg.setText(QStringLiteral("译者报名时间已过！"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    aptw = new applyTranslatorw(this, this->pUser, cruitTtasklist[row]);
    aptw->show();
    return;
}

void MainWindow::showApplyManagerState()//查看用户发布任务的负责者报名情况
{
    int row =-1;
    row = ui->twMyLTask->currentRow();
 //   qDebug()<<"currentRow"<<row;
 //   qDebug()<<"myLtasklist.size()=="<<myLtasklist.size();
    if(row==-1||row>myLtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前招募负责人任务栏没有合法的任务或没有选择任务栏!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    smaw = new showMApplyw(myLtasklist[row]);
    smaw->show();
}

void MainWindow::showApplyTranslatorState()
{
    int row = -1;
    row=ui->twMyMTask->currentRow();
    if(row==-1||row>myMtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前招募翻译人任务栏没有合法的任务或没有选择任务栏!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    staw = new showTApplyw(myMtasklist[row]);
    staw->show();
}
/*
void MainWindow::showApplyManagerState()//查看用户发布任务的负责者报名情况
{
    int row =-1;
    row = ui->twMyLTask->currentRow();
 //   qDebug()<<"currentRow"<<row;
 //   qDebug()<<"myLtasklist.size()=="<<myLtasklist.size();
}*/
void MainWindow::showCurrentState()//刷新主页的表格
{
    showtaskGetmanager();
    showtaskGettranslator();
}

void MainWindow::editpasswd()
{

}

void MainWindow::setTapplyddl()//负责人设置任务翻译者的相关参数
{
    int row =-1;
    row = ui->twMyMTask->currentRow();
    if(row==-1||row>myMtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前招募翻译人任务栏没有合法的任务或没有选择任务栏!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    stdw = new setTddl(myMtasklist[row]);
    stdw->show();
}

void MainWindow::showFinalTranslator()
{
    int row=-1;
    row = ui->twMyMTask->currentRow();
    if(row==-1||myMtasklist.size()==0){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有选择任务栏或没有负责的任务!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    sTransw = new showTranslatorw(myMtasklist[row]);
    sTransw->show();
}

void MainWindow::getMyTranslateTask()
{
    int row=-1;
    row = ui->twMyTTask->currentRow();
    qDebug()<<"myTtasklist.size() =="<<myTtasklist.size();


    if(row==-1||myTtasklist.size()==0||row>myTtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有选择任务栏或没有翻译的任务!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    int translateNumber = 0;

    //以下的代码用于查询登录的用户在翻译的任务中翻译者列表中的序号
    for (int i=0;i<myTtasklist[row]->tTranslatorlist.size();i++) {
        if(myTtasklist[row]->tTranslatorlist[i]->getName()==pUser->getName()){
            translateNumber=i;
        }
    }
    transwin = new translatorwindow(translateNumber,myTtasklist[row]);
    transwin->show();
}

void MainWindow::managerFinalSubmit()
{
    int row=-1;
    row = ui->twMyMTask->currentRow();
    if(row==-1||myMtasklist.size()==0||row>myMtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有选择任务栏或没有翻译的任务!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    mSubmitw = new ManagerSubmitw(myMtasklist[row]);
    mSubmitw->show();
}

void MainWindow::launcherGetFinalTranslation()
{
    int row=-1;
    row = ui->twMyLTask->currentRow();
    if(row==-1||myLtasklist.size()==0||row>myLtasklist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有选择任务栏或没有翻译的任务!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return;
    }
    lGetw = new launcherGetw(myLtasklist[row]);
    lGetw->show();
}

void MainWindow::addMoney()
{
    adpw = new addPointw(pUser);
    adpw->show();
}










