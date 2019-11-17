/********************************************************************************
** Form generated from reading UI file 'addpointw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOINTW_H
#define UI_ADDPOINTW_H

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

class Ui_addPointw
{
public:
    QLabel *label_4;
    QPushButton *bReturn;
    QLineEdit *lAmount;
    QLineEdit *lAdd;
    QLabel *label;
    QPushButton *bSubmit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lUsername;

    void setupUi(QWidget *addPointw)
    {
        if (addPointw->objectName().isEmpty())
            addPointw->setObjectName(QStringLiteral("addPointw"));
        addPointw->resize(479, 365);
        label_4 = new QLabel(addPointw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 80, 111, 41));
        bReturn = new QPushButton(addPointw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(290, 280, 121, 41));
        lAmount = new QLineEdit(addPointw);
        lAmount->setObjectName(QStringLiteral("lAmount"));
        lAmount->setGeometry(QRect(220, 140, 201, 31));
        lAdd = new QLineEdit(addPointw);
        lAdd->setObjectName(QStringLiteral("lAdd"));
        lAdd->setGeometry(QRect(220, 200, 201, 31));
        label = new QLabel(addPointw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 200, 111, 41));
        bSubmit = new QPushButton(addPointw);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));
        bSubmit->setGeometry(QRect(60, 280, 121, 41));
        label_2 = new QLabel(addPointw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 111, 41));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_3 = new QLabel(addPointw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 140, 111, 41));
        lUsername = new QLineEdit(addPointw);
        lUsername->setObjectName(QStringLiteral("lUsername"));
        lUsername->setGeometry(QRect(220, 80, 201, 31));

        retranslateUi(addPointw);

        QMetaObject::connectSlotsByName(addPointw);
    } // setupUi

    void retranslateUi(QWidget *addPointw)
    {
        addPointw->setWindowTitle(QApplication::translate("addPointw", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("addPointw", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        bReturn->setText(QApplication::translate("addPointw", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("addPointw", "\350\256\276\347\275\256\347\247\257\345\210\206\346\225\260\357\274\232", Q_NULLPTR));
        bSubmit->setText(QApplication::translate("addPointw", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("addPointw", "\350\256\276\347\275\256\347\247\257\345\210\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("addPointw", "\345\275\223\345\211\215\350\264\246\346\210\267\344\275\231\351\242\235\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addPointw: public Ui_addPointw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOINTW_H
