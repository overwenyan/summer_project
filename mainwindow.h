#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"abstractuser.h"
#include <QMainWindow>
#include<QStringListModel>
#include"loginwindows.h"
#include "applymanagerw.h"
#include"applytranslatorw.h"
#include"showmapplyw.h"
#include"showtapplyw.h"
#include"showtranslatorw.h"
#include"translatorwindow.h"
#include"managersubmitw.h"
#include"launchergetw.h"
#include"mydatabase.h"
#include"addpointw.h"

class applyManagerw;
class applyTranslatorw;
class LaunchTask;
class loginwindows;
class showMApplyw;
class showTApplyw;
class setTddl;
class showTranslatorw;
class translatorwindow;
class ManagerSubmitw;
class launcherGetw;
//class editpasswd;
//主界面，即用户界面
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(loginwindows *l,AbstractUser *puser);
    ~MainWindow();
    AbstractUser *getUser();
    void showinfo();
    QVector<task*>cruitMtasklist;//正在招募负责人的任务
    QVector<task*>cruitTtasklist;//正在招募翻译人的任务
    QVector<task*>myLtasklist;//登陆用户发布的任务
    QVector<task*>myMtasklist;//登陆用户负责的任务
    QVector<task*>myTtasklist;//登陆用户翻译的任务
private slots:
    void showMyLaunchedTask();//展示我发布的任务
    void showMyManagedTask();//展示我负责的任务
    void showMyTranslateTask();//展示我翻译的任务
    void launchtask();
    void reLoginw();
    void showtaskGetmanager();//刷新接受负责人的表格
    void showtaskGettranslator();//刷新接受翻译者的表格
    void applyManager();//报名负责人的按钮
    void applyTranslaor();//报名翻译者的按钮
    void showApplyManagerState();//展示当前登录用户发布任务的报名情况
    void showApplyTranslatorState();
    void showCurrentState();
    void editpasswd();
    void setTapplyddl();
    void showFinalTranslator();
    void getMyTranslateTask();
    void managerFinalSubmit();//负责人提交最终译文的窗口
    void launcherGetFinalTranslation();//发布人获取最终翻译稿
    void addMoney();

private:
    Ui::MainWindow *ui;
    loginwindows *parent;
    AbstractUser *pUser;
    LaunchTask*ltaskw;
    QStringListModel *model;
    applyManagerw *apmw;
    applyTranslatorw*aptw;
    showMApplyw *smaw;
    showTApplyw*staw;
    setTddl*stdw;
    showTranslatorw *sTransw;//设置用于负责人显示任务最终负责人的界面
    translatorwindow* transwin;
    ManagerSubmitw*mSubmitw;//负责人提交最终界面的窗口
    launcherGetw*lGetw;
    addPointw*adpw;
    //   editpasswd*edpwd;
};


#endif // MAINWINDOW_H
