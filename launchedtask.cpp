/*
#include "launchedtask.h"
#include"task.h"


launchedtask::launchedtask()
{

}

launchedtask::launchedtask(QString text, QString intro, double _reward, transType tras, QDateTime _applyddl)
    :task(text,intro,_reward,tras),applyddl(_applyddl){}


void launchedtask::setApplyddlDate(int year, int month, int day)
{
    QDate newdate(year,month,day);
    applyddldate = newdate;
}

void launchedtask::setApplyddlTime(int hour, int minute, int second)
{
    QTime newtime(hour,minute,second);
    applyddltime = newtime;
}

QDateTime launchedtask::getdatetime()
{
    QDateTime applyddl(applyddldate,applyddltime);
    return applyddl;
}

void launchedtask::setLauncher(launcher *plauncher)
{
    tLauncher = plauncher;
}
*/




