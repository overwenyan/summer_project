#include "loginwindows.h"
#include "ui_loginwindows.h"
#include<QString>
#include<QMessageBox>
#include"mydatabase.h"
//QVector<AbstractUser>userlist;

loginwindows::loginwindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginwindows)
{
    r = new registerwindows(this);
    ui->setupUi(this);
    connect(ui->bLogin,SIGNAL(clicked()), this, SLOT(login()));
    connect(ui->bRegister, SIGNAL(clicked()), r,SLOT(show()));
}

loginwindows::~loginwindows()
{
    delete ui;
}


bool loginwindows::check()//判断输入是否合法
{
    loginname = ui->lLoginName->text();
    passwd = ui->lPasswd->text();
    if(loginname.isEmpty()||passwd.isEmpty()){
        QMessageBox msg;
        msg.setText(QStringLiteral("请输入账号和密码!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;
    }
    if(isPhoneNum()){//判断是否是手机号
        qDebug()<<"isPhoneNum";
        for (int i=0;i<userlist.size();i++) {
            if(userlist[i].phoneNum == loginname){
                userNum = i;
                if(passwd != userlist[i].passwd){
                    QMessageBox msg;
                    msg.setText(QStringLiteral("密码与手机号不匹配!"));
                    msg.setWindowTitle(QStringLiteral("Error！"));
                    msg.exec();
                    return false;}
                return true;
            }
        }
        {QMessageBox msg;
        msg.setText(QStringLiteral("未查询到该用户，请先注册!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;}
    }
    else if (isidNum()) {//判断是否是身份证号
        qDebug()<<"isIDNum";
        for (int i=0;i<userlist.size();i++) {
            if(userlist[i].idNum == loginname){//查询到了idNum
                userNum = i;
                if(passwd != userlist[i].passwd){
                    QMessageBox msg;
                    msg.setText(QStringLiteral("密码与身份证号不匹配!"));
                    msg.setWindowTitle(QStringLiteral("Error！"));
                    msg.exec();
                    return false;
                }
                return true;
            }//end of if
        {QMessageBox msg;
        msg.setText(QStringLiteral("未查询到该用户，请先注册!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;}//未查询到待写
    }//end of for
    }
    else if (isUserName()) {
        qDebug()<<"isUserName";
        for (int i=0;i<userlist.size();i++) {
            if(userlist[i].username == loginname){//查询到了idNum
                 userNum = i;
                if(passwd != userlist[i].passwd){
                    QMessageBox msg;
                    msg.setText(QStringLiteral("密码与用户名不匹配!"));
                    msg.setWindowTitle(QStringLiteral("Error！"));
                    msg.exec();
                    return false;
                }
                return true;
            }
        }
        {QMessageBox msg;
        msg.setText(QStringLiteral("未查询到该用户，请先注册!"));
        msg.setWindowTitle(QStringLiteral("Error！"));
        msg.exec();
        return false;}//未查询到待写
    }
    else {
        return false;
    }
    return true;
}

bool loginwindows::isPhoneNum()//判断是否是11位手机号
{
    if(loginname.length() != 11)
        return false;
    for (int i=0;i<11;i++) {
        if(!loginname[i].isNumber()){
            return false;
        }
    }
    return true;
}

bool loginwindows::isidNum()
{
    for (int i=0;i<loginname.size()-1;i++) {
        if(!loginname[i].isNumber())
            return false;
    }
    return true;
}

bool loginwindows::isUserName()//用户名很难判断，暂时看作正确
{
    return true;
}

void loginwindows::login()
{
    if(loginname == "wenyan" && passwd=="Sinewave2"){
        admw = new adminwindow();
        this->close();
        admw->show();
        return;
    }
    else {
        if(!check()){
            QMessageBox msg;
            msg.setText(QStringLiteral("登录失败!"));
            msg.setWindowTitle(QStringLiteral("Error！"));
            msg.exec();
            return;
        }
        else {
            mw = new MainWindow(this,&userlist[userNum]);
            this->close();
            mw->show();
        }
    }
    return;
}
