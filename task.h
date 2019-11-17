#pragma once
#ifndef TASK_H
#define TASK_H

#include <QObject>
#include<QString>
#include<QVector>
//#include"abstractuser.h"
#include"launcher.h"
#include"manager.h"
#include"translator.h"
#include"enum.h"
#include<QDate>
#include<QDateTime>

class launcher;
class manager;
class translator;
//发布的任务的class
//储存任务列表时需要注明{任务原文，任务介绍，任务赏金，任务状态，发布者的姓名}
class task
{
    friend class launcher;
    friend class manager;
    friend class translator;
    friend class AbstractUser;
    friend class mydatabase;
    friend task* taskpaste();
public:
    task();
    task(QString text, QString intro, double _reward,transType tras, QDateTime _applyddl);
  //  task(const task &t);//复制构造函数
  //  task* taskpaste(task* t);
    void setIntro(QString _intro);
    void setText(QString _text);
    void setReward(double _reward);
    void setLaunchdate(QDateTime _dt);
    void setTaskState(taskState _tastate);
    void setTransType(transType _transtype);
    void setApplyddlDate(int year,int month,int day);
    void setApplyddlTime(int hour,int minute=0,int second=0);
    void setLauncher(AbstractUser* tasklauncher);
    void setManager(AbstractUser* taskmanager);
    void setTranslator(translator*tasktranslator);
    void setTranslatorNum(int n);
   // void setabLauncher(AbstractUser* tasklauncher);
    void setApplyTddldatetime(QDateTime applytddl);//设置最晚申请翻译者的时间
    void setFinalTranslation(QString finalT);//设置最终翻译稿

    QDateTime getApplyTddldatetime();//获取最晚申请翻译者的时间
    QDate getApplyTddldate();
    QTime getApplyTddltime();
    bool getisSetTddl();//获取是否设置了翻译者报名截止日期
    QString getStrTaskState();
    QString getStrTransType();
    QDateTime getLdatetime();
    AbstractUser* getLauncher();
    AbstractUser* getManager();
    translator* getTranslator1();
    QString getText();
    QDate getApplyDate();
    QTime getApplyTime();
    QDateTime getApplyLddldatetime();
    QString getIntro();
    taskState getTaskState();
    transType getTransType();
    double getReward();
    int getTranslatorNum();
    QString getFinalTranslation();

    QVector<AbstractUser*>applyMlist;//申请负责人的名单
    QVector<AbstractUser*>applyTlist;//申请翻译者的名单
    QVector<AbstractUser*>tTranslatorlist;//最终确定的翻译者名单
    QVector<QString>sectiontextlist;//任务的分段原文
    QVector<QString>sectiondraftlist;//任务的分段翻译草稿
    QVector<QString>sectionfinallist;//任务的分段翻译终稿
    QVector<QString>sectioncommentlist;//任务的分段审核评论
private:
    QString text;//翻译的内容
    QString intro;//任务备注
    double reward;//酬金
    taskState taState;//任务完成的状态
    transType transtate;//中译英，英译中等种类
    QDate applyddldate;
    QTime applyddltime;
    bool isSetTddl;
    QDateTime applyddl;//最晚申请负责人的时间
    QDateTime applytddl;//最晚申请翻译者的时间
    QString finalTranslation;//最终翻译稿

    AbstractUser* tLauncher;
    AbstractUser* tManager;
    translator*tTranslator1;
    translator*tTranslator2;
    int translatorNum;

  //  QVector<AbstractUser>Tlist;

};
task* taskpaste(task* t);


#endif // TASK_H
