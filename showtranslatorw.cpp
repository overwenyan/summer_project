#include "showtranslatorw.h"
#include "ui_showtranslatorw.h"



showTranslatorw::showTranslatorw(task *t, QWidget *parent):
    QWidget(parent),
    ui(new Ui::showTranslatorw),mytask(t)
{
    ui->setupUi(this);
    ui->lTaskname->setText(mytask->getIntro());
    ui->tTranslatorlist->setColumnCount(2);
    ui->tTranslatorlist->setRowCount(4);
    ui->tTranslatorlist->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "翻译者账户名"<<"翻译者资质" ;
    ui->tTranslatorlist->setHorizontalHeaderLabels(sListHeader);

    if(mytask->tTranslatorlist.length()!=0){
        for (int i=0 ;i<mytask->tTranslatorlist.length();i++) {
                ui->tTranslatorlist->setItem(i,0,new QTableWidgetItem(mytask->tTranslatorlist[i]->getName()));
                ui->tTranslatorlist->setItem(i,1,new QTableWidgetItem(mytask->tTranslatorlist[i]->getQuality()));
        }
    }
    else {
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有翻译人!"));
        msg.exec();
    }
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bAssign,SIGNAL(clicked()),this,SLOT(setSectionTask()));
}

showTranslatorw::~showTranslatorw()
{
    delete ui;
}

void showTranslatorw::setSectionTask()
{
    int num=-1;
    num = ui->tTranslatorlist->currentRow();
    if(num==-1||num>mytask->tTranslatorlist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有人选择翻译人或选择方式不合法!"));
        msg.exec();
        return;
    }

    st =new sectionTask(mytask->tTranslatorlist[num],mytask);
    st->show();
}
