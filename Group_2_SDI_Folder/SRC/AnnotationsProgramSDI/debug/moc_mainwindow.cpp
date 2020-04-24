/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue 21. Apr 21:02:46 2020
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
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      69,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,
     182,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     242,  237,   11,   11, 0x08,
     284,   11,   11,   11, 0x08,
     305,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     375,   11,   11,   11, 0x08,
     400,   11,   11,   11, 0x08,
     428,   11,   11,   11, 0x08,
     456,   11,   11,   11, 0x08,
     480,   11,   11,   11, 0x08,
     526,  515,  503,   11, 0x08,
     553,   11,   11,   11, 0x08,
     569,   11,   11,   11, 0x08,
     587,   11,   11,   11, 0x08,
     607,   11,   11,   11, 0x08,
     624,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_btnDeleteShape_clicked()\0"
    "on_btnSortClassDec_clicked()\0"
    "on_btnSortDateDes_clicked()\0"
    "on_btnSortClassAcs_clicked()\0"
    "on_btnSortNameASC_clicked()\0"
    "on_btnSortDateAcs_clicked()\0"
    "on_btnSortNameDes_clicked()\0"
    "on_btnDispalyImg_clicked()\0item\0"
    "on_lwImages_itemClicked(QListWidgetItem*)\0"
    "on_btnSave_clicked()\0on_btnPoly_clicked()\0"
    "on_btnTrapezium_clicked()\0"
    "on_btnSquare_clicked()\0on_btnTriangle_clicked()\0"
    "on_btnDeleteClass_clicked()\0"
    "on_btnDeleteImage_clicked()\0"
    "on_btnClasses_clicked()\0on_btnImages_clicked()\0"
    "QStringList\0list,order\0"
    "sortList(QStringList,bool)\0clearLwImages()\0"
    "clearListImages()\0clearCreationDate()\0"
    "clearListClass()\0clearListWidgetClass()\0"
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
        case 0: on_btnDeleteShape_clicked(); break;
        case 1: on_btnSortClassDec_clicked(); break;
        case 2: on_btnSortDateDes_clicked(); break;
        case 3: on_btnSortClassAcs_clicked(); break;
        case 4: on_btnSortNameASC_clicked(); break;
        case 5: on_btnSortDateAcs_clicked(); break;
        case 6: on_btnSortNameDes_clicked(); break;
        case 7: on_btnDispalyImg_clicked(); break;
        case 8: on_lwImages_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: on_btnSave_clicked(); break;
        case 10: on_btnPoly_clicked(); break;
        case 11: on_btnTrapezium_clicked(); break;
        case 12: on_btnSquare_clicked(); break;
        case 13: on_btnTriangle_clicked(); break;
        case 14: on_btnDeleteClass_clicked(); break;
        case 15: on_btnDeleteImage_clicked(); break;
        case 16: on_btnClasses_clicked(); break;
        case 17: on_btnImages_clicked(); break;
        case 18: { QStringList _r = sortList((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 19: clearLwImages(); break;
        case 20: clearListImages(); break;
        case 21: clearCreationDate(); break;
        case 22: clearListClass(); break;
        case 23: clearListWidgetClass(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
