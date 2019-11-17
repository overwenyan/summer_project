/********************************************************************************
** Form generated from reading UI file 'sectiontask.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONTASK_H
#define UI_SECTIONTASK_H

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

class Ui_sectionTask
{
public:
    QTextEdit *tSection;
    QLineEdit *lTraslatorname;
    QTextEdit *tOrigin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *bSubmit;
    QPushButton *bClose;
    QTextEdit *tTransTextdraft;
    QLabel *label_4;
    QTextEdit *tMySuggestion;
    QLabel *label_5;

    void setupUi(QWidget *sectionTask)
    {
        if (sectionTask->objectName().isEmpty())
            sectionTask->setObjectName(QStringLiteral("sectionTask"));
        sectionTask->resize(1157, 596);
        tSection = new QTextEdit(sectionTask);
        tSection->setObjectName(QStringLiteral("tSection"));
        tSection->setGeometry(QRect(170, 210, 351, 211));
        lTraslatorname = new QLineEdit(sectionTask);
        lTraslatorname->setObjectName(QStringLiteral("lTraslatorname"));
        lTraslatorname->setGeometry(QRect(180, 20, 321, 21));
        tOrigin = new QTextEdit(sectionTask);
        tOrigin->setObjectName(QStringLiteral("tOrigin"));
        tOrigin->setGeometry(QRect(180, 70, 321, 87));
        label = new QLabel(sectionTask);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(31, 15, 101, 20));
        label_2 = new QLabel(sectionTask);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 101, 20));
        label_3 = new QLabel(sectionTask);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 200, 101, 20));
        bSubmit = new QPushButton(sectionTask);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));
        bSubmit->setGeometry(QRect(350, 490, 111, 41));
        QFont font;
        font.setPointSize(13);
        bSubmit->setFont(font);
        bClose = new QPushButton(sectionTask);
        bClose->setObjectName(QStringLiteral("bClose"));
        bClose->setGeometry(QRect(610, 490, 111, 41));
        bClose->setFont(font);
        tTransTextdraft = new QTextEdit(sectionTask);
        tTransTextdraft->setObjectName(QStringLiteral("tTransTextdraft"));
        tTransTextdraft->setGeometry(QRect(660, 20, 331, 181));
        label_4 = new QLabel(sectionTask);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 50, 101, 20));
        tMySuggestion = new QTextEdit(sectionTask);
        tMySuggestion->setObjectName(QStringLiteral("tMySuggestion"));
        tMySuggestion->setGeometry(QRect(650, 230, 341, 191));
        label_5 = new QLabel(sectionTask);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(550, 240, 101, 20));

        retranslateUi(sectionTask);

        QMetaObject::connectSlotsByName(sectionTask);
    } // setupUi

    void retranslateUi(QWidget *sectionTask)
    {
        sectionTask->setWindowTitle(QApplication::translate("sectionTask", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("sectionTask", "\345\210\206\351\205\215\350\200\205\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("sectionTask", "\345\216\237\346\226\207\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("sectionTask", "\345\210\206\351\205\215\347\232\204\344\273\273\345\212\241\357\274\232", Q_NULLPTR));
        bSubmit->setText(QApplication::translate("sectionTask", "\346\217\220\344\272\244", Q_NULLPTR));
        bClose->setText(QApplication::translate("sectionTask", "\350\277\224\345\233\236", Q_NULLPTR));
        label_4->setText(QApplication::translate("sectionTask", "\344\273\226\347\232\204\347\277\273\350\257\221\347\250\277\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("sectionTask", "\346\210\221\347\232\204\345\273\272\350\256\256\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sectionTask: public Ui_sectionTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONTASK_H
