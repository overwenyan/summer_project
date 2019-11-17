#-------------------------------------------------
#
# Project created by QtCreator 2019-07-12T09:47:07
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_Translation
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    abstractuser.cpp \
    task.cpp \
    launcher.cpp \
    manager.cpp \
    translator.cpp \
    editpasswd.cpp \
    registerwindows.cpp \
    loginwindows.cpp \
    admin.cpp \
    ltaskwindow.cpp \
    applymanagerw.cpp \
    showmapplyw.cpp \
    settddl.cpp \
    applytranslatorw.cpp \
    showtapplyw.cpp \
    sectiontask.cpp \
    showtranslatorw.cpp \
    translatorwindow.cpp \
    adminwindow.cpp \
    managersubmitw.cpp \
    launchergetw.cpp \
    mydatabase.cpp \
    setpointw.cpp \
    addpointw.cpp

HEADERS += \
        mainwindow.h \
    abstractuser.h \
    task.h \
    launcher.h \
    mydatabase.h \
    enum.h \
    manager.h \
    translator.h \
    editpasswd.h \
    registerwindows.h \
    loginwindows.h \
    admin.h \
    ltaskwindow.h \
    applymanagerw.h \
    showmapplyw.h \
    settddl.h \
    applytranslatorw.h \
    showtapplyw.h \
    sectiontask.h \
    showtranslatorw.h \
    translatorwindow.h \
    adminwindow.h \
    managersubmitw.h \
    launchergetw.h \
    mydatabase.h \
    setpointw.h \
    addpointw.h

FORMS += \
        mainwindow.ui \
    editpasswd.ui \
    registerwindows.ui \
    loginwindows.ui \
    launchtask.ui \
    applymanagerw.ui \
    showmapplyw.ui \
    settddl.ui \
    applytranslatorw.ui \
    showtapplyw.ui \
    sectiontask.ui \
    showtranslatorw.ui \
    translatorwindow.ui \
    adminwindow.ui \
    managersubmitw.ui \
    launchergetw.ui \
    setpointw.ui \
    addpointw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
