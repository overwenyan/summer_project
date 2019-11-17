/********************************************************************************
** Form generated from reading UI file 'launchtask.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHTASK_H
#define UI_LAUNCHTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LaunchTask
{
public:
    QTextEdit *tText;
    QTextEdit *tIntro;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *cBTransType;
    QLabel *label_4;
    QLineEdit *lSumReward;
    QLabel *label_7;
    QTimeEdit *timeEdit;
    QPushButton *bSubmit;
    QPushButton *bReturn;

    void setupUi(QWidget *LaunchTask)
    {
        if (LaunchTask->objectName().isEmpty())
            LaunchTask->setObjectName(QStringLiteral("LaunchTask"));
        LaunchTask->resize(1007, 631);
        tText = new QTextEdit(LaunchTask);
        tText->setObjectName(QStringLiteral("tText"));
        tText->setGeometry(QRect(160, 220, 371, 321));
        tIntro = new QTextEdit(LaunchTask);
        tIntro->setObjectName(QStringLiteral("tIntro"));
        tIntro->setGeometry(QRect(160, 80, 361, 87));
        label = new QLabel(LaunchTask);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 131, 51));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(LaunchTask);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 310, 131, 51));
        label_2->setFont(font);
        label_6 = new QLabel(LaunchTask);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(410, 10, 161, 41));
        QFont font1;
        font1.setPointSize(17);
        label_6->setFont(font1);
        dateEdit = new QDateEdit(LaunchTask);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(788, 100, 171, 21));
        label_3 = new QLabel(LaunchTask);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(612, 190, 90, 21));
        label_3->setFont(font);
        label_5 = new QLabel(LaunchTask);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(612, 260, 108, 21));
        label_5->setFont(font);
        cBTransType = new QComboBox(LaunchTask);
        cBTransType->setObjectName(QStringLiteral("cBTransType"));
        cBTransType->setGeometry(QRect(790, 190, 171, 21));
        label_4 = new QLabel(LaunchTask);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 100, 171, 21));
        label_4->setFont(font);
        lSumReward = new QLineEdit(LaunchTask);
        lSumReward->setObjectName(QStringLiteral("lSumReward"));
        lSumReward->setGeometry(QRect(790, 260, 171, 21));
        label_7 = new QLabel(LaunchTask);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(610, 130, 171, 21));
        label_7->setFont(font);
        timeEdit = new QTimeEdit(LaunchTask);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(790, 130, 171, 21));
        bSubmit = new QPushButton(LaunchTask);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));
        bSubmit->setGeometry(QRect(580, 390, 156, 51));
        QFont font2;
        font2.setPointSize(12);
        bSubmit->setFont(font2);
        bReturn = new QPushButton(LaunchTask);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(770, 390, 171, 51));
        bReturn->setFont(font2);

        retranslateUi(LaunchTask);

        QMetaObject::connectSlotsByName(LaunchTask);
    } // setupUi

    void retranslateUi(QWidget *LaunchTask)
    {
        LaunchTask->setWindowTitle(QApplication::translate("LaunchTask", "\345\217\221\345\270\203\346\226\260\344\273\273\345\212\241", Q_NULLPTR));
        label->setText(QApplication::translate("LaunchTask", "\347\277\273\350\257\221\347\256\200\344\273\213\345\217\212\345\244\207\346\263\250\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("LaunchTask", "\347\277\273\350\257\221\345\216\237\346\226\207\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("LaunchTask", "\345\217\221\345\270\203\346\226\260\344\273\273\345\212\241", Q_NULLPTR));
        label_3->setText(QApplication::translate("LaunchTask", "\347\277\273\350\257\221\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("LaunchTask", "\344\273\273\345\212\241\346\200\273\346\212\245\351\205\254\357\274\232", Q_NULLPTR));
        cBTransType->clear();
        cBTransType->insertItems(0, QStringList()
         << QApplication::translate("LaunchTask", "\344\270\255\350\257\221\350\213\261", Q_NULLPTR)
         << QApplication::translate("LaunchTask", "\350\213\261\350\257\221\344\270\255", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("LaunchTask", "\350\264\237\350\264\243\344\272\272\346\212\245\345\220\215\346\210\252\346\255\242\346\227\245\346\234\237:", Q_NULLPTR));
        label_7->setText(QApplication::translate("LaunchTask", "\350\264\237\350\264\243\344\272\272\346\212\245\345\220\215\346\210\252\346\255\242\346\227\266\351\227\264:", Q_NULLPTR));
        bSubmit->setText(QApplication::translate("LaunchTask", "\346\217\220\344\272\244", Q_NULLPTR));
        bReturn->setText(QApplication::translate("LaunchTask", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LaunchTask: public Ui_LaunchTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHTASK_H
