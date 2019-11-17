#include "showmapplyw.h"
#include "ui_showmapplyw.h"
#include "applymanagerw.h"
#include"mydatabase.h"
//manager newmanager;
//manager*m;
//QVector<manager*>pmanagervector;

showMApplyw::showMApplyw(task *t, QWidget *parent):
    QWidget(parent),
    ui(new Ui::showMApplyw),mytask(t)
{

  //  qDebug()<<"t->applyMlist.size()=="<<t->applyMlist.size();
  //  mytask = taskpaste(t);
    ui->setupUi(this);
    ui->lTaskname->setText(mytask->getIntro());
    ui->tApplierlist->setColumnCount(2);
    ui->tApplierlist->setRowCount(4);
    ui->tApplierlist->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    QStringList sListHeader;
    sListHeader << "申请者账户名"<<"申请者资质" ;
    ui->tApplierlist->setHorizontalHeaderLabels(sListHeader);
    qDebug()<<"mytask->applyMlist.size()=="<<mytask->applyMlist.size();
  //  ui->tApplierlist->setItem(0,0,new QTableWidgetItem("123"));
    if(mytask->applyMlist.length()!=0){
        for (int i=0 ;i<mytask->applyMlist.length();i++) {
                ui->tApplierlist->setItem(i,0,new QTableWidgetItem(mytask->applyMlist[i]->getName()));
                ui->tApplierlist->setItem(i,1,new QTableWidgetItem(mytask->applyMlist[i]->getQuality()));
        }
    }
    else {
        QMessageBox msg;
        msg.setText(QStringLiteral("当前没有人报名负责人!"));
        msg.exec();
    }
    connect(ui->bReturn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->bConfirm,SIGNAL(clicked()),this,SLOT(selectManager()));
}

showMApplyw::~showMApplyw()
{
    delete ui;
}

int showMApplyw::managerNum = 0;
void showMApplyw::selectManager()
{    
    int row =-1;
    row = ui->tApplierlist->currentRow();
    qDebug()<<"row ="<<row;
    if(row==-1||row>mytask->applyMlist.size()-1){
        QMessageBox msg;
        msg.setText(QStringLiteral("选择无效！"));
        msg.setWindowTitle(QStringLiteral("error"));
        msg.exec();
        return;
    }
    QString managername = mytask->applyMlist[row]->getName();
    qDebug()<<managername;
    //AbstractUser* pthisuser = mytask->applyMlist[row];
    int num = 0;
    for (int i=0;i<userlist.size();i++) {
        if(userlist[i].getName()==managername){
            mytask->setManager(&userlist[i]);
            num=i;
           // qDebug()<<mytask->getManager()->getName();
        }
    }
    managerlist.append(*(mytask->applyMlist[row]));
    mytask->setTaskState(managed);
    mytask->applyMlist.remove(row);
    QMessageBox msg;
    QString s1="已选择";
    QString s2=userlist[num].getName();
    QString s3="作为负责人";
    QString s = s1+s2+s3;
    msg.setText(s);
    msg.setWindowTitle(QStringLiteral("您已经选择负责人!"));
    msg.exec();
    this->close();
    return;
}
