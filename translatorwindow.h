#ifndef TRANSLATORWINDOW_H
#define TRANSLATORWINDOW_H

#include <QWidget>
#include"task.h"
//翻译人的操作界面
class task;
namespace Ui {
class translatorwindow;
}

class translatorwindow : public QWidget
{
    Q_OBJECT

public:
    explicit translatorwindow(int n,task*t, QWidget *parent = nullptr);
    ~translatorwindow();
private slots:
    void submitWork();

private:
    Ui::translatorwindow *ui;
    int translatorNum;
    task* mytask;
};

#endif // TRANSLATORWINDOW_H
