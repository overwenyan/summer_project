#ifndef SETTDDL_H
#define SETTDDL_H

#include <QWidget>
//#include"mainwindow.h"
class task;

//负责人设置翻译人报名截止日期
namespace Ui {
class setTddl;
}

class setTddl : public QWidget
{
    Q_OBJECT

public:
    explicit setTddl(task*t,QWidget *parent = nullptr);
    ~setTddl();
private slots:
    void taskSubmit();//提交负责人设置的详细信息，包括翻译者申请截止日期，翻译者人数等

private:
    Ui::setTddl *ui;
    task*mytask;
//    MainWindow*mwparent
};

#endif // SETTDDL_H
