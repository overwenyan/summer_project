#ifndef SETPOINTW_H
#define SETPOINTW_H

#include <QWidget>
#include<QMessageBox>
#include"abstractuser.h"

//平台设置积分界面
class AbstractUser;
namespace Ui {
class setPointw;
}

class setPointw : public QWidget
{
    Q_OBJECT

public:
    explicit setPointw(AbstractUser*u, QWidget *parent = nullptr);
    ~setPointw();
private slots:
   void submit();
private:
    Ui::setPointw *ui;
    AbstractUser*userparent;
};

#endif // SETPOINTW_H
