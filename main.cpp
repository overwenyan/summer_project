#include "mainwindow.h"
#include <QApplication>
#include<QVector>
#include<QDebug>
#include"abstractuser.h"
#include"editpasswd.h"
#include"registerwindows.h"
#include"loginwindows.h"
#include"mydatabase.h"
extern QVector<AbstractUser>userlist;
extern QVector<AbstractUser>launcherlist;
extern QVector<task>tasklist;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginwindows lgw;
    lgw.show();
    mydatabase DataBase;
//    DataBase.memory();


    return a.exec();
}
