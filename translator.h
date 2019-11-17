#pragma once
#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include"abstractuser.h"

class task;
class translator : public AbstractUser{
public:
    translator();
    translator(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask=nullptr);
    translator(AbstractUser _user, task* _mytask=nullptr);
    void setTask(task* newtask);
    void submitTransText();//提交译文
    void editTransText();//编辑译文

private:
    task* mytask;
};

#endif // TRANSLATOR_H
