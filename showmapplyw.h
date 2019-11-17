#ifndef SHOWMAPPLYW_H
#define SHOWMAPPLYW_H

#include <QWidget>
#include"abstractuser.h"
#include"task.h"
#include"manager.h"
//extern manager newmanager;
//extern manager*m;
//extern QVector<manager*>pmanagervector;
//展示我发布任务申请负责人的表格
extern manager*m;
class task;
namespace Ui {
class showMApplyw;
}

class showMApplyw : public QWidget
{
    Q_OBJECT

public:
    explicit showMApplyw(task* t, QWidget *parent = nullptr);
    ~showMApplyw();
    static int managerNum;
private slots:
    void selectManager();

private:
    Ui::showMApplyw *ui;
    task *mytask;
};

#endif // SHOWMAPPLYW_H
