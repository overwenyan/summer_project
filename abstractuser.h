#pragma once
#ifndef ABSTRACTUSER_H
#define ABSTRACTUSER_H

#include <QObject>
#include<QString>
#include<QVector>
#include<iostream>
#include"enum.h"
#include<QDateTime>

//正常情况下每个用户除了资质外都是平等的
class task;
class launcher;
//extern QVector<task>tasklist;


class AbstractUser{
friend class editpasswd;
friend class mydatabase;
friend class registerwindows;
friend class task;
friend class loginwindows;

public:
    AbstractUser();
    AbstractUser(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality,int point=0);
//    AbstractUser(const AbstractUser& abu);
    ~AbstractUser();

    void setInfo();//总注册函数
    //查看信息 相关函数
    QString getName();
    QString getid();
    QString getphoneNum();
    QString getQuality();
    int getBalance();//账户余额
    int getPoints();//账户积分

    bool check(QString Inpasswd);
    void addpoints();//充值
    //任务相关函数
    void launchTask(QString text, QString intro,double _reward,transType transs,int y,int m,int d,int h, int min,int sec);//发布任务，发布任务后在该任务中共成为发布者
    void signManager();//报名负责人
    void signTranslator();//报名译者
    void setPoint(int po);
    void setAmount(double  i);
    double  getAmount();
    QString getPasswd();
    void setPasswd(QString s);
    QString strPhoneNum;
//    virtual task* getpTask() = 0;
    void addMoney(double d);
    void addPoint(int n);//增加积分
    void setName(QString name);
    void setid(QString id);//身份证
    void setPhonenum(QString phoneNum);
    void setpasswd(QString passwd);
    void setQuality(QString _quality);
    void showinfo();//展示个人信息: 手机号码，用户名，身份证号，语言资质，账户余额，积分；总显示函数

protected:
    //用户需要填入的选项
    QString phoneNum;//手机号
    QString username;//用户名，唯一认证
    QString idNum;//身份证号
    QString passwd;//密码
    QString quality;//资质描述
    double Amount;//账户余额
    int points;//积分
};

#endif // ABSTRACTUSER_H
