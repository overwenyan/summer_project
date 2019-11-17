/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *twUser;
    QPushButton *bSetpoint;
    QPushButton *bRefresh;
    QWidget *tab_2;
    QTableWidget *twTask;
    QPushButton *bRefreshTask;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(1086, 664);
        centralwidget = new QWidget(adminwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1051, 621));
        QFont font;
        font.setPointSize(19);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        twUser = new QTableWidget(tab);
        twUser->setObjectName(QStringLiteral("twUser"));
        twUser->setGeometry(QRect(20, 20, 831, 491));
        bSetpoint = new QPushButton(tab);
        bSetpoint->setObjectName(QStringLiteral("bSetpoint"));
        bSetpoint->setGeometry(QRect(890, 30, 121, 61));
        QFont font1;
        font1.setPointSize(14);
        bSetpoint->setFont(font1);
        bRefresh = new QPushButton(tab);
        bRefresh->setObjectName(QStringLiteral("bRefresh"));
        bRefresh->setGeometry(QRect(890, 120, 121, 61));
        bRefresh->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        twTask = new QTableWidget(tab_2);
        twTask->setObjectName(QStringLiteral("twTask"));
        twTask->setGeometry(QRect(20, 10, 821, 481));
        bRefreshTask = new QPushButton(tab_2);
        bRefreshTask->setObjectName(QStringLiteral("bRefreshTask"));
        bRefreshTask->setGeometry(QRect(880, 40, 121, 61));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bRefreshTask->sizePolicy().hasHeightForWidth());
        bRefreshTask->setSizePolicy(sizePolicy);
        bRefreshTask->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1086, 26));
        adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminwindow->setStatusBar(statusbar);

        retranslateUi(adminwindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", Q_NULLPTR));
        bSetpoint->setText(QApplication::translate("adminwindow", "\350\256\276\347\275\256\347\247\257\345\210\206", Q_NULLPTR));
        bRefresh->setText(QApplication::translate("adminwindow", "\345\210\267\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("adminwindow", "\347\224\250\346\210\267", Q_NULLPTR));
        bRefreshTask->setText(QApplication::translate("adminwindow", "\345\210\267\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("adminwindow", "\344\273\273\345\212\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
