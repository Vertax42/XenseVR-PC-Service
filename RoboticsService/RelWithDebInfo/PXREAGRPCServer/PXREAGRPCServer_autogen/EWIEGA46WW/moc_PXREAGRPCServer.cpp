/****************************************************************************
** Meta object code from reading C++ file 'PXREAGRPCServer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../PXREAGRPCServer/PXREAGRPCServer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PXREAGRPCServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS = QtMocHelpers::stringData(
    "PXREAServerAPI",
    "sdkClientAdded",
    "",
    "pid",
    "sdkClientRemoved",
    "replyDeviceFind",
    "devid",
    "replyDeviceMissing",
    "replyDeviceMessage",
    "type",
    "msgbody",
    "init",
    "devMng",
    "login",
    "runAsService",
    "deinit",
    "startService",
    "stopService",
    "getThisPoint"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[15];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[6];
    char stringdata7[19];
    char stringdata8[19];
    char stringdata9[5];
    char stringdata10[8];
    char stringdata11[5];
    char stringdata12[7];
    char stringdata13[6];
    char stringdata14[13];
    char stringdata15[7];
    char stringdata16[13];
    char stringdata17[12];
    char stringdata18[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS_t qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "PXREAServerAPI"
        QT_MOC_LITERAL(15, 14),  // "sdkClientAdded"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 3),  // "pid"
        QT_MOC_LITERAL(35, 16),  // "sdkClientRemoved"
        QT_MOC_LITERAL(52, 15),  // "replyDeviceFind"
        QT_MOC_LITERAL(68, 5),  // "devid"
        QT_MOC_LITERAL(74, 18),  // "replyDeviceMissing"
        QT_MOC_LITERAL(93, 18),  // "replyDeviceMessage"
        QT_MOC_LITERAL(112, 4),  // "type"
        QT_MOC_LITERAL(117, 7),  // "msgbody"
        QT_MOC_LITERAL(125, 4),  // "init"
        QT_MOC_LITERAL(130, 6),  // "devMng"
        QT_MOC_LITERAL(137, 5),  // "login"
        QT_MOC_LITERAL(143, 12),  // "runAsService"
        QT_MOC_LITERAL(156, 6),  // "deinit"
        QT_MOC_LITERAL(163, 12),  // "startService"
        QT_MOC_LITERAL(176, 11),  // "stopService"
        QT_MOC_LITERAL(188, 12)   // "getThisPoint"
    },
    "PXREAServerAPI",
    "sdkClientAdded",
    "",
    "pid",
    "sdkClientRemoved",
    "replyDeviceFind",
    "devid",
    "replyDeviceMissing",
    "replyDeviceMessage",
    "type",
    "msgbody",
    "init",
    "devMng",
    "login",
    "runAsService",
    "deinit",
    "startService",
    "stopService",
    "getThisPoint"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPXREAServerAPIENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,
       5,    1,   80,    2, 0x06,    5 /* Public */,
       7,    1,   83,    2, 0x06,    7 /* Public */,
       8,    3,   86,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    3,   93,    2, 0x0a,   13 /* Public */,
      15,    0,  100,    2, 0x0a,   17 /* Public */,
      16,    0,  101,    2, 0x0a,   18 /* Public */,
      17,    0,  102,    2, 0x0a,   19 /* Public */,
      18,    0,  103,    2, 0x0a,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    6,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::ULongLong,

       0        // eod
};

Q_CONSTINIT const QMetaObject PXREAServerAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPXREAServerAPIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PXREAServerAPI, std::true_type>,
        // method 'sdkClientAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sdkClientRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'replyDeviceFind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'replyDeviceMissing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'replyDeviceMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deinit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startService'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopService'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getThisPoint'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void PXREAServerAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PXREAServerAPI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sdkClientAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sdkClientRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->replyDeviceFind((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->replyDeviceMissing((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->replyDeviceMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        case 5: _t->init((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 6: _t->deinit(); break;
        case 7: _t->startService(); break;
        case 8: _t->stopService(); break;
        case 9: { quint64 _r = _t->getThisPoint();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PXREAServerAPI::*)(int );
            if (_t _q_method = &PXREAServerAPI::sdkClientAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PXREAServerAPI::*)(int );
            if (_t _q_method = &PXREAServerAPI::sdkClientRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PXREAServerAPI::*)(QString );
            if (_t _q_method = &PXREAServerAPI::replyDeviceFind; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PXREAServerAPI::*)(QString );
            if (_t _q_method = &PXREAServerAPI::replyDeviceMissing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PXREAServerAPI::*)(QString , int , QByteArray );
            if (_t _q_method = &PXREAServerAPI::replyDeviceMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *PXREAServerAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PXREAServerAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPXREAServerAPIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PXREAService::EAService::Service"))
        return static_cast< PXREAService::EAService::Service*>(this);
    return QObject::qt_metacast(_clname);
}

int PXREAServerAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PXREAServerAPI::sdkClientAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PXREAServerAPI::sdkClientRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PXREAServerAPI::replyDeviceFind(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PXREAServerAPI::replyDeviceMissing(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PXREAServerAPI::replyDeviceMessage(QString _t1, int _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
