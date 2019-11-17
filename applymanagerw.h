#pragma once
#ifndef APPLYMANAGERW_H
#define APPLYMANAGERW_H

#include <QWidget>
#include"abstractuser.h"
#include"launcher.h"
#include"task.h"
#include"mainwindow.h"
//查看负责人申请界面，可以确定负责人
class MainWindow;
namespace Ui {
class applyManagerw;
}

class applyManagerw : public QWidget
{
    Q_OBJECT

public:
    explicit applyManagerw(MainWindow*mw, AbstractUser*pAbuser,task *mytask, QWidget *parent = nullptr);

    ~applyManagerw();
private slots:
    void applymanager();
private:
    Ui::applyManagerw *ui;
    AbstractUser* applicant;
    task* launchedtask;
    MainWindow* mwparent;
};

#endif // APPLYMANAGERW_H
