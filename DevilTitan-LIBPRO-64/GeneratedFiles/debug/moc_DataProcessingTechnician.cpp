/****************************************************************************
** Meta object code from reading C++ file 'DataProcessingTechnician.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DataProcessingTechnician.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataProcessingTechnician.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataProcessingTechnician_t {
    QByteArrayData data[14];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataProcessingTechnician_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataProcessingTechnician_t qt_meta_stringdata_DataProcessingTechnician = {
    {
QT_MOC_LITERAL(0, 0, 24), // "DataProcessingTechnician"
QT_MOC_LITERAL(1, 25, 20), // "on_waitTable_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 20), // "on_bookTable_clicked"
QT_MOC_LITERAL(5, 74, 25), // "on_isbnsearch_textChanged"
QT_MOC_LITERAL(6, 100, 4), // "arg1"
QT_MOC_LITERAL(7, 105, 29), // "on_booknamesearch_textChanged"
QT_MOC_LITERAL(8, 135, 23), // "on_requestTable_clicked"
QT_MOC_LITERAL(9, 159, 25), // "on_insertButton_2_clicked"
QT_MOC_LITERAL(10, 185, 23), // "on_isbn_editingFinished"
QT_MOC_LITERAL(11, 209, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(12, 233, 23), // "on_insertButton_clicked"
QT_MOC_LITERAL(13, 257, 25) // "on_searchButton_3_clicked"

    },
    "DataProcessingTechnician\0on_waitTable_clicked\0"
    "\0index\0on_bookTable_clicked\0"
    "on_isbnsearch_textChanged\0arg1\0"
    "on_booknamesearch_textChanged\0"
    "on_requestTable_clicked\0"
    "on_insertButton_2_clicked\0"
    "on_isbn_editingFinished\0on_searchButton_clicked\0"
    "on_insertButton_clicked\0"
    "on_searchButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataProcessingTechnician[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       7,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataProcessingTechnician::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataProcessingTechnician *_t = static_cast<DataProcessingTechnician *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_waitTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_bookTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_isbnsearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_booknamesearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_requestTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_insertButton_2_clicked(); break;
        case 6: _t->on_isbn_editingFinished(); break;
        case 7: _t->on_searchButton_clicked(); break;
        case 8: _t->on_insertButton_clicked(); break;
        case 9: _t->on_searchButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DataProcessingTechnician::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DataProcessingTechnician.data,
      qt_meta_data_DataProcessingTechnician,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataProcessingTechnician::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessingTechnician::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataProcessingTechnician.stringdata0))
        return static_cast<void*>(const_cast< DataProcessingTechnician*>(this));
    return QWidget::qt_metacast(_clname);
}

int DataProcessingTechnician::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
