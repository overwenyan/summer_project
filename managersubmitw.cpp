#include "managersubmitw.h"
#include "ui_managersubmitw.h"


ManagerSubmitw::ManagerSubmitw(task *t, QWidget *parent):
    QWidget(parent),
    ui(new Ui::ManagerSubmitw),mytask(t)
{
    ui->setupUi(this);
    ui->lBookIntro->setText(mytask->getIntro());
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bFinalSubmit,SIGNAL(clicked()),this,SLOT(submit()));
}

ManagerSubmitw::~ManagerSubmitw()
{
    delete ui;
}

void ManagerSubmitw::submit()
{
    QString final = ui->tFinalTranslation->toPlainText();
    mytask->setFinalTranslation(final);
    mytask->setTaskState(submitted);
    QMessageBox msg;
    msg.setText(QStringLiteral("已经提交最终翻译稿!"));
    msg.setWindowTitle(QStringLiteral("Error！"));
    msg.exec();
    this->close();
}
