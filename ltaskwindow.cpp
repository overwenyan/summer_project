#include "ltaskwindow.h"
#include "ui_launchtask.h"
#include<QMessageBox>
#include<QDebug>
launcher newlauncher;
launcher *l;
extern QVector<task>tasklist;
extern QVector<AbstractUser>launcherlist;
LaunchTask::LaunchTask(MainWindow *mw, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LaunchTask),mwparent(mw)
{
    ui->setupUi(this);
    connect(ui->bReturn,SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->bSubmit, SIGNAL(clicked()), this, SLOT(taskSubmit()) );
    ui->dateEdit->setDisplayFormat("yyyy-MM-dd");
    ui->dateEdit->setMinimumDate(QDate::currentDate().addDays(-365));  // -365天
    ui->dateEdit->setMaximumDate(QDate::currentDate().addDays(365));  // +365天
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setCalendarPopup(true);  // 日历弹出
}

LaunchTask::~LaunchTask()
{
    delete ui;
}

//    launchedtask(QString text, QString intro, double _reward,transState tras,launcher* _launcher,QDateTime _applyddl);
void LaunchTask::taskSubmit()
{
    QString text =  ui->tText->toPlainText();
    QString intro = ui->tIntro->toPlainText();
    double _reward = ui->lSumReward->text().toDouble();
    transType tras;
    if(ui->cBTransType->currentIndex() == 0)//中译英
        {tras = C2E;}
    else if(ui->cBTransType->currentIndex() == 1)//英译中
        {tras = E2C;}
    else {tras= E2C;}
    QDate _applyddldate = ui->dateEdit->date();
    QTime _applyddltime = ui->timeEdit->time();
    QDateTime _applyddl(_applyddldate,_applyddltime);

    task newtask(text, intro, _reward, tras, _applyddl);
    newtask.setTaskState(launched);
/*
    newlauncher.setTask(&newtask);
    l = new launcher(newlauncher);

    newlauncher = thisuser;
    newtask.setLauncher(l);
   */
    AbstractUser* pthisuser = ( mwparent->getUser());
    launcherlist.append(*pthisuser);
    newtask.setLauncher(pthisuser);
    tasklist.append(newtask);
    qDebug()<<"tasklist.length()="<<tasklist.length();
 //   qDebug()<<launcherlist[0].getName();
 //   qDebug()<<"A new task is launched by "<<newlauncher.getName();
 //   qDebug()<<"New launched task's text is "<<tasklist[0].getText();
 //   qDebug()<<"tasklist[2]："<<tasklist[2].getLauncher()->getName()<<" "<<tasklist[2].getIntro();
    QMessageBox msg;
    msg.setText(QStringLiteral("任务已发布！"));
    msg.exec();
    this->close();
}

