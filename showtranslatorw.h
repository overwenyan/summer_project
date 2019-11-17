#ifndef SHOWTRANSLATORW_H
#define SHOWTRANSLATORW_H

#include <QWidget>
#include"task.h"
#include"translator.h"
#include "sectiontask.h"
//查看最终的翻译人
class task;
class sectionTask;
namespace Ui {
class showTranslatorw;
}

class showTranslatorw : public QWidget
{
    Q_OBJECT

public:
    explicit showTranslatorw(task*t, QWidget *parent = nullptr);
    ~showTranslatorw();
private slots:
    void setSectionTask();
private:
    Ui::showTranslatorw *ui;
    task*mytask;
    sectionTask*st;
};

#endif // SHOWTRANSLATORW_H
