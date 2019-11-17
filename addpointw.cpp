#include "addpointw.h"
#include "ui_addpointw.h"
#include<QMessageBox>
addPointw::addPointw(AbstractUser *u, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addPointw),abu(u)
{
    ui->setupUi(this);
    ui->lUsername->setText(abu->getName());
    ui->lAmount->setText(QString::number( abu->getAmount() ));
    connect(ui->bSubmit,SIGNAL(clicked()),this,SLOT(addAmount()));
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
}

addPointw::~addPointw()
{
    delete ui;
}

void addPointw::addAmount()
{
    double d = ui->lAdd->text().toDouble();
    abu->addMoney(d);
    QMessageBox msg;
    QString s1 = "当前的余额为";
    QString s2 = QString::number(abu->getAmount());
    QString s = s1 + s2;
    msg.setText(s);
    msg.setWindowTitle(QStringLiteral("成功充值"));
    msg.exec();
    this->close();
}
