/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "showMyLaunchedTask"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "showMyManagedTask"
QT_MOC_LITERAL(4, 49, 19), // "showMyTranslateTask"
QT_MOC_LITERAL(5, 69, 10), // "launchtask"
QT_MOC_LITERAL(6, 80, 8), // "reLoginw"
QT_MOC_LITERAL(7, 89, 18), // "showtaskGetmanager"
QT_MOC_LITERAL(8, 108, 21), // "showtaskGettranslator"
QT_MOC_LITERAL(9, 130, 12), // "applyManager"
QT_MOC_LITERAL(10, 143, 14), // "applyTranslaor"
QT_MOC_LITERAL(11, 158, 21), // "showApplyManagerState"
QT_MOC_LITERAL(12, 180, 24), // "showApplyTranslatorState"
QT_MOC_LITERAL(13, 205, 16), // "showCurrentState"
QT_MOC_LITERAL(14, 222, 10), // "editpasswd"
QT_MOC_LITERAL(15, 233, 12), // "setTapplyddl"
QT_MOC_LITERAL(16, 246, 19), // "showFinalTranslator"
QT_MOC_LITERAL(17, 266, 18), // "getMyTranslateTask"
QT_MOC_LITERAL(18, 285, 18), // "managerFinalSubmit"
QT_MOC_LITERAL(19, 304, 27), // "launcherGetFinalTranslation"
QT_MOC_LITERAL(20, 332, 8) // "addMoney"

    },
    "MainWindow\0showMyLaunchedTask\0\0"
    "showMyManagedTask\0showMyTranslateTask\0"
    "launchtask\0reLoginw\0showtaskGetmanager\0"
    "showtaskGettranslator\0applyManager\0"
    "applyTranslaor\0showApplyManagerState\0"
    "showApplyTranslatorState\0showCurrentState\0"
    "editpasswd\0setTapplyddl\0showFinalTranslator\0"
    "getMyTranslateTask\0managerFinalSubmit\0"
    "launcherGetFinalTranslation\0addMoney"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMyLaunchedTask(); break;
        case 1: _t->showMyManagedTask(); break;
        case 2: _t->showMyTranslateTask(); break;
        case 3: _t->launchtask(); break;
        case 4: _t->reLoginw(); break;
        case 5: _t->showtaskGetmanager(); break;
        case 6: _t->showtaskGettranslator(); break;
        case 7: _t->applyManager(); break;
        case 8: _t->applyTranslaor(); break;
        case 9: _t->showApplyManagerState(); break;
        case 10: _t->showApplyTranslatorState(); break;
        case 11: _t->showCurrentState(); break;
        case 12: _t->editpasswd(); break;
        case 13: _t->setTapplyddl(); break;
        case 14: _t->showFinalTranslator(); break;
        case 15: _t->getMyTranslateTask(); break;
        case 16: _t->managerFinalSubmit(); break;
        case 17: _t->launcherGetFinalTranslation(); break;
        case 18: _t->addMoney(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
