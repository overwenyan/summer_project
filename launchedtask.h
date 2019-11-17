/*
#pragma once
#ifndef LAUNCHEDTASK_H
#define LAUNCHEDTASK_H

#include <QObject>
#include"task.h"
#include"launcher.h"
#include<QDate>
#include<QDateTime>
//已发布的任务
//储存任务列表时需要注明{任务原文，任务介绍，任务赏金，任务状态，发布者的姓名，任务的截止日期，任务的截止时间}
class launcher;
class manager;
class task;
class launchedtask :public task
{
    friend class launcher;
public:
    launchedtask();
    launchedtask(QString text, QString intro, double _reward,transType tras,QDateTime _applyddl);
    void setApplyddlDate(int year,int month,int day);
    void setApplyddlTime(int hour,int minute=0,int second=0);
    QDateTime getdatetime();
    void setLauncher(launcher *plauncher);
private:
    launcher* tLauncher;
    QDate applyddldate;
    QTime applyddltime;
    QDateTime applyddl;
    manager* tManager;
};

#endif // LAUNCHEDTASK_H
*/
