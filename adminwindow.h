#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include"abstractuser.h"
#include<QWidget>
#include"setpointw.h"
#include"task.h"
//平台界面
class setPointw;
namespace Ui {
class adminwindow;
}

class adminwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminwindow(QWidget *parent = nullptr);
    ~adminwindow();
private slots:
    void setpoint();
    void refresh();
    void showTask();
private:
    Ui::adminwindow *ui;
    setPointw*spw;
   // AbstractUser *pAdmin;
};

#endif // ADMINWINDOW_H
