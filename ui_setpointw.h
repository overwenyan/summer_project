/********************************************************************************
** Form generated from reading UI file 'setpointw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPOINTW_H
#define UI_SETPOINTW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setPointw
{
public:
    QLabel *label;
    QLineEdit *lPoint;
    QPushButton *bSubmit;
    QPushButton *bReturn;
    QLabel *label_2;
    QLineEdit *lQuality;
    QLabel *label_3;
    QLineEdit *lUsername;
    QLabel *label_4;

    void setupUi(QWidget *setPointw)
    {
        if (setPointw->objectName().isEmpty())
            setPointw->setObjectName(QStringLiteral("setPointw"));
        setPointw->resize(482, 355);
        label = new QLabel(setPointw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 210, 111, 41));
        lPoint = new QLineEdit(setPointw);
        lPoint->setObjectName(QStringLiteral("lPoint"));
        lPoint->setGeometry(QRect(210, 210, 201, 31));
        bSubmit = new QPushButton(setPointw);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));
        bSubmit->setGeometry(QRect(50, 290, 121, 41));
        bReturn = new QPushButton(setPointw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(280, 290, 121, 41));
        label_2 = new QLabel(setPointw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 20, 111, 41));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        lQuality = new QLineEdit(setPointw);
        lQuality->setObjectName(QStringLiteral("lQuality"));
        lQuality->setGeometry(QRect(210, 150, 201, 31));
        label_3 = new QLabel(setPointw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 111, 41));
        lUsername = new QLineEdit(setPointw);
        lUsername->setObjectName(QStringLiteral("lUsername"));
        lUsername->setGeometry(QRect(210, 90, 201, 31));
        label_4 = new QLabel(setPointw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 90, 111, 41));

        retranslateUi(setPointw);

        QMetaObject::connectSlotsByName(setPointw);
    } // setupUi

    void retranslateUi(QWidget *setPointw)
    {
        setPointw->setWindowTitle(QApplication::translate("setPointw", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("setPointw", "\350\256\276\347\275\256\347\247\257\345\210\206\346\225\260\357\274\232", Q_NULLPTR));
        bSubmit->setText(QApplication::translate("setPointw", "\347\241\256\345\256\232", Q_NULLPTR));
        bReturn->setText(QApplication::translate("setPointw", "\350\277\224\345\233\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("setPointw", "\350\256\276\347\275\256\347\247\257\345\210\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("setPointw", "\350\265\204\350\264\250\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("setPointw", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class setPointw: public Ui_setPointw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPOINTW_H
