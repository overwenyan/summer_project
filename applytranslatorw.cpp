#include "applytranslatorw.h"
#include "ui_applytranslatorw.h"


applyTranslatorw::applyTranslatorw(MainWindow *mw, AbstractUser *pAbuser, task *mytask, QWidget *parent):
    QWidget(parent),
    ui(new Ui::applyTranslatorw),applicant(pAbuser),mwparent(mw),managedtask(mytask)
{
    ui->setupUi(this);
    ui->lTaskintro->setText(managedtask->getIntro());
    ui->taskText->append(managedtask->getText());
    ui->lDDLapply->setText(managedtask->getApplyDate().toString("yyyy-MM-dd")+" "+managedtask->getApplyTime().toString("hh:mm:ss"));
    ui->lReward->setText(QString::number(managedtask->getReward()));
    ui->lLaunchername->setText(managedtask->getLauncher()->getName());
    ui->lManagername->setText(managedtask->getManager()->getName());
    connect(ui->bReturn, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->bApplyTranslator,SIGNAL(clicked()),this,SLOT(applytranslator()));
}



applyTranslatorw::~applyTranslatorw()
{
    delete ui;
}

void applyTranslatorw::applytranslator()
{
    for (int i=0;i<managedtask->applyTlist.size();i++) {
        if(mwparent->getUser()->getName()==managedtask->applyTlist[i]->getName()){
            QMessageBox msg;
            msg.setText(QStringLiteral("您已经报名了该任务的翻译人！"));
            msg.setWindowTitle(QStringLiteral("错误！"));
            msg.exec();
            return;
        }
    }
    (managedtask->applyTlist).append(mwparent->getUser());
//      qDebug()<<"launchedtask->applyMlist[0]->getName()="<<launchedtask->applyMlist[0]->getName();
    qDebug()<<"managedtask->applyTlist.size()="<< managedtask->applyTlist.size();
    QMessageBox msg;
    msg.setText(QStringLiteral("您成功报名了翻译人!"));
    msg.setWindowTitle(QStringLiteral("Success！"));
    msg.exec();
    this->close();
}
