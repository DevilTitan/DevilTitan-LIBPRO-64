/****************************************************************************
** Meta object code from reading C++ file 'Reader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Reader.h"
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
    QByteArrayData data[20];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reader_t qt_meta_stringdata_Reader = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Reader"
QT_MOC_LITERAL(1, 7, 17), // "on_addbtn_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "on_removebtn_clicked"
QT_MOC_LITERAL(4, 47, 21), // "on_requestbtn_clicked"
QT_MOC_LITERAL(5, 69, 17), // "on_logout_clicked"
QT_MOC_LITERAL(6, 87, 24), // "on_searchBar_textChanged"
QT_MOC_LITERAL(7, 112, 4), // "arg1"
QT_MOC_LITERAL(8, 117, 22), // "on_bookListbtn_clicked"
QT_MOC_LITERAL(9, 140, 21), // "on_borrowBook_clicked"
QT_MOC_LITERAL(10, 162, 5), // "index"
QT_MOC_LITERAL(11, 168, 18), // "on_rolebtn_clicked"
QT_MOC_LITERAL(12, 187, 21), // "on_accountbtn_clicked"
QT_MOC_LITERAL(13, 209, 23), // "on_publicChat_3_clicked"
QT_MOC_LITERAL(14, 233, 21), // "on_publicChat_clicked"
QT_MOC_LITERAL(15, 255, 19), // "on_bookList_clicked"
QT_MOC_LITERAL(16, 275, 19), // "on_logout_2_clicked"
QT_MOC_LITERAL(17, 295, 23), // "on_publicChat_4_clicked"
QT_MOC_LITERAL(18, 319, 15), // "on_rate_clicked"
QT_MOC_LITERAL(19, 335, 23) // "on_publicChat_5_clicked"

    },
    "Reader\0on_addbtn_clicked\0\0"
    "on_removebtn_clicked\0on_requestbtn_clicked\0"
    "on_logout_clicked\0on_searchBar_textChanged\0"
    "arg1\0on_bookListbtn_clicked\0"
    "on_borrowBook_clicked\0index\0"
    "on_rolebtn_clicked\0on_accountbtn_clicked\0"
    "on_publicChat_3_clicked\0on_publicChat_clicked\0"
    "on_bookList_clicked\0on_logout_2_clicked\0"
    "on_publicChat_4_clicked\0on_rate_clicked\0"
    "on_publicChat_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    1,   98,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    1,  102,    2, 0x08 /* Private */,
      11,    0,  105,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    1,  109,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
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
        case 0: _t->on_addbtn_clicked(); break;
        case 1: _t->on_removebtn_clicked(); break;
        case 2: _t->on_requestbtn_clicked(); break;
        case 3: _t->on_logout_clicked(); break;
        case 4: _t->on_searchBar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_bookListbtn_clicked(); break;
        case 6: _t->on_borrowBook_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_rolebtn_clicked(); break;
        case 8: _t->on_accountbtn_clicked(); break;
        case 9: _t->on_publicChat_3_clicked(); break;
        case 10: _t->on_publicChat_clicked(); break;
        case 11: _t->on_bookList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_logout_2_clicked(); break;
        case 13: _t->on_publicChat_4_clicked(); break;
        case 14: _t->on_rate_clicked(); break;
        case 15: _t->on_publicChat_5_clicked(); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
