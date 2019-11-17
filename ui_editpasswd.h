/********************************************************************************
** Form generated from reading UI file 'editpasswd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPASSWD_H
#define UI_EDITPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editpasswd
{
public:
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lPasswd;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lUsrname;
    QPushButton *bOk;
    QPushButton *bCancel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lPasswdconfirm;

    void setupUi(QWidget *editpasswd)
    {
        if (editpasswd->objectName().isEmpty())
            editpasswd->setObjectName(QStringLiteral("editpasswd"));
        editpasswd->resize(544, 444);
        label_3 = new QLabel(editpasswd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 20, 101, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        horizontalLayoutWidget = new QWidget(editpasswd);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 170, 331, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lPasswd = new QLineEdit(horizontalLayoutWidget);
        lPasswd->setObjectName(QStringLiteral("lPasswd"));
        lPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lPasswd);

        horizontalLayoutWidget_2 = new QWidget(editpasswd);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 70, 331, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lUsrname = new QLineEdit(horizontalLayoutWidget_2);
        lUsrname->setObjectName(QStringLiteral("lUsrname"));
        lUsrname->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(lUsrname);

        bOk = new QPushButton(editpasswd);
        bOk->setObjectName(QStringLiteral("bOk"));
        bOk->setGeometry(QRect(130, 380, 93, 28));
        bCancel = new QPushButton(editpasswd);
        bCancel->setObjectName(QStringLiteral("bCancel"));
        bCancel->setGeometry(QRect(300, 380, 93, 28));
        horizontalLayoutWidget_3 = new QWidget(editpasswd);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(100, 260, 331, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lPasswdconfirm = new QLineEdit(horizontalLayoutWidget_3);
        lPasswdconfirm->setObjectName(QStringLiteral("lPasswdconfirm"));
        lPasswdconfirm->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lPasswdconfirm);


        retranslateUi(editpasswd);

        QMetaObject::connectSlotsByName(editpasswd);
    } // setupUi

    void retranslateUi(QWidget *editpasswd)
    {
        editpasswd->setWindowTitle(QApplication::translate("editpasswd", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("editpasswd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("editpasswd", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("editpasswd", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        bOk->setText(QApplication::translate("editpasswd", "\347\241\256\345\256\232", Q_NULLPTR));
        bCancel->setText(QApplication::translate("editpasswd", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("editpasswd", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editpasswd: public Ui_editpasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPASSWD_H
