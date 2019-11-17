#include"abstractuser.h"
#include "manager.h"


manager::manager()
{

}

manager::manager(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask)
    : AbstractUser(_phoneNum,_username,_idNum,_passwd,_quality),mytask(_originTask){}

manager::manager(AbstractUser _user, task *_mytask)
    :AbstractUser (_user),mytask(_mytask)
{

}

void manager::setTask(task *newtask)
{
mytask=newtask;
}
