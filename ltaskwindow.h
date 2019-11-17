#pragma once
#ifndef LAUNCHTASK_H
#define LAUNCHTASK_H

#include <QWidget>
#include<QObject>
#include"mainwindow.h"
#include"task.h"
#include"launcher.h"
extern QVector<AbstractUser>launcherlist;
extern QVector<task>tasklist;
//extern launcher newlauncher;
extern launcher*l;
//发布任务界面
namespace Ui {
class LaunchTask;
}

class LaunchTask : public QWidget
{
    Q_OBJECT

public:
    explicit LaunchTask(MainWindow *mw,QWidget *parent = nullptr);
    ~LaunchTask();

private slots:
    void taskSubmit();
private:
    Ui::LaunchTask *ui;
    MainWindow *mwparent;
};

#endif // LAUNCHTASK_H

