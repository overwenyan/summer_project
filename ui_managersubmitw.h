/********************************************************************************
** Form generated from reading UI file 'managersubmitw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERSUBMITW_H
#define UI_MANAGERSUBMITW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerSubmitw
{
public:
    QTextEdit *tFinalTranslation;
    QLabel *label;
    QLineEdit *lBookIntro;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *bFinalSubmit;
    QPushButton *bReturn;

    void setupUi(QWidget *ManagerSubmitw)
    {
        if (ManagerSubmitw->objectName().isEmpty())
            ManagerSubmitw->setObjectName(QStringLiteral("ManagerSubmitw"));
        ManagerSubmitw->resize(611, 485);
        tFinalTranslation = new QTextEdit(ManagerSubmitw);
        tFinalTranslation->setObjectName(QStringLiteral("tFinalTranslation"));
        tFinalTranslation->setGeometry(QRect(140, 180, 411, 211));
        label = new QLabel(ManagerSubmitw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 20, 191, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lBookIntro = new QLineEdit(ManagerSubmitw);
        lBookIntro->setObjectName(QStringLiteral("lBookIntro"));
        lBookIntro->setGeometry(QRect(140, 100, 411, 41));
        label_2 = new QLabel(ManagerSubmitw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 91, 21));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_3 = new QLabel(ManagerSubmitw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 81, 21));
        label_3->setFont(font1);
        bFinalSubmit = new QPushButton(ManagerSubmitw);
        bFinalSubmit->setObjectName(QStringLiteral("bFinalSubmit"));
        bFinalSubmit->setGeometry(QRect(90, 410, 131, 41));
        bFinalSubmit->setFont(font1);
        bReturn = new QPushButton(ManagerSubmitw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(340, 410, 131, 41));
        bReturn->setFont(font1);

        retranslateUi(ManagerSubmitw);

        QMetaObject::connectSlotsByName(ManagerSubmitw);
    } // setupUi

    void retranslateUi(QWidget *ManagerSubmitw)
    {
        ManagerSubmitw->setWindowTitle(QApplication::translate("ManagerSubmitw", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ManagerSubmitw", "\350\264\237\350\264\243\344\272\272\346\234\200\347\273\210\346\217\220\344\272\244\347\225\214\351\235\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("ManagerSubmitw", "\344\273\273\345\212\241\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ManagerSubmitw", "\347\277\273\350\257\221\347\250\277\357\274\232", Q_NULLPTR));
        bFinalSubmit->setText(QApplication::translate("ManagerSubmitw", "\347\273\210\347\250\277\346\217\220\344\272\244", Q_NULLPTR));
        bReturn->setText(QApplication::translate("ManagerSubmitw", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManagerSubmitw: public Ui_ManagerSubmitw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERSUBMITW_H
