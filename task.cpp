#include "task.h"

task::task()
{
    taState = launched;
}

task::task(QString text, QString intro, double _reward, transType tras,QDateTime _applyddl)
    :text(text),intro(intro),reward(_reward),transtate(tras),applyddl(_applyddl)
{
    taState = launched;
    applyddldate = _applyddl.date();
    applyddltime = _applyddl.time();
    tLauncher = nullptr;
    tManager = nullptr;
    isSetTddl=false;
    translatorNum=2;
 //   qDebug()<<"正在调用task类的构造函数。。。";
}
/*
task::task(const task &t)
{
    text = t.text;
    intro = t.intro;
    reward = t.reward;
    taState = t.taState;
    transtate = t.transtate;
    tLauncher = t.tLauncher;
    applyddl = t.applyddl;
    for (int i=0;i<applyMlist.length();i++) {
        applyMlist[i]=t.applyMlist[i];
    }
    //  qDebug()<<"正在调用task类的复制构造函数。。。";
}
*/
void task::setIntro(QString _intro)
{
    intro = _intro;
}




QString task::getText()
{
    return this->text;
}

void task::setText(QString _text)
{
    text=_text;
}

void task::setReward(double _reward)
{
    reward=_reward;
}

void task::setLaunchdate(QDateTime _dt)
{
    applyddl=_dt;
}

void task::setTaskState(taskState _tastate)
{
    taState=_tastate;
}

void task::setTransType(transType _transtype)
{
    transtate = _transtype;
}



void task::setApplyddlDate(int year, int month, int day)
{
    QDate newdate(year,month,day);
    applyddldate = newdate;
}

void task::setApplyddlTime(int hour, int minute, int second)
{
    QTime newtime(hour,minute,second);
    applyddltime = newtime;
}

QDateTime task::getLdatetime()
{
    return applyddl;
}

void task::setLauncher(AbstractUser* tasklauncher)
{
    tLauncher = tasklauncher;
}

void task::setManager(AbstractUser *taskmanager)
{
    tManager=taskmanager;
}

void task::setTranslator(translator *tasktranslator)
{
    tTranslator1=tasktranslator;
}

void task::setTranslatorNum(int n)
{
    translatorNum=n;
}

void task::setApplyTddldatetime(QDateTime _applytddl)
{
    applytddl=_applytddl;
    isSetTddl=true;
    return;
}

void task::setFinalTranslation(QString finalT)
{
    finalTranslation=finalT;
}

QDateTime task::getApplyTddldatetime()
{
    return applytddl;
}

QDate task::getApplyTddldate()
{
    QDate date = applytddl.date();
    return date;
}

QTime task::getApplyTddltime()
{
    QTime time =applytddl.time();
    return  time;
}

bool task::getisSetTddl()
{
    return isSetTddl;
}

AbstractUser* task::getLauncher()
{
    return tLauncher;
}

AbstractUser*task::getManager()
{
    return  tManager;
}

translator *task::getTranslator1()
{
    return tTranslator1;
}

//void task::setabLauncher(AbstractUser *tasklauncher){//  tLauncher = tasklauncher;}

QString task::getStrTaskState()
{//enum taskState{launched, managed, translated, assigned, submitted, paid};//已发布，已报名负责人，已招募译者，已分配任务，已提交， 酬金已发
    QString c;
    if(taState == launched){
        c="已发布，正在招募负责人";}
    else if(taState == managed){
        c="正在等待负责人设置时间";
    }
    else if (taState == setTaskTddl) {
        c="已设置翻译者报名截止日期，等待报名";
    }
     else if (taState == translated) {
            c="正在翻译中";
    }
        else if (taState == assigned) {
            c="正在分配任务";
        }
        else if (taState == submitted) {
            c="任务已提交";
        }
        else if(taState == paid){c="酬金已发";}
        else {}
    return c;
}

QString task::getStrTransType()
{
    QString s;
    if(transtate==C2E){s="中译英"; }
    else if(transtate==E2C){
        s="英译中";
    }
    return s;
}

QTime task::getApplyTime()
{
    return applyddltime;
}

QDateTime task::getApplyLddldatetime()
{
    return applyddl;
}

QString task::getIntro()
{
    return intro;
}

taskState task::getTaskState()
{
    return taState;
}

transType task::getTransType()
{
    return transtate;
}

double task::getReward()
{
    return reward;
}

int task::getTranslatorNum()
{
    return translatorNum;
}

QString task::getFinalTranslation()
{
    return finalTranslation;
}

QDate task::getApplyDate()
{
    return applyddldate;
}

task *taskpaste(task *t)
{
    task *newt = new task(*t);
    newt->setText( t->getText());
    newt->setIntro(  t->getIntro());
    newt->setReward(t->getReward());

    newt->setTaskState(t->getTaskState());
    newt->setTransType(t->getTransType());
    newt->setLauncher(t->getLauncher());
    newt->setLaunchdate(t->getLdatetime());
    for (int i=0;i<t->applyMlist.length();i++) {
        newt->applyMlist[i]=t->applyMlist[i];
        qDebug()<<"我在复制。。。";
    }
      qDebug()<<"正在调用task类 p->p 的复制构造函数。。。";
    return newt;
}
