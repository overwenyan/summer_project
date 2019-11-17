#include "editpasswd.h"
#include "ui_editpasswd.h"



editpasswd::editpasswd(MainWindow *mw, QWidget *parent):
    QWidget(parent),
    ui(new Ui::editpasswd),mwparent(mw)
{
    ui->setupUi(this);
}


editpasswd::~editpasswd()
{
    delete ui;
}
