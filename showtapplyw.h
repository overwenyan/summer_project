#ifndef SHOWTAPPLYW_H
#define SHOWTAPPLYW_H

#include <QWidget>
#include"abstractuser.h"
#include"task.h"
#include"translator.h"
extern translator*t;
//展示我发布任务申请翻译人的表格
namespace Ui {
class showTApplyw;
}
class task;
class showTApplyw : public QWidget
{
    Q_OBJECT

public:
    explicit showTApplyw(task*t, QWidget *parent = nullptr);
    ~showTApplyw();
private slots:
    void selectTranslator();

private:
    Ui::showTApplyw *ui;
    task *mytask;
};

#endif // SHOWTAPPLYW_H



