/****************************************************************************
** Meta object code from reading C++ file 'tcpserverworker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../DeviceConnectionManager/Manage/TCPConnectionManage/tcpserverworker.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserverworker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS = QtMocHelpers::stringData(
    "DevConnSDK::TcpServerWorker",
    "onCheckConnection",
    "",
    "onBraodCastTCPServer",
    "onNewTcpConnection",
    "onSendUserMessage",
    "uid",
    "data",
    "onSendRoomMessage",
    "onNewTcpDeviceConfirmed",
    "sn",
    "tempIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[28];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[4];
    char stringdata7[5];
    char stringdata8[18];
    char stringdata9[24];
    char stringdata10[3];
    char stringdata11[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS_t qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "DevConnSDK::TcpServerWorker"
        QT_MOC_LITERAL(28, 17),  // "onCheckConnection"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 20),  // "onBraodCastTCPServer"
        QT_MOC_LITERAL(68, 18),  // "onNewTcpConnection"
        QT_MOC_LITERAL(87, 17),  // "onSendUserMessage"
        QT_MOC_LITERAL(105, 3),  // "uid"
        QT_MOC_LITERAL(109, 4),  // "data"
        QT_MOC_LITERAL(114, 17),  // "onSendRoomMessage"
        QT_MOC_LITERAL(132, 23),  // "onNewTcpDeviceConfirmed"
        QT_MOC_LITERAL(156, 2),  // "sn"
        QT_MOC_LITERAL(159, 9)   // "tempIndex"
    },
    "DevConnSDK::TcpServerWorker",
    "onCheckConnection",
    "",
    "onBraodCastTCPServer",
    "onNewTcpConnection",
    "onSendUserMessage",
    "uid",
    "data",
    "onSendRoomMessage",
    "onNewTcpDeviceConfirmed",
    "sn",
    "tempIndex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    2,   53,    2, 0x0a,    4 /* Public */,
       8,    2,   58,    2, 0x0a,    7 /* Public */,
       9,    2,   63,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject DevConnSDK::TcpServerWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TcpServerWorker, std::true_type>,
        // method 'onCheckConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBraodCastTCPServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewTcpConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSendUserMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'onSendRoomMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'onNewTcpDeviceConfirmed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void DevConnSDK::TcpServerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpServerWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCheckConnection(); break;
        case 1: _t->onBraodCastTCPServer(); break;
        case 2: _t->onNewTcpConnection(); break;
        case 3: _t->onSendUserMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 4: _t->onSendRoomMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 5: _t->onNewTcpDeviceConfirmed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *DevConnSDK::TcpServerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevConnSDK::TcpServerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDevConnSDKSCOPETcpServerWorkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DevConnSDK::TcpServerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
