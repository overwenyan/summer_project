#pragma once
#ifndef MANAGER_H
#define MANAGER_H

//负责人
//#include <QObject>
#include"abstractuser.h"
//#include"task.h"

class AbstractUser;
class task;
class manager:public AbstractUser{
public:
   manager();
   manager(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask=nullptr);
   manager(AbstractUser _user, task* _mytask=nullptr);
    void recruitTranslators(int _num);//招募译者
    void setTask(task* newtask);
    //查看报名情况
    void confirmTranslators();//确定译者
    void taskDistribute();//分配任务
    void reviewTranslation();//审核译文并提出建议
    void submitFinal();//（译文整合）提交最终结果
private:
    task *mytask;//负责的任务
};

#endif // MANAGER_H
