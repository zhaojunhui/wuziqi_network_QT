/****************************************************************************
** Meta object code from reading C++ file 'wuziqi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wuziqi_network/wuziqi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wuziqi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wuziqi_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wuziqi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wuziqi_t qt_meta_stringdata_wuziqi = {
    {
QT_MOC_LITERAL(0, 0, 6), // "wuziqi"
QT_MOC_LITERAL(1, 7, 17), // "success_connected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 25), // "on_create_connect_clicked"
QT_MOC_LITERAL(4, 52, 21), // "on_to_connect_clicked"
QT_MOC_LITERAL(5, 74, 16), // "on_newconnection"
QT_MOC_LITERAL(6, 91, 18), // "on_connect_to_host"
QT_MOC_LITERAL(7, 110, 8), // "readData"
QT_MOC_LITERAL(8, 119, 8), // "sendData"
QT_MOC_LITERAL(9, 128, 16), // "wait_for_connect"
QT_MOC_LITERAL(10, 145, 14), // "cancel_connect"
QT_MOC_LITERAL(11, 160, 19), // "on_give_tip_clicked"
QT_MOC_LITERAL(12, 180, 23), // "on_stop_connect_clicked"
QT_MOC_LITERAL(13, 204, 20) // "on_quit_game_clicked"

    },
    "wuziqi\0success_connected\0\0"
    "on_create_connect_clicked\0"
    "on_to_connect_clicked\0on_newconnection\0"
    "on_connect_to_host\0readData\0sendData\0"
    "wait_for_connect\0cancel_connect\0"
    "on_give_tip_clicked\0on_stop_connect_clicked\0"
    "on_quit_game_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wuziqi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wuziqi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wuziqi *_t = static_cast<wuziqi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->success_connected(); break;
        case 1: _t->on_create_connect_clicked(); break;
        case 2: _t->on_to_connect_clicked(); break;
        case 3: _t->on_newconnection(); break;
        case 4: _t->on_connect_to_host((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->readData(); break;
        case 6: _t->sendData(); break;
        case 7: _t->wait_for_connect(); break;
        case 8: _t->cancel_connect(); break;
        case 9: _t->on_give_tip_clicked(); break;
        case 10: _t->on_stop_connect_clicked(); break;
        case 11: _t->on_quit_game_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (wuziqi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&wuziqi::success_connected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject wuziqi::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wuziqi.data,
      qt_meta_data_wuziqi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wuziqi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wuziqi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wuziqi.stringdata0))
        return static_cast<void*>(const_cast< wuziqi*>(this));
    return QWidget::qt_metacast(_clname);
}

int wuziqi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void wuziqi::success_connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
