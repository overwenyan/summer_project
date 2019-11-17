/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tMainPage;
    QPushButton *bLaunchTask;
    QTableWidget *twApingMa;
    QLabel *label_2;
    QPushButton *bApManager;
    QPushButton *bRefreshMain;
    QWidget *tab;
    QLabel *label_3;
    QPushButton *bApTranslator;
    QTableWidget *twApingTr;
    QPushButton *bRefreshMain_2;
    QWidget *tLaunch;
    QTableWidget *twMyLTask;
    QLabel *label;
    QPushButton *bGetApply;
    QPushButton *bRefreshMyLtask;
    QPushButton *bGetFinalTranslation;
    QWidget *tManage;
    QTableWidget *twMyMTask;
    QPushButton *bGetTransApply;
    QPushButton *bRefreshMyMtask;
    QLabel *label_4;
    QPushButton *bsetTddl;
    QPushButton *bFindTranslator;
    QPushButton *bFinalSubmit;
    QWidget *tTranMission;
    QPushButton *bRefreshMyTtask;
    QTableWidget *twMyTTask;
    QLabel *label_5;
    QPushButton *bGetTransTask;
    QWidget *tPersonInfo;
    QListView *lInfo;
    QPushButton *bReturn;
    QPushButton *bEditpasswd;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *bAddAmount;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1125, 632);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(461, 555));
        MainWindow->setBaseSize(QSize(1, 0));
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/timg.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777205, 16777215));
        centralWidget->setInputMethodHints(Qt::ImhNone);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1081, 591));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(1081, 591));
        tabWidget->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::NoAntialias);
        tabWidget->setFont(font1);
        tabWidget->setTabletTracking(false);
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{width:100}\n"
"\n"
"QTabBar::tab{height:40}rgb(85, 170, 0)"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tMainPage = new QWidget();
        tMainPage->setObjectName(QStringLiteral("tMainPage"));
        bLaunchTask = new QPushButton(tMainPage);
        bLaunchTask->setObjectName(QStringLiteral("bLaunchTask"));
        bLaunchTask->setGeometry(QRect(880, 70, 121, 61));
        QFont font2;
        font2.setPointSize(13);
        bLaunchTask->setFont(font2);
        twApingMa = new QTableWidget(tMainPage);
        twApingMa->setObjectName(QStringLiteral("twApingMa"));
        twApingMa->setGeometry(QRect(40, 60, 791, 421));
        label_2 = new QLabel(tMainPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 14, 271, 31));
        label_2->setFont(font2);
        bApManager = new QPushButton(tMainPage);
        bApManager->setObjectName(QStringLiteral("bApManager"));
        bApManager->setGeometry(QRect(880, 170, 121, 61));
        bApManager->setFont(font2);
        bRefreshMain = new QPushButton(tMainPage);
        bRefreshMain->setObjectName(QStringLiteral("bRefreshMain"));
        bRefreshMain->setGeometry(QRect(880, 260, 121, 61));
        bRefreshMain->setFont(font2);
        tabWidget->addTab(tMainPage, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 10, 321, 41));
        QFont font3;
        font3.setPointSize(15);
        label_3->setFont(font3);
        bApTranslator = new QPushButton(tab);
        bApTranslator->setObjectName(QStringLiteral("bApTranslator"));
        bApTranslator->setGeometry(QRect(840, 170, 121, 61));
        bApTranslator->setFont(font2);
        twApingTr = new QTableWidget(tab);
        twApingTr->setObjectName(QStringLiteral("twApingTr"));
        twApingTr->setGeometry(QRect(20, 60, 801, 441));
        bRefreshMain_2 = new QPushButton(tab);
        bRefreshMain_2->setObjectName(QStringLiteral("bRefreshMain_2"));
        bRefreshMain_2->setGeometry(QRect(840, 240, 121, 61));
        bRefreshMain_2->setFont(font2);
        tabWidget->addTab(tab, QString());
        tLaunch = new QWidget();
        tLaunch->setObjectName(QStringLiteral("tLaunch"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tLaunch->sizePolicy().hasHeightForWidth());
        tLaunch->setSizePolicy(sizePolicy1);
        tLaunch->setInputMethodHints(Qt::ImhNone);
        twMyLTask = new QTableWidget(tLaunch);
        twMyLTask->setObjectName(QStringLiteral("twMyLTask"));
        twMyLTask->setGeometry(QRect(40, 60, 821, 381));
        label = new QLabel(tLaunch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 10, 181, 31));
        bGetApply = new QPushButton(tLaunch);
        bGetApply->setObjectName(QStringLiteral("bGetApply"));
        bGetApply->setGeometry(QRect(880, 70, 191, 61));
        QFont font4;
        font4.setPointSize(11);
        bGetApply->setFont(font4);
        bRefreshMyLtask = new QPushButton(tLaunch);
        bRefreshMyLtask->setObjectName(QStringLiteral("bRefreshMyLtask"));
        bRefreshMyLtask->setGeometry(QRect(90, 460, 121, 51));
        bRefreshMyLtask->setFont(font4);
        bGetFinalTranslation = new QPushButton(tLaunch);
        bGetFinalTranslation->setObjectName(QStringLiteral("bGetFinalTranslation"));
        bGetFinalTranslation->setGeometry(QRect(880, 160, 191, 61));
        bGetFinalTranslation->setFont(font4);
        tabWidget->addTab(tLaunch, QString());
        tManage = new QWidget();
        tManage->setObjectName(QStringLiteral("tManage"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tManage->sizePolicy().hasHeightForWidth());
        tManage->setSizePolicy(sizePolicy2);
        twMyMTask = new QTableWidget(tManage);
        twMyMTask->setObjectName(QStringLiteral("twMyMTask"));
        twMyMTask->setGeometry(QRect(40, 50, 821, 381));
        bGetTransApply = new QPushButton(tManage);
        bGetTransApply->setObjectName(QStringLiteral("bGetTransApply"));
        bGetTransApply->setGeometry(QRect(880, 60, 191, 71));
        bGetTransApply->setFont(font4);
        bRefreshMyMtask = new QPushButton(tManage);
        bRefreshMyMtask->setObjectName(QStringLiteral("bRefreshMyMtask"));
        bRefreshMyMtask->setGeometry(QRect(100, 460, 131, 51));
        bRefreshMyMtask->setFont(font4);
        label_4 = new QLabel(tManage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 10, 181, 31));
        bsetTddl = new QPushButton(tManage);
        bsetTddl->setObjectName(QStringLiteral("bsetTddl"));
        bsetTddl->setGeometry(QRect(880, 150, 191, 61));
        QFont font5;
        font5.setPointSize(10);
        bsetTddl->setFont(font5);
        bFindTranslator = new QPushButton(tManage);
        bFindTranslator->setObjectName(QStringLiteral("bFindTranslator"));
        bFindTranslator->setGeometry(QRect(880, 230, 191, 51));
        QFont font6;
        font6.setPointSize(12);
        bFindTranslator->setFont(font6);
        bFinalSubmit = new QPushButton(tManage);
        bFinalSubmit->setObjectName(QStringLiteral("bFinalSubmit"));
        bFinalSubmit->setGeometry(QRect(880, 310, 181, 51));
        bFinalSubmit->setFont(font6);
        tabWidget->addTab(tManage, QString());
        tTranMission = new QWidget();
        tTranMission->setObjectName(QStringLiteral("tTranMission"));
        bRefreshMyTtask = new QPushButton(tTranMission);
        bRefreshMyTtask->setObjectName(QStringLiteral("bRefreshMyTtask"));
        bRefreshMyTtask->setGeometry(QRect(80, 470, 121, 51));
        bRefreshMyTtask->setFont(font6);
        twMyTTask = new QTableWidget(tTranMission);
        twMyTTask->setObjectName(QStringLiteral("twMyTTask"));
        twMyTTask->setGeometry(QRect(20, 60, 821, 381));
        label_5 = new QLabel(tTranMission);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 20, 181, 31));
        bGetTransTask = new QPushButton(tTranMission);
        bGetTransTask->setObjectName(QStringLiteral("bGetTransTask"));
        bGetTransTask->setGeometry(QRect(860, 70, 191, 71));
        bGetTransTask->setFont(font4);
        tabWidget->addTab(tTranMission, QString());
        tPersonInfo = new QWidget();
        tPersonInfo->setObjectName(QStringLiteral("tPersonInfo"));
        lInfo = new QListView(tPersonInfo);
        lInfo->setObjectName(QStringLiteral("lInfo"));
        lInfo->setGeometry(QRect(690, 50, 351, 401));
        bReturn = new QPushButton(tPersonInfo);
        bReturn->setObjectName(QStringLiteral("bReturn"));
        bReturn->setGeometry(QRect(120, 400, 151, 51));
        bEditpasswd = new QPushButton(tPersonInfo);
        bEditpasswd->setObjectName(QStringLiteral("bEditpasswd"));
        bEditpasswd->setGeometry(QRect(330, 400, 141, 51));
        label_8 = new QLabel(tPersonInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 300, 400, 40));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(11);
        label_8->setFont(font7);
        label_8->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tPersonInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 260, 400, 41));
        label_7->setFont(font7);
        label_7->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tPersonInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 200, 100, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font8.setPointSize(12);
        label_6->setFont(font8);
        label_6->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(tPersonInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 80, 600, 61));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font9.setPointSize(20);
        label_9->setFont(font9);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tPersonInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(190, 140, 300, 40));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font10.setPointSize(13);
        label_10->setFont(font10);
        label_10->setAlignment(Qt::AlignCenter);
        bAddAmount = new QPushButton(tPersonInfo);
        bAddAmount->setObjectName(QStringLiteral("bAddAmount"));
        bAddAmount->setGeometry(QRect(500, 400, 131, 51));
        tabWidget->addTab(tPersonInfo, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1125, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\274\227\345\214\205\347\277\273\350\257\221-\347\224\250\346\210\267\347\225\214\351\235\242", Q_NULLPTR));
        bLaunchTask->setText(QApplication::translate("MainWindow", "\345\217\221\345\270\203\344\273\273\345\212\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\255\243\345\234\250\346\213\233\345\213\237\350\264\237\350\264\243\344\272\272\347\232\204\344\273\273\345\212\241\357\274\232", Q_NULLPTR));
        bApManager->setText(QApplication::translate("MainWindow", "\346\212\245\345\220\215\350\264\237\350\264\243\344\272\272", Q_NULLPTR));
        bRefreshMain->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\212\266\346\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tMainPage), QApplication::translate("MainWindow", "\346\212\245\345\220\215\350\264\237\350\264\243\344\272\272\345\217\221\345\270\203\344\273\273\345\212\241", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\255\243\345\234\250\346\213\233\345\213\237\350\257\221\350\200\205\347\232\204\344\273\273\345\212\241\357\274\232", Q_NULLPTR));
        bApTranslator->setText(QApplication::translate("MainWindow", "\346\212\245\345\220\215\350\257\221\350\200\205", Q_NULLPTR));
        bRefreshMain_2->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\212\266\346\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\212\245\345\220\215\347\277\273\350\257\221\350\200\205", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\210\221\345\217\221\345\270\203\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bGetApply->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\264\237\350\264\243\344\272\272\346\212\245\345\220\215\346\203\205\345\206\265", Q_NULLPTR));
        bRefreshMyLtask->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\344\273\273\345\212\241\347\212\266\346\200\201", Q_NULLPTR));
        bGetFinalTranslation->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\346\234\200\347\273\210\347\277\273\350\257\221\347\250\277", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tLaunch), QApplication::translate("MainWindow", "\345\217\221\345\270\203\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bGetTransApply->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\277\273\350\257\221\344\272\272\346\212\245\345\220\215\346\203\205\345\206\265", Q_NULLPTR));
        bRefreshMyMtask->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\344\273\273\345\212\241\347\212\266\346\200\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\210\221\350\264\237\350\264\243\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bsetTddl->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\257\221\350\200\205\346\212\245\345\220\215\346\210\252\346\255\242\346\227\245\346\234\237", Q_NULLPTR));
        bFindTranslator->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\346\234\200\347\273\210\347\277\273\350\257\221\344\272\272", Q_NULLPTR));
        bFinalSubmit->setText(QApplication::translate("MainWindow", "\346\225\264\345\220\210\344\273\273\345\212\241\345\271\266\344\270\212\344\274\240", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tManage), QApplication::translate("MainWindow", "\350\264\237\350\264\243\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bRefreshMyTtask->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\210\221\347\277\273\350\257\221\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bGetTransTask->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\347\277\273\350\257\221\346\203\205\345\206\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tTranMission), QApplication::translate("MainWindow", "\347\277\273\350\257\221\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        bReturn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        bEditpasswd->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "wen-y18@mails.tsinghua.edu.cn", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\226\207\350\250\200     2018010516", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", " \350\256\276\350\256\241\350\200\205", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\344\274\227\345\214\205\345\215\217\344\275\234\347\277\273\350\257\221\345\271\263\345\217\260", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "C++\347\250\213\345\272\217\350\256\276\350\256\241\344\270\216\350\256\255\347\273\203", Q_NULLPTR));
        bAddAmount->setText(QApplication::translate("MainWindow", "\345\205\205\345\200\274", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tPersonInfo), QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
