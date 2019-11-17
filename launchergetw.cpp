#include "launchergetw.h"
#include "ui_launchergetw.h"

launcherGetw::launcherGetw(task *t, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::launcherGetw),mytask(t)
{
    ui->setupUi(this);
    ui->lBookIntro->setText(mytask->getIntro());
    ui->tOriginText->setText(mytask->getText());
    ui->tTranslation->setText(mytask->getFinalTranslation());
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bPass,SIGNAL(clicked()),this,SLOT(addPoints()));
}

launcherGetw::~launcherGetw()
{
    delete ui;
}

void launcherGetw::addPoints()
{
    for (int i=0;i<userlist.size();i++) {
        if(mytask->getManager()->getName()==userlist[i].getName()){
            userlist[i].addPoint(3);//负责人多3分
            userlist[i].addMoney(mytask->getReward()/3);//负责人领取1/4的资金
        }
    }

    //mytask->getManager()->addPoint(3);
    for (int i=0;i<mytask->tTranslatorlist.size();i++) {
        for (int j=0;j<userlist.size();j++) {
            if(userlist[j].getName()==mytask->tTranslatorlist[i]->getName()){
                userlist[j].addPoint(1);
                userlist[j].addMoney(2*mytask->getReward()/(3*mytask->getTranslatorNum()));                          //翻译者多1分
            }
        }
    }
    mytask->getLauncher()->addMoney(-mytask->getReward());  //减少资金
    mytask->setTaskState(paid);

    QMessageBox msg;
    msg.setText(QStringLiteral("审查通过，积分已收!"));
    msg.setWindowTitle(QStringLiteral("任务流程结束!"));
    msg.exec();
    this->close();
}
