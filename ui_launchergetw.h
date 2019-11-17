/********************************************************************************
** Form generated from reading UI file 'launchergetw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHERGETW_H
#define UI_LAUNCHERGETW_H

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

class Ui_launcherGetw
{
public:
    QLabel *label;
    QLineEdit *lBookIntro;
    QLabel *label_2;
    QTextEdit *tOriginText;
    QLabel *label_3;
    QTextEdit *tTranslation;
    QLabel *label_4;
    QPushButton *bPass;
    QPushButton *bReturn;

    void setupUi(QWidget *launcherGetw)
    {
        if (launcherGetw->objectName().isEmpty())
            launcherGetw->setObjectName(QStringLiteral("launcherGetw"));
        launcherGetw->resize(939, 471);
        label = new QLabel(launcherGetw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 10, 131, 51));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        lBookIntro = new QLineEdit(launcherGetw);
        lBookIntro->setObjectName(QStringLiteral("lBookIntro"));
        lBookIntro->setGeometry(QRect(160, 80, 251, 31));
        label_2 = new QLabel(launcherGetw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 101, 21));
        tOriginText = new QTextEdit(launcherGetw);
        tOriginText->setObjectName(QStringLiteral("tOriginText"));
        tOriginText->setGeometry(QRect(160, 130, 251, 171));
        label_3 = new QLabel(launcherGetw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 101, 21));
        tTranslation = new QTextEdit(launcherGetw);
        tTranslation->setObjectName(QStringLiteral("tTranslation"));
        tTranslation->setGeometry(QRect(610, 70, 261, 231));
        label_4 = new QLabel(launcherGetw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 80, 101, 21));
        bPass = new QPushButton(launcherGetw);
        bPass->setObjectName(QStringLiteral("bPass"));
        bPass->setGeometry(QRect(210, 350, 161, 61));
        bPass->setFont(font);
        bReturn = new QPushButton(launcherGetw);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(510, 360, 161, 51));
        bReturn->setFont(font);

        retranslateUi(launcherGetw);

        QMetaObject::connectSlotsByName(launcherGetw);
    } // setupUi

    void retranslateUi(QWidget *launcherGetw)
    {
        launcherGetw->setWindowTitle(QApplication::translate("launcherGetw", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("launcherGetw", "\347\273\210\347\250\277\346\230\276\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("launcherGetw", "\344\273\273\345\212\241\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("launcherGetw", "\344\273\273\345\212\241\345\216\237\346\226\207\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("launcherGetw", "\344\273\273\345\212\241\347\277\273\350\257\221\347\250\277\357\274\232", Q_NULLPTR));
        bPass->setText(QApplication::translate("launcherGetw", "\345\256\241\346\240\270\351\200\232\350\277\207", Q_NULLPTR));
        bReturn->setText(QApplication::translate("launcherGetw", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class launcherGetw: public Ui_launcherGetw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHERGETW_H
