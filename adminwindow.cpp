#include "adminwindow.h"
#include "ui_adminwindow.h"
#include"mydatabase.h"


adminwindow::adminwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminwindow)
{
    ui->setupUi(this);
    refresh();
    showTask();
    connect(ui->bSetpoint,SIGNAL(clicked()),this,SLOT(setpoint()));
    connect(ui->bRefresh,SIGNAL(clicked()),this,SLOT(refresh()));
    connect(ui->bRefreshTask,SIGNAL(clicked()),this,SLOT(showTask()));
}

adminwindow::~adminwindow()
{
    delete ui;
}

void adminwindow::setpoint()
{
    int row = -1;
    row = ui->twUser->currentRow();
    if(row == -1||row > userlist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("选择无效！"));
        msg.setWindowTitle(QStringLiteral("error"));
        msg.exec();
        return;
    }
    spw = new setPointw(&userlist[row]);
    spw->show();
}

void adminwindow::refresh()
{
    ui->twUser->setRowCount(userlist.size()+1);
    ui->twUser->setColumnCount(6);
    for (int i=0;i<6;i++) {
        ui->twUser->setColumnWidth(i,120);
    }
    ui->twUser->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "用户名" << "手机号" << "身份证号" <<"密码"<< "积分"<<"余额";
    ui->twUser->setHorizontalHeaderLabels(sListHeader);
    for (int i=0;i<userlist.size();i++) {
        ui->twUser->setItem(i,0,new QTableWidgetItem(userlist[i].getName()));
        ui->twUser->setItem(i,1,new QTableWidgetItem(userlist[i].getphoneNum()));
        ui->twUser->setItem(i,2,new QTableWidgetItem(userlist[i].getid()));
        ui->twUser->setItem(i,3,new QTableWidgetItem(userlist[i].getPasswd()));
        ui->twUser->setItem(i,4,new QTableWidgetItem(QString::number( userlist[i].getPoints())));
        ui->twUser->setItem(i,5,new QTableWidgetItem(QString::number( userlist[i].getAmount())));
    }
}

void adminwindow::showTask()
{
    ui->twTask->setRowCount(5);
    ui->twTask->setColumnCount(5);
    for (int i=0;i<5;i++) {
        ui->twTask->setColumnWidth(i,160);
    }
    ui->twTask->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "任务名" << "任务原文" << "发布人" <<"任务状态"<< "赏金";
    ui->twUser->setHorizontalHeaderLabels(sListHeader);
    for (int i=0;i<tasklist.size();i++) {
        ui->twTask->setItem(i,0,new QTableWidgetItem(tasklist[i].getIntro()));
        ui->twTask->setItem(i,1,new QTableWidgetItem(tasklist[i].getText()));
        ui->twTask->setItem(i,2,new QTableWidgetItem(tasklist[i].getLauncher()->getName()));
        ui->twTask->setItem(i,3,new QTableWidgetItem(tasklist[i].getStrTaskState()));
        ui->twTask->setItem(i,4,new QTableWidgetItem(QString::number(tasklist[i].getReward())));
    }
}



