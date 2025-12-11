/****************************************************************************
** Meta object code from reading C++ file 'tcpconnectionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../DeviceConnectionManager/Model/tcpconnectionmodel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpconnectionmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS = QtMocHelpers::stringData(
    "DevConnSDK::TCPConnectionModel",
    "clientCmdSignal",
    "",
    "sn",
    "TcpMessage",
    "msg",
    "offlineSignal",
    "snSettedSignal",
    "tempIndex",
    "onReadClientMessage",
    "dealClientPack",
    "onClientMsg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[31];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[11];
    char stringdata5[4];
    char stringdata6[14];
    char stringdata7[15];
    char stringdata8[10];
    char stringdata9[20];
    char stringdata10[15];
    char stringdata11[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS_t qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "DevConnSDK::TCPConnectionModel"
        QT_MOC_LITERAL(31, 15),  // "clientCmdSignal"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 2),  // "sn"
        QT_MOC_LITERAL(51, 10),  // "TcpMessage"
        QT_MOC_LITERAL(62, 3),  // "msg"
        QT_MOC_LITERAL(66, 13),  // "offlineSignal"
        QT_MOC_LITERAL(80, 14),  // "snSettedSignal"
        QT_MOC_LITERAL(95, 9),  // "tempIndex"
        QT_MOC_LITERAL(105, 19),  // "onReadClientMessage"
        QT_MOC_LITERAL(125, 14),  // "dealClientPack"
        QT_MOC_LITERAL(140, 11)   // "onClientMsg"
    },
    "DevConnSDK::TCPConnectionModel",
    "clientCmdSignal",
    "",
    "sn",
    "TcpMessage",
    "msg",
    "offlineSignal",
    "snSettedSignal",
    "tempIndex",
    "onReadClientMessage",
    "dealClientPack",
    "onClientMsg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       6,    1,   55,    2, 0x06,    4 /* Public */,
       7,    2,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   63,    2, 0x0a,    9 /* Public */,
      10,    1,   64,    2, 0x0a,   10 /* Public */,
      11,    1,   67,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject DevConnSDK::TCPConnectionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<DevConnSDK::ConnectionModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TCPConnectionModel, std::true_type>,
        // method 'clientCmdSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'offlineSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'snSettedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onReadClientMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dealClientPack'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'onClientMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>
    >,
    nullptr
} };

void DevConnSDK::TCPConnectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCPConnectionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clientCmdSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[2]))); break;
        case 1: _t->offlineSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->snSettedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->onReadClientMessage(); break;
        case 4: { int _r = _t->dealClientPack((*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->onClientMsg((*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCPConnectionModel::*)(const QString , const TcpMessage & );
            if (_t _q_method = &TCPConnectionModel::clientCmdSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TCPConnectionModel::*)(const QString & );
            if (_t _q_method = &TCPConnectionModel::offlineSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TCPConnectionModel::*)(const QString & , const QString & );
            if (_t _q_method = &TCPConnectionModel::snSettedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *DevConnSDK::TCPConnectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevConnSDK::TCPConnectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDevConnSDKSCOPETCPConnectionModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DevConnSDK::ConnectionModel::qt_metacast(_clname);
}

int DevConnSDK::TCPConnectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DevConnSDK::ConnectionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DevConnSDK::TCPConnectionModel::clientCmdSignal(const QString _t1, const TcpMessage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DevConnSDK::TCPConnectionModel::offlineSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DevConnSDK::TCPConnectionModel::snSettedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
