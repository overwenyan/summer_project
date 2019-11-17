/********************************************************************************
** Form generated from reading UI file 'registerwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOWS_H
#define UI_REGISTERWINDOWS_H

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

class Ui_registerwindows
{
public:
    QWidget *centralwidget;
    QPushButton *bRegister;
    QPushButton *bCancel;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lPasswd;
    QLineEdit *lUsrname;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lPhoneNum;
    QLineEdit *lID;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lPasswdconfirm;
    QLabel *label_7;
    QLineEdit *lQuality;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *registerwindows)
    {
        if (registerwindows->objectName().isEmpty())
            registerwindows->setObjectName(QStringLiteral("registerwindows"));
        registerwindows->resize(800, 600);
        centralwidget = new QWidget(registerwindows);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bRegister = new QPushButton(centralwidget);
        bRegister->setObjectName(QStringLiteral("bRegister"));
        bRegister->setGeometry(QRect(160, 470, 111, 41));
        QFont font;
        font.setPointSize(12);
        bRegister->setFont(font);
        bCancel = new QPushButton(centralwidget);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(480, 470, 111, 41));
        bCancel->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 90, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 330, 45, 41));
        lPasswd = new QLineEdit(centralwidget);
        lPasswd->setObjectName(QStringLiteral("lPasswd"));
        lPasswd->setGeometry(QRect(110, 330, 237, 31));
        lPasswd->setEchoMode(QLineEdit::Password);
        lUsrname = new QLineEdit(centralwidget);
        lUsrname->setObjectName(QStringLiteral("lUsrname"));
        lUsrname->setGeometry(QRect(112, 204, 231, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(44, 200, 51, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(42, 146, 51, 51));
        lPhoneNum = new QLineEdit(centralwidget);
        lPhoneNum->setObjectName(QStringLiteral("lPhoneNum"));
        lPhoneNum->setGeometry(QRect(110, 150, 231, 31));
        lID = new QLineEdit(centralwidget);
        lID->setObjectName(QStringLiteral("lID"));
        lID->setGeometry(QRect(110, 260, 237, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(24, 260, 71, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(24, 390, 71, 41));
        lPasswdconfirm = new QLineEdit(centralwidget);
        lPasswdconfirm->setObjectName(QStringLiteral("lPasswdconfirm"));
        lPasswdconfirm->setGeometry(QRect(110, 390, 237, 31));
        lPasswdconfirm->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 150, 161, 41));
        lQuality = new QLineEdit(centralwidget);
        lQuality->setObjectName(QStringLiteral("lQuality"));
        lQuality->setGeometry(QRect(450, 190, 291, 121));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(370, 340, 81, 16));
        registerwindows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(registerwindows);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        registerwindows->setMenuBar(menubar);
        statusbar = new QStatusBar(registerwindows);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        registerwindows->setStatusBar(statusbar);

        retranslateUi(registerwindows);

        QMetaObject::connectSlotsByName(registerwindows);
    } // setupUi

    void retranslateUi(QMainWindow *registerwindows)
    {
        registerwindows->setWindowTitle(QApplication::translate("registerwindows", "RegisterWindow", Q_NULLPTR));
        bRegister->setText(QApplication::translate("registerwindows", "\347\241\256\345\256\232", Q_NULLPTR));
        bCancel->setText(QApplication::translate("registerwindows", "\345\217\226\346\266\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("registerwindows", "\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("registerwindows", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("registerwindows", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_4->setText(QApplication::translate("registerwindows", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        lID->setText(QString());
        label_5->setText(QApplication::translate("registerwindows", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("registerwindows", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("registerwindows", "\350\257\255\350\250\200\350\265\204\350\264\250\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("registerwindows", "6-15\344\275\215\345\255\227\347\254\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registerwindows: public Ui_registerwindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOWS_H
