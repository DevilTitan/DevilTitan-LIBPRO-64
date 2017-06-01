/****************************************************************************
** Meta object code from reading C++ file 'Reader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../DevilTitan-LIBPRO-64/Reader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Reader_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reader_t qt_meta_stringdata_Reader = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Reader"
QT_MOC_LITERAL(1, 7, 19), // "on_bookList_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 24), // "on_searchBar_textChanged"
QT_MOC_LITERAL(5, 59, 4), // "arg1"
QT_MOC_LITERAL(6, 64, 17), // "on_addbtn_clicked"
QT_MOC_LITERAL(7, 82, 22), // "on_bookListbtn_clicked"
QT_MOC_LITERAL(8, 105, 20) // "on_removebtn_clicked"

    },
    "Reader\0on_bookList_clicked\0\0index\0"
    "on_searchBar_textChanged\0arg1\0"
    "on_addbtn_clicked\0on_bookListbtn_clicked\0"
    "on_removebtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Reader *_t = static_cast<Reader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bookList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_searchBar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_addbtn_clicked(); break;
        case 3: _t->on_bookListbtn_clicked(); break;
        case 4: _t->on_removebtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Reader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Reader.data,
      qt_meta_data_Reader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Reader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Reader.stringdata0))
        return static_cast<void*>(const_cast< Reader*>(this));
    return QWidget::qt_metacast(_clname);
}

int Reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
