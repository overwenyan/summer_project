#include "showtapplyw.h"
#include "ui_showtapplyw.h"
#include"applytranslatorw.h"
translator newtranslator;
translator*t;

showTApplyw::showTApplyw(task* t,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showTApplyw),mytask(t)
{
    ui->setupUi(this);
//    qDebug()<<"t->applyTlist.size()=="<<t->applyTlist.size();
  //  mytask = taskpaste(t);
    ui->setupUi(this);
    ui->lTaskname->setText(mytask->getIntro());
    ui->tApplierlist->setColumnCount(2);
    ui->tApplierlist->setRowCount(4);
    ui->tApplierlist->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "申请者账户名"<<"申请者资质" ;
    ui->tApplierlist->setHorizontalHeaderLabels(sListHeader);
//    qDebug()<<"mytask->applyTlist.size()=="<<mytask->applyTlist.size();

    if(mytask->applyTlist.length()!=0){
        for (int i=0 ;i<mytask->applyTlist.length();i++) {
                ui->tApplierlist->setItem(i,0,new QTableWidgetItem(mytask->applyTlist[i]->getName()));
                ui->tApplierlist->setItem(i,1,new QTableWidgetItem(mytask->applyTlist[i]->getQuality()));
        }
    }
    else {
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有人报名翻译人!"));
        msg.exec();
    }
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bConfirm,SIGNAL(clicked()),this,SLOT(selectTranslator()));
}

showTApplyw::~showTApplyw()
{
    delete ui;
}



void showTApplyw::selectTranslator()
{
    int row = -1;
    row = ui->tApplierlist->currentRow();
    qDebug()<<mytask->getIntro()<<"mytask->applyTlist.size() =="<<mytask->applyTlist.size();
    if(row == -1||row > mytask->applyTlist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("选择无效！"));
        msg.setWindowTitle(QStringLiteral("error"));
        msg.exec();
        return;
    }
    AbstractUser* thisuser = (mytask->applyTlist[row]);
    mytask->tTranslatorlist.append(thisuser);
    mytask->setTaskState(translated);
    mytask->applyTlist.remove(row);

    mytask->sectiontextlist.append("");
    mytask->sectiondraftlist.append("");
    mytask->sectionfinallist.append("");
    mytask->sectioncommentlist.append("");
  //  mytask->sectioncommentlist.append("");
    qDebug()<<mytask->sectioncommentlist.size();

    qDebug()<<"new translator is"<<thisuser->getName();
    QMessageBox msg;
    QString s1="已选择";
    QString s2=thisuser->getName();
    QString s3="作为翻译人";
    QString s = s1+s2+s3;
    msg.setText(s);
    msg.setWindowTitle(QStringLiteral("您已经选择翻译人!"));
    msg.exec();
    this->close();
    return;
}
