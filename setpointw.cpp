#include "setpointw.h"
#include "ui_setpointw.h"

setPointw::setPointw(AbstractUser *u, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setPointw),userparent(u)
{
    ui->setupUi(this);
    ui->lUsername->setText(userparent->getName());
    ui->lQuality->setText(userparent->getQuality());
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bSubmit,SIGNAL(clicked()),this,SLOT(submit()));
}

setPointw::~setPointw()
{
    delete ui;
}

void setPointw::submit()
{
    int d=ui->lPoint->text().toInt();
    userparent->setPoint(d);
    QString s1 = "已设置了用户";
    QString s2 = userparent->getName();
    QString s3 = QString::number(d);
    QString s4 = "的积分";
    QString s = s1+s2+s3+s4;
    QMessageBox msg;
    msg.setText(s);
    msg.exec();
    this->close();
}
