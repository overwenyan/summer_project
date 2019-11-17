#pragma once
#ifndef EDITPASSWD_H
#define EDITPASSWD_H

#include <QWidget>
#include"mainwindow.h"

namespace Ui {
class editpasswd;
}

class editpasswd : public QWidget
{
    Q_OBJECT

public:
    explicit editpasswd(MainWindow *mw, QWidget *parent = nullptr);
    ~editpasswd();

private:
    Ui::editpasswd *ui;
    MainWindow*mwparent;
};

#endif // EDITPASSWD_H
