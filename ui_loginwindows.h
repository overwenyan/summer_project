/********************************************************************************
** Form generated from reading UI file 'loginwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOWS_H
#define UI_LOGINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindows
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lLoginName;
    QLabel *label_2;
    QLineEdit *lPasswd;
    QLabel *label_3;
    QPushButton *bLogin;
    QPushButton *bRegister;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginwindows)
    {
        if (loginwindows->objectName().isEmpty())
            loginwindows->setObjectName(QStringLiteral("loginwindows"));
        loginwindows->resize(756, 556);
        QIcon icon;
        icon.addFile(QStringLiteral(":/longmao.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        loginwindows->setWindowIcon(icon);
        centralwidget = new QWidget(loginwindows);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 80, 101, 51));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        lLoginName = new QLineEdit(centralwidget);
        lLoginName->setObjectName(QStringLiteral("lLoginName"));
        lLoginName->setGeometry(QRect(340, 150, 211, 41));
        QFont font1;
        font1.setPointSize(12);
        lLoginName->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 150, 241, 41));
        label_2->setFont(font1);
        lPasswd = new QLineEdit(centralwidget);
        lPasswd->setObjectName(QStringLiteral("lPasswd"));
        lPasswd->setGeometry(QRect(340, 230, 211, 41));
        QFont font2;
        font2.setPointSize(9);
        lPasswd->setFont(font2);
        lPasswd->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 240, 61, 41));
        label_3->setFont(font1);
        bLogin = new QPushButton(centralwidget);
        bLogin->setObjectName(QStringLiteral("bLogin"));
        bLogin->setGeometry(QRect(140, 380, 141, 51));
        QFont font3;
        font3.setPointSize(14);
        bLogin->setFont(font3);
        bRegister = new QPushButton(centralwidget);
        bRegister->setObjectName(QStringLiteral("bRegister"));
        bRegister->setGeometry(QRect(400, 380, 141, 51));
        bRegister->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 30, 201, 51));
        label_4->setFont(font);
        loginwindows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginwindows);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 756, 26));
        loginwindows->setMenuBar(menubar);
        statusbar = new QStatusBar(loginwindows);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        loginwindows->setStatusBar(statusbar);

        retranslateUi(loginwindows);

        QMetaObject::connectSlotsByName(loginwindows);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindows)
    {
        loginwindows->setWindowTitle(QApplication::translate("loginwindows", "LoginWindow", Q_NULLPTR));
        label->setText(QApplication::translate("loginwindows", "\347\231\273\345\275\225\347\225\214\351\235\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("loginwindows", "\347\224\250\346\210\267\345\220\215/\346\211\213\346\234\272\345\217\267/\350\272\253\344\273\275\350\257\201\345\217\267:", Q_NULLPTR));
        lPasswd->setText(QString());
        label_3->setText(QApplication::translate("loginwindows", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        bLogin->setText(QApplication::translate("loginwindows", "\347\231\273\345\275\225", Q_NULLPTR));
        bRegister->setText(QApplication::translate("loginwindows", "\346\263\250\345\206\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("loginwindows", "\344\274\227\345\214\205\345\215\217\344\275\234\347\277\273\350\257\221\345\271\263\345\217\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginwindows: public Ui_loginwindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOWS_H
