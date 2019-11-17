#pragma once
#ifndef LAUNCHER_H
#define LAUNCHER_H
#include"abstractuser.h"
#include"mydatabase.h"
#include"task.h"
#include"enum.h"

//class task;
class launcher :public AbstractUser{
public:
    //{手机号，用户名，身份证号，密码，资质评价，发布的原始任务}
    //指针只能在内存中工作，储存时需要指明任务的属性和名称
    launcher();
    launcher(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask=nullptr);
    launcher(AbstractUser user,task *_originTask=nullptr);
    ~launcher();

    void setMoney(double m);//设置任务酬金
    taskState getTaskState();
    void getManagerSigned();//查看负责人报名情况，尚不确定是否需要void类型
    void setManager();//确定负责人
    void setTask(task *newptask);//设置任务
    void confirm();//确认任务完成
    void payMoney();//支付酬金
private:
    task *mytask;
    double money;//酬金
};

#endif // LAUNCHER_H
