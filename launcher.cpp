#include "launcher.h"


launcher::launcher(){}

launcher::launcher(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask)
    : AbstractUser(_phoneNum,_username,_idNum,_passwd,_quality),mytask(_originTask){}

launcher::launcher(AbstractUser user, task *_originTask)
    :AbstractUser (user), mytask(_originTask)
{}

launcher::~launcher()
{}

void launcher::setMoney(double m)
{
    money = m;
}

taskState launcher::getTaskState()
{
    return mytask->taState;
}

void launcher::setTask(task *newptask)
{
    mytask = newptask;
}

