/****************************************************************************
** Meta object code from reading C++ file 'signupform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../signupform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signupform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_signupForm_t {
    QByteArrayData data[16];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_signupForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_signupForm_t qt_meta_stringdata_signupForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "signupForm"
QT_MOC_LITERAL(1, 11, 23), // "on_userName_textChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "arg1"
QT_MOC_LITERAL(4, 41, 27), // "on_userName_editingFinished"
QT_MOC_LITERAL(5, 69, 20), // "on_email_textChanged"
QT_MOC_LITERAL(6, 90, 24), // "on_email_editingFinished"
QT_MOC_LITERAL(7, 115, 23), // "on_password_textChanged"
QT_MOC_LITERAL(8, 139, 27), // "on_password_editingFinished"
QT_MOC_LITERAL(9, 167, 22), // "on_confirm_textChanged"
QT_MOC_LITERAL(10, 190, 26), // "on_confirm_editingFinished"
QT_MOC_LITERAL(11, 217, 17), // "on_signup_clicked"
QT_MOC_LITERAL(12, 235, 16), // "on_login_clicked"
QT_MOC_LITERAL(13, 252, 9), // "hideLabel"
QT_MOC_LITERAL(14, 262, 29), // "on_identification_textChanged"
QT_MOC_LITERAL(15, 292, 33) // "on_identification_editingFini..."

    },
    "signupForm\0on_userName_textChanged\0\0"
    "arg1\0on_userName_editingFinished\0"
    "on_email_textChanged\0on_email_editingFinished\0"
    "on_password_textChanged\0"
    "on_password_editingFinished\0"
    "on_confirm_textChanged\0"
    "on_confirm_editingFinished\0on_signup_clicked\0"
    "on_login_clicked\0hideLabel\0"
    "on_identification_textChanged\0"
    "on_identification_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signupForm[] = {

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
       4,    0,   82,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    0,   86,    2, 0x08 /* Private */,
       7,    1,   87,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void signupForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        signupForm *_t = static_cast<signupForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_userName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_userName_editingFinished(); break;
        case 2: _t->on_email_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_email_editingFinished(); break;
        case 4: _t->on_password_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_password_editingFinished(); break;
        case 6: _t->on_confirm_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_confirm_editingFinished(); break;
        case 8: _t->on_signup_clicked(); break;
        case 9: _t->on_login_clicked(); break;
        case 10: _t->hideLabel(); break;
        case 11: _t->on_identification_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_identification_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject signupForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_signupForm.data,
      qt_meta_data_signupForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *signupForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signupForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_signupForm.stringdata0))
        return static_cast<void*>(const_cast< signupForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int signupForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
