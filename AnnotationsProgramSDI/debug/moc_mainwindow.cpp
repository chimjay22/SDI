/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu 12. Mar 16:26:03 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      83,   11,   11,   11, 0x08,
     111,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     163,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_btnDispalyImg_clicked()\0"
    "on_btnSave_clicked()\0on_btnPoly_2_clicked()\0"
    "on_btnTrapezium_2_clicked()\0"
    "on_btnSquare_2_clicked()\0"
    "on_btnTriangle_2_clicked()\0"
    "on_btnDeleteClass_clicked()\0"
    "on_btnDeleteImage_clicked()\0"
    "on_btnClasses_clicked()\0on_btnImages_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnDispalyImg_clicked(); break;
        case 1: on_btnSave_clicked(); break;
        case 2: on_btnPoly_2_clicked(); break;
        case 3: on_btnTrapezium_2_clicked(); break;
        case 4: on_btnSquare_2_clicked(); break;
        case 5: on_btnTriangle_2_clicked(); break;
        case 6: on_btnDeleteClass_clicked(); break;
        case 7: on_btnDeleteImage_clicked(); break;
        case 8: on_btnClasses_clicked(); break;
        case 9: on_btnImages_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
