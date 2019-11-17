#include "translatorwindow.h"
#include "ui_translatorwindow.h"
//翻译者用于和负责人沟通的界面



translatorwindow::translatorwindow(int n, task *t, QWidget *parent):
    QWidget(parent),
    ui(new Ui::translatorwindow),translatorNum(n),mytask(t)
{
    ui->setupUi(this);
    qDebug()<<"translatorNum =="<<translatorNum;
    qDebug()<<"mytask->sectiontextlist.size() =="<<mytask->sectiontextlist.size();
    qDebug()<<"mytask->sectiondraftlist.size() =="<<mytask->sectiondraftlist.size();
    qDebug()<<"mytask->sectioncommentlist.size() =="<<mytask->sectioncommentlist.size();
    ui->tMysectiontask->setText(mytask->sectiontextlist[translatorNum]);
    ui->tMywork->setText(mytask->sectiondraftlist[translatorNum]);
    ui->tComment->setText(mytask->sectioncommentlist[translatorNum]);
    connect(ui->bReturn,SIGNAL(clicked()),this, SLOT(close()));
    connect(ui->bSubmit,SIGNAL(clicked()),this, SLOT(submitWork()));
}

translatorwindow::~translatorwindow()
{
    delete ui;
}

void translatorwindow::submitWork()
{
    mytask->sectiondraftlist[translatorNum] = ui->tMywork->toPlainText();
    QMessageBox msg;
    msg.setText(QStringLiteral("已提交翻译草稿!"));
    msg.exec();
    this->close();
}
