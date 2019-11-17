#include "translator.h"


translator::translator()
{

}

translator::translator(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality, task *_originTask)
    : AbstractUser(_phoneNum,_username,_idNum,_passwd,_quality),mytask(_originTask){}

translator::translator(AbstractUser _user, task *_mytask)
        :AbstractUser (_user),mytask(_mytask)
{

}

void translator::setTask(task *newtask)
{
    mytask=newtask;
}

