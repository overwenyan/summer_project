#ifndef MANAGERSUBMITW_H
#define MANAGERSUBMITW_H

#include <QWidget>
#include"task.h"

//负责人上传文档界面
class task;
namespace Ui {
class ManagerSubmitw;
}

class ManagerSubmitw : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerSubmitw(task* t, QWidget *parent = nullptr);
    ~ManagerSubmitw();

private slots:
    void submit();

private:
    Ui::ManagerSubmitw *ui;
    task*mytask;
};

#endif // MANAGERSUBMITW_H
