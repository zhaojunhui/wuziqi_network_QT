/****************************************************************************
** Meta object code from reading C++ file 'createdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wuziqi_network/createdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createDialog_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createDialog_t qt_meta_stringdata_createDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "createDialog"
QT_MOC_LITERAL(1, 13, 14), // "create_connect"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "cancel_create_connect"
QT_MOC_LITERAL(4, 51, 24), // "on_cancel_button_clicked"
QT_MOC_LITERAL(5, 76, 20) // "on_OK_button_clicked"

    },
    "createDialog\0create_connect\0\0"
    "cancel_create_connect\0on_cancel_button_clicked\0"
    "on_OK_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void createDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createDialog *_t = static_cast<createDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->create_connect(); break;
        case 1: _t->cancel_create_connect(); break;
        case 2: _t->on_cancel_button_clicked(); break;
        case 3: _t->on_OK_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (createDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&createDialog::create_connect)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (createDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&createDialog::cancel_create_connect)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject createDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createDialog.data,
      qt_meta_data_createDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createDialog.stringdata0))
        return static_cast<void*>(const_cast< createDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int createDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void createDialog::create_connect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void createDialog::cancel_create_connect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
