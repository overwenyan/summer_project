/********************************************************************************
** Form generated from reading UI file 'applytranslatorw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYTRANSLATORW_H
#define UI_APPLYTRANSLATORW_H

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

class Ui_applyTranslatorw
{
public:
    QLabel *label_4;
    QLineEdit *lTaskintro;
    QPushButton *bReturn;
    QLineEdit *lManagername;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lDDLapply;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lLaunchername;
    QLineEdit *lReward;
    QTextBrowser *taskText;
    QPushButton *bApplyTranslator;
    QLabel *label_7;

    void setupUi(QWidget *applyTranslatorw)
    {
        if (applyTranslatorw->objectName().isEmpty())
            applyTranslatorw->setObjectName(QStringLiteral("applyTranslatorw"));
        applyTranslatorw->resize(929, 627);
        label_4 = new QLabel(applyTranslatorw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 100, 141, 31));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        lTaskintro = new QLineEdit(applyTranslatorw);
        lTaskintro->setObjectName(QStringLiteral("lTaskintro"));
        lTaskintro->setGeometry(QRect(150, 100, 271, 31));
        bReturn = new QPushButton(applyTranslatorw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(610, 520, 151, 51));
        bReturn->setFont(font);
        lManagername = new QLineEdit(applyTranslatorw);
        lManagername->setObjectName(QStringLiteral("lManagername"));
        lManagername->setGeometry(QRect(650, 370, 221, 31));
        label_2 = new QLabel(applyTranslatorw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 180, 101, 31));
        label_2->setFont(font);
        label_3 = new QLabel(applyTranslatorw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 101, 31));
        label_3->setFont(font);
        lDDLapply = new QLineEdit(applyTranslatorw);
        lDDLapply->setObjectName(QStringLiteral("lDDLapply"));
        lDDLapply->setGeometry(QRect(650, 100, 211, 31));
        label_6 = new QLabel(applyTranslatorw);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 280, 141, 31));
        label_6->setFont(font);
        label = new QLabel(applyTranslatorw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 30, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label_5 = new QLabel(applyTranslatorw);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 190, 141, 31));
        label_5->setFont(font);
        lLaunchername = new QLineEdit(applyTranslatorw);
        lLaunchername->setObjectName(QStringLiteral("lLaunchername"));
        lLaunchername->setGeometry(QRect(650, 280, 221, 31));
        lReward = new QLineEdit(applyTranslatorw);
        lReward->setObjectName(QStringLiteral("lReward"));
        lReward->setGeometry(QRect(650, 190, 221, 31));
        taskText = new QTextBrowser(applyTranslatorw);
        taskText->setObjectName(QStringLiteral("taskText"));
        taskText->setGeometry(QRect(140, 170, 281, 261));
        bApplyTranslator = new QPushButton(applyTranslatorw);
        bApplyTranslator->setObjectName(QStringLiteral("bApplyTranslator"));
        bApplyTranslator->setGeometry(QRect(110, 510, 171, 51));
        bApplyTranslator->setFont(font);
        label_7 = new QLabel(applyTranslatorw);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 370, 141, 31));
        label_7->setFont(font);

        retranslateUi(applyTranslatorw);

        QMetaObject::connectSlotsByName(applyTranslatorw);
    } // setupUi

    void retranslateUi(QWidget *applyTranslatorw)
    {
        applyTranslatorw->setWindowTitle(QApplication::translate("applyTranslatorw", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("applyTranslatorw", "\346\212\245\345\220\215\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        bReturn->setText(QApplication::translate("applyTranslatorw", "\350\277\224\345\233\236", Q_NULLPTR));
        lManagername->setText(QString());
        label_2->setText(QApplication::translate("applyTranslatorw", "\347\277\273\350\257\221\345\216\237\346\226\207\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("applyTranslatorw", "\347\277\273\350\257\221\347\256\200\344\273\213\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("applyTranslatorw", "\344\273\273\345\212\241\345\217\221\345\270\203\350\200\205\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("applyTranslatorw", "\346\212\245\345\220\215\344\273\273\345\212\241\350\264\237\350\264\243\344\272\272", Q_NULLPTR));
        label_5->setText(QApplication::translate("applyTranslatorw", "\350\216\267\345\276\227\346\212\245\351\205\254\351\242\235\345\272\246\357\274\232", Q_NULLPTR));
        lLaunchername->setText(QString());
        bApplyTranslator->setText(QApplication::translate("applyTranslatorw", "\346\212\245\345\220\215\347\277\273\350\257\221\344\272\272", Q_NULLPTR));
        label_7->setText(QApplication::translate("applyTranslatorw", "\344\273\273\345\212\241\350\264\237\350\264\243\344\272\272\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class applyTranslatorw: public Ui_applyTranslatorw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYTRANSLATORW_H
