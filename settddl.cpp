#include "settddl.h"
#include "ui_settddl.h"
#include"mainwindow.h"
setTddl::setTddl(task*t, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setTddl),mytask(t)
{
    ui->setupUi(this);
    ui->dateEdit->setDisplayFormat("yyyy-MM-dd");
    ui->dateEdit->setMinimumDate(QDate::currentDate().addDays(-365));  // -365天
    ui->dateEdit->setMaximumDate(QDate::currentDate().addDays(365));  // +365天
    ui->dateEdit->setDate(QDate::currentDate());//显示的日期为当前日期
    ui->dateEdit->setCalendarPopup(true);  // 日历弹出
    connect(ui->bSubmit, SIGNAL(clicked()), this, SLOT(taskSubmit()));
    connect(ui->bReturn,SIGNAL(clicked()), this, SLOT(close()));
}

setTddl::~setTddl()
{
    delete ui;
}

void setTddl::taskSubmit()
{
    int num=-1;
    QDate _applyddldate = ui->dateEdit->date();
    QTime _applyddltime = ui->timeEdit->time();
    QDateTime _applyddl(_applyddldate,_applyddltime);
    num = ui->lTnum->text().toInt();
    mytask->setApplyTddldatetime(_applyddl);
    mytask->setTranslatorNum(num);
    mytask->setTaskState(setTaskTddl);
    if(num!=-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("您已经设置了翻译者报名的截止时间和翻译者人数！"));
        msg.setWindowTitle(QStringLiteral("Success"));
        msg.exec();
    }
    else{
        QMessageBox msg;
        msg.setText(QStringLiteral("未设置翻译者人数！"));
        msg.setWindowTitle(QStringLiteral("Success"));
        msg.exec();
        return;
    }
    this->close();
    return;
}
