#include "applymanagerw.h"
#include "ui_applymanagerw.h"
//#include"task.h"

applyManagerw::applyManagerw(MainWindow *mw, AbstractUser *pAbuser, task* mytask, QWidget *parent):
    QWidget(parent),
    ui(new Ui::applyManagerw),applicant(pAbuser),launchedtask(mytask),
    mwparent(mw)
{
 //  launchedtask = taskpaste(mytask);
    ui->setupUi(this);
    ui->lTaskintro->setText(launchedtask->getIntro());
    ui->taskText->append(launchedtask->getText());
    ui->lDDLapply->setText(launchedtask->getApplyDate().toString("yyyy-MM-dd")+" "+launchedtask->getApplyTime().toString("hh:mm:ss"));
    ui->lReward->setText(QString::number(launchedtask->getReward()));
    ui->lLaunchername->setText(launchedtask->getLauncher()->getName());
    connect(ui->bReturn, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->bApplyManager,SIGNAL(clicked()),this,SLOT(applymanager()));
}

applyManagerw::~applyManagerw()
{
    delete ui;
}

void applyManagerw::applymanager()
{
    QString name = mwparent->getUser()->getName();
    qDebug()<<"当前申请的用户是"<<name;
    for (int i=0;i<launchedtask->applyMlist.size();i++) {
        if(mwparent->getUser()->getName()==launchedtask->applyMlist[i]->getName()){
            QMessageBox msg;
            msg.setText(QStringLiteral("您已经报名了该任务的负责人人！"));
            msg.setWindowTitle(QStringLiteral("请勿重复报名！"));
            msg.exec();
            return;
        }
    }
    if(launchedtask->getApplyLddldatetime() < QDateTime::currentDateTime()){
        QMessageBox msg;
        msg.setText(QStringLiteral("您当前该任务已经过期！"));
        msg.setWindowTitle(QStringLiteral("错误！"));
        msg.exec();
        return;
    }
    (launchedtask->applyMlist).append(mwparent->getUser());
//      qDebug()<<"launchedtask->applyMlist[0]->getName()="<<launchedtask->applyMlist[0]->getName();
      qDebug()<<"launchedtask->applyMlist.size()="<< launchedtask->applyMlist.size();
      QMessageBox msg;
      msg.setText(QStringLiteral("您成功报名了负责人!"));
      msg.setWindowTitle(QStringLiteral("Success！"));
      msg.exec();
      this->close();
}
