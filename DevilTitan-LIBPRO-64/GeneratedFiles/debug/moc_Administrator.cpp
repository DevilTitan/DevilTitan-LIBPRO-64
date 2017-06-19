/****************************************************************************
** Meta object code from reading C++ file 'Administrator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Administrator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Administrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Administrator_t {
    QByteArrayData data[16];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Administrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Administrator_t qt_meta_stringdata_Administrator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Administrator"
QT_MOC_LITERAL(1, 14, 28), // "on_maleCheckBox_stateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "arg1"
QT_MOC_LITERAL(4, 49, 30), // "on_femaleCheckBox_stateChanged"
QT_MOC_LITERAL(5, 80, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(6, 104, 23), // "on_insertButton_clicked"
QT_MOC_LITERAL(7, 128, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(8, 152, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(9, 176, 25), // "on_insertButton_2_clicked"
QT_MOC_LITERAL(10, 202, 25), // "on_searchButton_2_clicked"
QT_MOC_LITERAL(11, 228, 25), // "on_deleteButton_2_clicked"
QT_MOC_LITERAL(12, 254, 25), // "on_updateButton_2_clicked"
QT_MOC_LITERAL(13, 280, 23), // "on_logOutButton_clicked"
QT_MOC_LITERAL(14, 304, 21), // "on_roleButton_clicked"
QT_MOC_LITERAL(15, 326, 24) // "on_messageButton_clicked"

    },
    "Administrator\0on_maleCheckBox_stateChanged\0"
    "\0arg1\0on_femaleCheckBox_stateChanged\0"
    "on_deleteButton_clicked\0on_insertButton_clicked\0"
    "on_searchButton_clicked\0on_updateButton_clicked\0"
    "on_insertButton_2_clicked\0"
    "on_searchButton_2_clicked\0"
    "on_deleteButton_2_clicked\0"
    "on_updateButton_2_clicked\0"
    "on_logOutButton_clicked\0on_roleButton_clicked\0"
    "on_messageButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Administrator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    0,   85,    2, 0x08 /* Private */,
       6,    0,   86,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Administrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Administrator *_t = static_cast<Administrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_maleCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_femaleCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: { bool _r = _t->on_insertButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->on_searchButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->on_updateButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->on_insertButton_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->on_searchButton_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_deleteButton_2_clicked(); break;
        case 9: { bool _r = _t->on_updateButton_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_logOutButton_clicked(); break;
        case 11: _t->on_roleButton_clicked(); break;
        case 12: _t->on_messageButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Administrator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Administrator.data,
      qt_meta_data_Administrator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Administrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Administrator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Administrator.stringdata0))
        return static_cast<void*>(const_cast< Administrator*>(this));
    if (!strcmp(_clname, "Ui::Administrator"))
        return static_cast< Ui::Administrator*>(const_cast< Administrator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Administrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
