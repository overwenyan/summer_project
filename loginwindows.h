#pragma once
#ifndef LOGINWINDOWS_H
#define LOGINWINDOWS_H

#include <QMainWindow>
#include<QVector>
#include"abstractuser.h"
#include"registerwindows.h"
#include"mainwindow.h"
#include"adminwindow.h"
class adminwindow;
class registerwindows;
class MainWindow;
//extern QVector<AbstractUser>userlist;
//登录界面
namespace Ui {
class loginwindows;
}

class loginwindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginwindows(QWidget *parent = nullptr);
    ~loginwindows();
    bool check();
    bool isPhoneNum();
    bool isidNum();
    bool isUserName();
private slots:
    void login();
//    void on_bLogin_clicked();
//    void on_bRegister_clicked();

private:
    Ui::loginwindows *ui;
    registerwindows *r;
    adminwindow*admw;
    MainWindow *mw;
    QString loginname;
    QString passwd;
    int userNum;
};

#endif // LOGINWINDOWS_H
