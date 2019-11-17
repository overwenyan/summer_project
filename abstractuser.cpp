#include "abstractuser.h"
#include"task.h"
//#include<QVector>
extern QVector<task>tasklist;

AbstractUser::AbstractUser()
{}

AbstractUser::AbstractUser(QString _phoneNum, QString _username, QString _idNum, QString _passwd, QString _quality,int point):
    phoneNum(_phoneNum), username(_username), idNum(_idNum), passwd(_passwd), quality(_quality),points(point)
{
    Amount=0;
}

AbstractUser::~AbstractUser(){}

QString AbstractUser::getName()
{
    return username;
}
QString AbstractUser::getid(){return idNum;}

QString AbstractUser::getphoneNum()
{
    return phoneNum;
}

QString AbstractUser::getQuality()
{
    return quality;
}

int AbstractUser::getPoints()
{
    return  points;
}
//设置函数
void AbstractUser::setName(QString name){
    username = name;
}

void AbstractUser::setid(QString id){
    idNum = id;
}

void AbstractUser::setPhonenum(QString phoneNum){this->phoneNum = phoneNum;}

void AbstractUser::setpasswd(QString passwd){
    this->passwd = passwd;
}

void AbstractUser::setQuality(QString _quality){
    quality = _quality;
}

bool AbstractUser::check(QString Inpasswd){
    if(Inpasswd == passwd)
        return true;
    else
        return false;
}

void AbstractUser::launchTask(QString text, QString intro, double _reward, transType transs, int y, int m, int d, int h, int min, int sec)
{
    QDate mydate(y,m,d);
    QTime mytime(h,min,sec);
    QDateTime mydatetime(mydate,mytime);
    task mylaunchtask(text,intro,_reward,transs,mydatetime);
    mylaunchtask.taState = launched;
    tasklist.append(mylaunchtask);

}//然而这个函数没什么用



void AbstractUser::setPoint(int po)
{
    points=po;
}

void AbstractUser::setAmount(double i)
{

    Amount=i;
}



double AbstractUser::getAmount()
{
    return Amount;
}

QString AbstractUser::getPasswd()
{
    return passwd;
}

void AbstractUser::setPasswd(QString s)
{
    passwd=s;
}

void AbstractUser::addMoney(double d)
{
    Amount+=d;
}

void AbstractUser::addPoint(int n)
{
    points += n;
}



