/****************************************************************************
** Meta object code from reading C++ file 'leddisplayqtproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/ui/leddisplayqtproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'leddisplayqtproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LedDisplayProxy_t {
    QByteArrayData data[4];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LedDisplayProxy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LedDisplayProxy_t qt_meta_stringdata_LedDisplayProxy = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LedDisplayProxy"
QT_MOC_LITERAL(1, 16, 19), // "displayDigitChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13) // "GetLedDisplay"

    },
    "LedDisplayProxy\0displayDigitChanged\0"
    "\0GetLedDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LedDisplayProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,

       0        // eod
};

void LedDisplayProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LedDisplayProxy *_t = static_cast<LedDisplayProxy *>(_o);
        switch (_id) {
        case 0: _t->displayDigitChanged(); break;
        case 1: { QString _r = _t->GetLedDisplay();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LedDisplayProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LedDisplayProxy::displayDigitChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LedDisplayProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LedDisplayProxy.data,
      qt_meta_data_LedDisplayProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LedDisplayProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LedDisplayProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LedDisplayProxy.stringdata))
        return static_cast<void*>(const_cast< LedDisplayProxy*>(this));
    if (!strcmp(_clname, "UiProxy"))
        return static_cast< UiProxy*>(const_cast< LedDisplayProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int LedDisplayProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LedDisplayProxy::displayDigitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
