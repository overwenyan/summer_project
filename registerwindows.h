#ifndef REGISTERWINDOWS_H
#define REGISTERWINDOWS_H


#pragma once
#include <QMainWindow>
#include<QObject>
//#include"mydatabase.h"
#include"abstractuser.h"
#include<QVector>
#include<QString>
#include<QSqlTableModel>
#include"loginwindows.h"
extern QVector<AbstractUser>userlist;
//注册
class loginwindows;
class registerwindows;
namespace Ui {
class registerwindows;
}

class registerwindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit registerwindows(loginwindows*l);
    ~registerwindows();
public slots:
    void sendinfo();


private:
    Ui::registerwindows *ui;
    loginwindows*parent;
    bool check();
    bool checkId();

    QString phoneNum;
    QString username;
    QString idNum;//身份证号
    QString password;
    QString password2;
    QString quality;//语言资质说明；可以让用户进行选择填空

    QSqlTableModel *model;
    QSqlQueryModel *qmodel ;
};

#endif // REGISTERWINDOWS_H
