#ifndef LAUNCHERGETW_H
#define LAUNCHERGETW_H

#include <QWidget>
#include"task.h"

//发布人确定任务完结的界面
namespace Ui {
class launcherGetw;
}

class launcherGetw : public QWidget
{
    Q_OBJECT

public:
    explicit launcherGetw(task*t, QWidget *parent = nullptr);
    ~launcherGetw();
private slots:
    void addPoints();
private:
    Ui::launcherGetw *ui;
    task*mytask;
};

#endif // LAUNCHERGETW_H
