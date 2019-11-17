#include "sectiontask.h"
#include "ui_sectiontask.h"



sectionTask::sectionTask(AbstractUser *trans,task*t, QWidget *parent):
    QWidget(parent),
    ui(new Ui::sectionTask),ptask(t),ptranslator(trans)
{
    ui->setupUi(this);
    ui->lTraslatorname->setText(ptranslator->getName());
    ui->tOrigin->setText(ptask->getText());
    int i;
    for (int k=0;k<ptask->tTranslatorlist.size();k++) {
        if(ptask->tTranslatorlist[k]->getName()==ptranslator->getName()){
            i=k;
        }
    }
    ui->tSection->setText(ptask->sectiontextlist[i]);
    ui->tTransTextdraft->setText(ptask->sectiondraftlist[i]);
    ui->tMySuggestion->setText(ptask->sectioncommentlist[i]);
    connect(ui->bSubmit,SIGNAL(clicked()),this,SLOT( setSectionTask()));
    connect(ui->bClose,SIGNAL(clicked()),this,SLOT(close()));
}


sectionTask::~sectionTask()
{
    delete ui;
}

void sectionTask::setSectionTask()
{
    int i=0;
    for (int k=0;k<ptask->tTranslatorlist.size();k++) {
        if(ptask->tTranslatorlist[k]->getName()==ptranslator->getName()){
            i=k;
        }
    }
    QString  s1 = ui->tSection->toPlainText();
    ptask->sectiontextlist[i] = s1;
    QString s2 = ui->tMySuggestion->toPlainText();
    ptask->sectioncommentlist[i] = s2;
    QMessageBox msg;
    msg.setText(QStringLiteral("已经下达了任务!"));
    msg.exec();
    this->close();
}
