#ifndef ADDPOINTW_H
#define ADDPOINTW_H

#include <QWidget>
#include"abstractuser.h"
//充值界面
class AbstractUser;
namespace Ui {
class addPointw;
}

class addPointw : public QWidget
{
    Q_OBJECT

public:
    explicit addPointw(AbstractUser*u, QWidget *parent = nullptr);
    ~addPointw();

private slots:
    void addAmount();
private:
    Ui::addPointw *ui;
    AbstractUser*abu;
};

#endif // ADDPOINTW_H
