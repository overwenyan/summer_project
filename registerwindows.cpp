#include "registerwindows.h"
#include "ui_registerwindows.h"
#include"mydatabase.h"
#include"abstractuser.h"
#include<QVector>
#include<QObject>
#include<QDebug>
#include<QTableView>

extern QVector<AbstractUser>userlist;

registerwindows::registerwindows(loginwindows *l)
    : ui(new Ui::registerwindows),parent(l)
{
    ui->setupUi(this);
    connect(ui->bRegister, SIGNAL(clicked()),this,SLOT(sendinfo()) );
    connect(ui->bCancel,SIGNAL(clicked()), this, SLOT(close()));

  /*  model = new QSqlTableModel(this);
    model->setTable("userlist");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行*/
}

registerwindows::~registerwindows()
{
    delete ui;
}


void registerwindows::sendinfo(){//传递信息
    idNum = ui->lID->text();
    phoneNum = ui->lPhoneNum->text();
    username = ui->lUsrname->text();
    password = ui->lPasswd->text();
    password2 = ui->lPasswdconfirm->text();
    quality = ui->lQuality->text();
    if(check()){
        AbstractUser newuser(phoneNum, username,idNum, password, quality);
        userlist.append(newuser);
        qDebug()<<"new user name is "<<newuser.getName();
        QMessageBox msg;
        msg.setText(QStringLiteral("用户注册成功！"));
        msg.setWindowTitle(QStringLiteral("Success"));
        msg.exec();
        this->close();
    }
}

bool registerwindows::check()//检验输入是否合法
{
    bool flag=true;
//    QString strPhoneNum = tr("%1").arg(phoneNum);
//    qDebug()<<strPhoneNum.length();
   if (password.length()<6||password.length()>15){
           QMessageBox msg;
           msg.setText(QStringLiteral("密码长度应在6至15位之间！"));
           msg.exec();
           flag=false;}
   else if (!(password2==password)) {
           QMessageBox msg;
           msg.setText(QStringLiteral("两次输入密码不同！"));
           msg.exec();
           flag=false;}
   else if(idNum.isEmpty())
         { QMessageBox msg;
            msg.setText(QStringLiteral("请输入账号名称！"));
            msg.exec();
            flag=false;
        }
   if (phoneNum.length()!=11) {
       QMessageBox msg;
       msg.setText(QStringLiteral("请输入11位手机号！"));
       msg.exec();
       flag=false;
   }
   else {
       for (int i=0;i<11;i++) {
           if(!phoneNum[i].isNumber()){
               QMessageBox msg;
               msg.setText(QStringLiteral("请不要输入空格或是其它字符"));
               msg.exec();
               flag=false;
               break;
           }
       }
   }
   //11位手机号

   for (int i=0;i<userlist.size();i++) {
       if(username == userlist[i].getName()){
           QMessageBox msg;
           msg.setText(QStringLiteral("该账户名已注册！"));
           msg.exec();
           flag=false;
       }
       if(username == "wenyan"){
           QMessageBox msg;
           msg.setText(QStringLiteral("该账户名已注册！"));
           msg.exec();
           flag=false;
       }
       if(phoneNum == userlist[i].getphoneNum()){
           QMessageBox msg;
           msg.setText(QStringLiteral("该手机号已注册！"));
           msg.exec();
           flag=false;
       }
       if(idNum == userlist[i].getid()){
           QMessageBox msg;
           msg.setText(QStringLiteral("该身份证号已注册！"));
           msg.exec();
           flag=false;
       }
   }
   return flag;
}



