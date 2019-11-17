#ifndef SECTIONTASK_H
#define SECTIONTASK_H

#include <QWidget>
#include"translator.h"
#include"task.h"

//分配任务、审核界面
class task;
class AbstractUser;
namespace Ui {
class sectionTask;
}

class sectionTask : public QWidget
{
    Q_OBJECT

public:
    explicit sectionTask(AbstractUser*trans, task* t,QWidget *parent = nullptr);
    ~sectionTask();
private slots:
    void setSectionTask();
private:
    Ui::sectionTask *ui;
    task *ptask;
    AbstractUser* ptranslator;
};

#endif // SECTIONTASK_H
