/********************************************************************************
** Form generated from reading UI file 'applymanagerw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYMANAGERW_H
#define UI_APPLYMANAGERW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_applyManagerw
{
public:
    QPushButton *bApplyManager;
    QPushButton *bReturn;
    QTextBrowser *taskText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lTaskintro;
    QLabel *label_4;
    QLineEdit *lDDLapply;
    QLineEdit *lReward;
    QLabel *label_5;
    QLineEdit *lLaunchername;
    QLabel *label_6;

    void setupUi(QWidget *applyManagerw)
    {
        if (applyManagerw->objectName().isEmpty())
            applyManagerw->setObjectName(QStringLiteral("applyManagerw"));
        applyManagerw->resize(967, 620);
        bApplyManager = new QPushButton(applyManagerw);
        bApplyManager->setObjectName(QStringLiteral("bApplyManager"));
        bApplyManager->setGeometry(QRect(140, 490, 171, 51));
        QFont font;
        font.setPointSize(12);
        bApplyManager->setFont(font);
        bReturn = new QPushButton(applyManagerw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(640, 500, 151, 51));
        bReturn->setFont(font);
        taskText = new QTextBrowser(applyManagerw);
        taskText->setObjectName(QStringLiteral("taskText"));
        taskText->setGeometry(QRect(170, 150, 281, 261));
        label = new QLabel(applyManagerw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 10, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label_2 = new QLabel(applyManagerw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 101, 31));
        label_2->setFont(font);
        label_3 = new QLabel(applyManagerw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 80, 101, 31));
        label_3->setFont(font);
        lTaskintro = new QLineEdit(applyManagerw);
        lTaskintro->setObjectName(QStringLiteral("lTaskintro"));
        lTaskintro->setGeometry(QRect(180, 80, 271, 31));
        label_4 = new QLabel(applyManagerw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 80, 141, 31));
        label_4->setFont(font);
        lDDLapply = new QLineEdit(applyManagerw);
        lDDLapply->setObjectName(QStringLiteral("lDDLapply"));
        lDDLapply->setGeometry(QRect(680, 80, 211, 31));
        lReward = new QLineEdit(applyManagerw);
        lReward->setObjectName(QStringLiteral("lReward"));
        lReward->setGeometry(QRect(680, 170, 221, 31));
        label_5 = new QLabel(applyManagerw);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 170, 141, 31));
        label_5->setFont(font);
        lLaunchername = new QLineEdit(applyManagerw);
        lLaunchername->setObjectName(QStringLiteral("lLaunchername"));
        lLaunchername->setGeometry(QRect(680, 260, 221, 31));
        label_6 = new QLabel(applyManagerw);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 260, 141, 31));
        label_6->setFont(font);

        retranslateUi(applyManagerw);

        QMetaObject::connectSlotsByName(applyManagerw);
    } // setupUi

    void retranslateUi(QWidget *applyManagerw)
    {
        applyManagerw->setWindowTitle(QApplication::translate("applyManagerw", "Form", Q_NULLPTR));
        bApplyManager->setText(QApplication::translate("applyManagerw", "\346\212\245\345\220\215\350\264\237\350\264\243\344\272\272", Q_NULLPTR));
        bReturn->setText(QApplication::translate("applyManagerw", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("applyManagerw", "\346\212\245\345\220\215\344\273\273\345\212\241\350\264\237\350\264\243\344\272\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("applyManagerw", "\347\277\273\350\257\221\345\216\237\346\226\207\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("applyManagerw", "\347\277\273\350\257\221\347\256\200\344\273\213\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("applyManagerw", "\346\212\245\345\220\215\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("applyManagerw", "\350\216\267\345\276\227\346\212\245\351\205\254\351\242\235\345\272\246\357\274\232", Q_NULLPTR));
        lLaunchername->setText(QString());
        label_6->setText(QApplication::translate("applyManagerw", "\344\273\273\345\212\241\345\217\221\345\270\203\350\200\205\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class applyManagerw: public Ui_applyManagerw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYMANAGERW_H
