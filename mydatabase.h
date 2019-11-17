#pragma once
#ifndef MYDATABASE_H
#define MYDATABASE_H

//#include <QObject>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlQueryModel>
#include<QtSql/QSqlTableModel>
#include<QtSql/QSqlDriver>
#include<QtSql/QSqlError>
#include<QtSql/QSqlRecord>
#include<QtSql/QSqlField>
#include<QVector>
#include<QMessageBox>
#include<QtDebug>
#include"abstractuser.h"
#include"manager.h"
#include"translator.h"
extern QVector<AbstractUser>userlist;
extern QVector<AbstractUser>launcherlist;
extern QVector<task>tasklist;
extern QVector<AbstractUser>managerlist;
extern QVector<translator>translatorlist;

class mydatabase:public QObject
{
    Q_OBJECT
public:
    mydatabase();
    ~mydatabase();
    QSqlDatabase db;
    QSqlQueryModel model;
public:
    bool initialAbstractUser();
    bool initialTask();
    bool initialLauncher();
    bool initialManager();
    bool initialMBeSelect();//等待候选的任务
    bool initialTBeSelect();//等待候选翻译者

    bool initialTranslator();
    bool memory();

private:
     bool createConnection();
     bool createTables();

public slots:
};

#endif // MYDATABASE_H
