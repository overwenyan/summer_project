#pragma once
#ifndef APPLYTRANSLATORW_H
#define APPLYTRANSLATORW_H

#include <QWidget>
#include"abstractuser.h"
#include"launcher.h"
#include"task.h"
#include"mainwindow.h"
//查看翻译人申请界面，可以确定翻译人
class MainWindow;
namespace Ui {
class applyTranslatorw;
}

class applyTranslatorw : public QWidget
{
    Q_OBJECT

public:
    explicit applyTranslatorw(MainWindow*mw, AbstractUser*pAbuser,task *mytask,QWidget *parent = nullptr);
    ~applyTranslatorw();

private slots:
    void applytranslator();
private:
    Ui::applyTranslatorw *ui;
    AbstractUser* applicant;
    MainWindow* mwparent;
    task* managedtask;
};

#endif // APPLYTRANSLATORW_H
