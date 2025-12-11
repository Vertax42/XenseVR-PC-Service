/****************************************************************************
** Meta object code from reading C++ file 'devicemanagement.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Business/DeviceManage/devicemanagement.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicemanagement.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDeviceManagementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDeviceManagementENDCLASS = QtMocHelpers::stringData(
    "DeviceManagement",
    "newDeviceConnectSignal",
    "",
    "DeviceModel&",
    "rtcUidRepeatSignal",
    "uid",
    "pcJoinRoomSignal",
    "newUserJoinedSiganl",
    "openVRShareTexFailed",
    "rtcDisconnectedSignal",
    "deviceLeaveRoomSignal",
    "sn",
    "connectStatusSignal",
    "flag",
    "roomStatusSignal",
    "serverIP",
    "updateConnectedDeviceListSignal",
    "QList<DeviceModel>",
    "array",
    "updateAddedDeviceList",
    "updateAddedDeviceSignal",
    "jsonStr",
    "updateDeviceGroupSignal",
    "setServerUidReponseSignal",
    "lockIP",
    "newDeviceAdded",
    "removeAddDevcieSignal",
    "filterGroupChanged",
    "str",
    "deliverMsgToBroadCastSignal",
    "TcpMessage",
    "tcpMessage",
    "deliverMsgToVideoLiveSignal",
    "businessIDConfirmResultSignal",
    "result",
    "setUidSignal",
    "replyExistDevice",
    "devid",
    "recvDeviceMessageSignal",
    "type",
    "msgbody",
    "replyFirstMonitorScreenFrame",
    "width",
    "height",
    "replyMonitorScreenFrame",
    "rtcFrame",
    "bytesPerLine",
    "pixFormat",
    "replyFirstMonitorStreamFrame",
    "replyMonitorStreamFrame",
    "getThisPoint",
    "init",
    "initTcp",
    "sendMsg",
    "data",
    "msg",
    "sendRoomMsg",
    "onNewDeviceMessageSDK",
    "size",
    "dataArray",
    "onNewRtcConnection",
    "onRtcDeviceOffLine",
    "sendDeviceControlJson",
    "parameterJson",
    "sendBytesToDevice",
    "sendBytesToRoom"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceManagementENDCLASS_t {
    uint offsetsAndSizes[132];
    char stringdata0[17];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[19];
    char stringdata5[4];
    char stringdata6[17];
    char stringdata7[20];
    char stringdata8[21];
    char stringdata9[22];
    char stringdata10[22];
    char stringdata11[3];
    char stringdata12[20];
    char stringdata13[5];
    char stringdata14[17];
    char stringdata15[9];
    char stringdata16[32];
    char stringdata17[19];
    char stringdata18[6];
    char stringdata19[22];
    char stringdata20[24];
    char stringdata21[8];
    char stringdata22[24];
    char stringdata23[26];
    char stringdata24[7];
    char stringdata25[15];
    char stringdata26[22];
    char stringdata27[19];
    char stringdata28[4];
    char stringdata29[28];
    char stringdata30[11];
    char stringdata31[11];
    char stringdata32[28];
    char stringdata33[30];
    char stringdata34[7];
    char stringdata35[13];
    char stringdata36[17];
    char stringdata37[6];
    char stringdata38[24];
    char stringdata39[5];
    char stringdata40[8];
    char stringdata41[29];
    char stringdata42[6];
    char stringdata43[7];
    char stringdata44[24];
    char stringdata45[9];
    char stringdata46[13];
    char stringdata47[10];
    char stringdata48[29];
    char stringdata49[24];
    char stringdata50[13];
    char stringdata51[5];
    char stringdata52[8];
    char stringdata53[8];
    char stringdata54[5];
    char stringdata55[4];
    char stringdata56[12];
    char stringdata57[22];
    char stringdata58[5];
    char stringdata59[10];
    char stringdata60[19];
    char stringdata61[19];
    char stringdata62[22];
    char stringdata63[14];
    char stringdata64[18];
    char stringdata65[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceManagementENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceManagementENDCLASS_t qt_meta_stringdata_CLASSDeviceManagementENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "DeviceManagement"
        QT_MOC_LITERAL(17, 22),  // "newDeviceConnectSignal"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 12),  // "DeviceModel&"
        QT_MOC_LITERAL(54, 18),  // "rtcUidRepeatSignal"
        QT_MOC_LITERAL(73, 3),  // "uid"
        QT_MOC_LITERAL(77, 16),  // "pcJoinRoomSignal"
        QT_MOC_LITERAL(94, 19),  // "newUserJoinedSiganl"
        QT_MOC_LITERAL(114, 20),  // "openVRShareTexFailed"
        QT_MOC_LITERAL(135, 21),  // "rtcDisconnectedSignal"
        QT_MOC_LITERAL(157, 21),  // "deviceLeaveRoomSignal"
        QT_MOC_LITERAL(179, 2),  // "sn"
        QT_MOC_LITERAL(182, 19),  // "connectStatusSignal"
        QT_MOC_LITERAL(202, 4),  // "flag"
        QT_MOC_LITERAL(207, 16),  // "roomStatusSignal"
        QT_MOC_LITERAL(224, 8),  // "serverIP"
        QT_MOC_LITERAL(233, 31),  // "updateConnectedDeviceListSignal"
        QT_MOC_LITERAL(265, 18),  // "QList<DeviceModel>"
        QT_MOC_LITERAL(284, 5),  // "array"
        QT_MOC_LITERAL(290, 21),  // "updateAddedDeviceList"
        QT_MOC_LITERAL(312, 23),  // "updateAddedDeviceSignal"
        QT_MOC_LITERAL(336, 7),  // "jsonStr"
        QT_MOC_LITERAL(344, 23),  // "updateDeviceGroupSignal"
        QT_MOC_LITERAL(368, 25),  // "setServerUidReponseSignal"
        QT_MOC_LITERAL(394, 6),  // "lockIP"
        QT_MOC_LITERAL(401, 14),  // "newDeviceAdded"
        QT_MOC_LITERAL(416, 21),  // "removeAddDevcieSignal"
        QT_MOC_LITERAL(438, 18),  // "filterGroupChanged"
        QT_MOC_LITERAL(457, 3),  // "str"
        QT_MOC_LITERAL(461, 27),  // "deliverMsgToBroadCastSignal"
        QT_MOC_LITERAL(489, 10),  // "TcpMessage"
        QT_MOC_LITERAL(500, 10),  // "tcpMessage"
        QT_MOC_LITERAL(511, 27),  // "deliverMsgToVideoLiveSignal"
        QT_MOC_LITERAL(539, 29),  // "businessIDConfirmResultSignal"
        QT_MOC_LITERAL(569, 6),  // "result"
        QT_MOC_LITERAL(576, 12),  // "setUidSignal"
        QT_MOC_LITERAL(589, 16),  // "replyExistDevice"
        QT_MOC_LITERAL(606, 5),  // "devid"
        QT_MOC_LITERAL(612, 23),  // "recvDeviceMessageSignal"
        QT_MOC_LITERAL(636, 4),  // "type"
        QT_MOC_LITERAL(641, 7),  // "msgbody"
        QT_MOC_LITERAL(649, 28),  // "replyFirstMonitorScreenFrame"
        QT_MOC_LITERAL(678, 5),  // "width"
        QT_MOC_LITERAL(684, 6),  // "height"
        QT_MOC_LITERAL(691, 23),  // "replyMonitorScreenFrame"
        QT_MOC_LITERAL(715, 8),  // "rtcFrame"
        QT_MOC_LITERAL(724, 12),  // "bytesPerLine"
        QT_MOC_LITERAL(737, 9),  // "pixFormat"
        QT_MOC_LITERAL(747, 28),  // "replyFirstMonitorStreamFrame"
        QT_MOC_LITERAL(776, 23),  // "replyMonitorStreamFrame"
        QT_MOC_LITERAL(800, 12),  // "getThisPoint"
        QT_MOC_LITERAL(813, 4),  // "init"
        QT_MOC_LITERAL(818, 7),  // "initTcp"
        QT_MOC_LITERAL(826, 7),  // "sendMsg"
        QT_MOC_LITERAL(834, 4),  // "data"
        QT_MOC_LITERAL(839, 3),  // "msg"
        QT_MOC_LITERAL(843, 11),  // "sendRoomMsg"
        QT_MOC_LITERAL(855, 21),  // "onNewDeviceMessageSDK"
        QT_MOC_LITERAL(877, 4),  // "size"
        QT_MOC_LITERAL(882, 9),  // "dataArray"
        QT_MOC_LITERAL(892, 18),  // "onNewRtcConnection"
        QT_MOC_LITERAL(911, 18),  // "onRtcDeviceOffLine"
        QT_MOC_LITERAL(930, 21),  // "sendDeviceControlJson"
        QT_MOC_LITERAL(952, 13),  // "parameterJson"
        QT_MOC_LITERAL(966, 17),  // "sendBytesToDevice"
        QT_MOC_LITERAL(984, 15)   // "sendBytesToRoom"
    },
    "DeviceManagement",
    "newDeviceConnectSignal",
    "",
    "DeviceModel&",
    "rtcUidRepeatSignal",
    "uid",
    "pcJoinRoomSignal",
    "newUserJoinedSiganl",
    "openVRShareTexFailed",
    "rtcDisconnectedSignal",
    "deviceLeaveRoomSignal",
    "sn",
    "connectStatusSignal",
    "flag",
    "roomStatusSignal",
    "serverIP",
    "updateConnectedDeviceListSignal",
    "QList<DeviceModel>",
    "array",
    "updateAddedDeviceList",
    "updateAddedDeviceSignal",
    "jsonStr",
    "updateDeviceGroupSignal",
    "setServerUidReponseSignal",
    "lockIP",
    "newDeviceAdded",
    "removeAddDevcieSignal",
    "filterGroupChanged",
    "str",
    "deliverMsgToBroadCastSignal",
    "TcpMessage",
    "tcpMessage",
    "deliverMsgToVideoLiveSignal",
    "businessIDConfirmResultSignal",
    "result",
    "setUidSignal",
    "replyExistDevice",
    "devid",
    "recvDeviceMessageSignal",
    "type",
    "msgbody",
    "replyFirstMonitorScreenFrame",
    "width",
    "height",
    "replyMonitorScreenFrame",
    "rtcFrame",
    "bytesPerLine",
    "pixFormat",
    "replyFirstMonitorStreamFrame",
    "replyMonitorStreamFrame",
    "getThisPoint",
    "init",
    "initTcp",
    "sendMsg",
    "data",
    "msg",
    "sendRoomMsg",
    "onNewDeviceMessageSDK",
    "size",
    "dataArray",
    "onNewRtcConnection",
    "onRtcDeviceOffLine",
    "sendDeviceControlJson",
    "parameterJson",
    "sendBytesToDevice",
    "sendBytesToRoom"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceManagementENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  248,    2, 0x06,    1 /* Public */,
       4,    1,  251,    2, 0x06,    3 /* Public */,
       6,    1,  254,    2, 0x06,    5 /* Public */,
       7,    1,  257,    2, 0x06,    7 /* Public */,
       8,    0,  260,    2, 0x06,    9 /* Public */,
       9,    0,  261,    2, 0x06,   10 /* Public */,
      10,    1,  262,    2, 0x06,   11 /* Public */,
      12,    1,  265,    2, 0x06,   13 /* Public */,
      14,    2,  268,    2, 0x06,   15 /* Public */,
      16,    1,  273,    2, 0x06,   18 /* Public */,
      19,    1,  276,    2, 0x06,   20 /* Public */,
      20,    1,  279,    2, 0x06,   22 /* Public */,
      22,    1,  282,    2, 0x06,   24 /* Public */,
      23,    3,  285,    2, 0x06,   26 /* Public */,
      25,    1,  292,    2, 0x06,   30 /* Public */,
      26,    1,  295,    2, 0x06,   32 /* Public */,
      27,    1,  298,    2, 0x06,   34 /* Public */,
      29,    2,  301,    2, 0x06,   36 /* Public */,
      32,    2,  306,    2, 0x06,   39 /* Public */,
      33,    1,  311,    2, 0x06,   42 /* Public */,
      35,    1,  314,    2, 0x06,   44 /* Public */,
      36,    1,  317,    2, 0x06,   46 /* Public */,
      38,    3,  320,    2, 0x06,   48 /* Public */,
      41,    3,  327,    2, 0x06,   52 /* Public */,
      44,    6,  334,    2, 0x06,   56 /* Public */,
      48,    3,  347,    2, 0x06,   63 /* Public */,
      49,    6,  354,    2, 0x06,   67 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      50,    0,  367,    2, 0x0a,   74 /* Public */,
      51,    0,  368,    2, 0x0a,   75 /* Public */,
      52,    0,  369,    2, 0x0a,   76 /* Public */,
      53,    2,  370,    2, 0x0a,   77 /* Public */,
      53,    2,  375,    2, 0x0a,   80 /* Public */,
      56,    1,  380,    2, 0x0a,   83 /* Public */,
      57,    3,  383,    2, 0x0a,   85 /* Public */,
      60,    1,  390,    2, 0x0a,   89 /* Public */,
      61,    1,  393,    2, 0x0a,   91 /* Public */,
      62,    2,  396,    2, 0x0a,   93 /* Public */,
      64,    2,  401,    2, 0x0a,   96 /* Public */,
      65,    1,  406,    2, 0x0a,   99 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   11,   13,   24,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,    5,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,    5,   31,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,   37,   39,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   37,   42,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   37,   45,   42,   43,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   37,   42,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   37,   45,   42,   43,   46,   47,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   11,   54,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   11,   55,
    QMetaType::Void, 0x80000000 | 30,   55,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    5,   58,   59,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   63,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   11,   54,
    QMetaType::Void, QMetaType::QByteArray,   54,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceManagement::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceManagementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceManagementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDeviceManagementENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceManagement, std::true_type>,
        // method 'newDeviceConnectSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DeviceModel &, std::false_type>,
        // method 'rtcUidRepeatSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'pcJoinRoomSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'newUserJoinedSiganl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'openVRShareTexFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rtcDisconnectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceLeaveRoomSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'connectStatusSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'roomStatusSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateConnectedDeviceListSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DeviceModel>, std::false_type>,
        // method 'updateAddedDeviceList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DeviceModel>, std::false_type>,
        // method 'updateAddedDeviceSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateDeviceGroupSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setServerUidReponseSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'newDeviceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeAddDevcieSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filterGroupChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deliverMsgToBroadCastSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'deliverMsgToVideoLiveSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'businessIDConfirmResultSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUidSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'replyExistDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'recvDeviceMessageSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'replyFirstMonitorScreenFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'replyMonitorScreenFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'replyFirstMonitorStreamFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'replyMonitorStreamFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getThisPoint'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initTcp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'sendMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'sendRoomMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TcpMessage &, std::false_type>,
        // method 'onNewDeviceMessageSDK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'onNewRtcConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onRtcDeviceOffLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendDeviceControlJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendBytesToDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'sendBytesToRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void DeviceManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManagement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newDeviceConnectSignal((*reinterpret_cast< std::add_pointer_t<DeviceModel&>>(_a[1]))); break;
        case 1: _t->rtcUidRepeatSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->pcJoinRoomSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->newUserJoinedSiganl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->openVRShareTexFailed(); break;
        case 5: _t->rtcDisconnectedSignal(); break;
        case 6: _t->deviceLeaveRoomSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->connectStatusSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->roomStatusSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->updateConnectedDeviceListSignal((*reinterpret_cast< std::add_pointer_t<QList<DeviceModel>>>(_a[1]))); break;
        case 10: _t->updateAddedDeviceList((*reinterpret_cast< std::add_pointer_t<QList<DeviceModel>>>(_a[1]))); break;
        case 11: _t->updateAddedDeviceSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->updateDeviceGroupSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setServerUidReponseSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->newDeviceAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->removeAddDevcieSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->filterGroupChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->deliverMsgToBroadCastSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[2]))); break;
        case 18: _t->deliverMsgToVideoLiveSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[2]))); break;
        case 19: _t->businessIDConfirmResultSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->setUidSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->replyExistDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->recvDeviceMessageSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        case 23: _t->replyFirstMonitorScreenFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 24: _t->replyMonitorScreenFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 25: _t->replyFirstMonitorStreamFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 26: _t->replyMonitorStreamFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 27: { quint64 _r = _t->getThisPoint();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->init(); break;
        case 29: _t->initTcp(); break;
        case 30: _t->sendMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 31: _t->sendMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[2]))); break;
        case 32: _t->sendRoomMsg((*reinterpret_cast< std::add_pointer_t<TcpMessage>>(_a[1]))); break;
        case 33: _t->onNewDeviceMessageSDK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        case 34: _t->onNewRtcConnection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->onRtcDeviceOffLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->sendDeviceControlJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 37: _t->sendBytesToDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 38: _t->sendBytesToRoom((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TcpMessage >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TcpMessage >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TcpMessage >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TcpMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManagement::*)(DeviceModel & );
            if (_t _q_method = &DeviceManagement::newDeviceConnectSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & );
            if (_t _q_method = &DeviceManagement::rtcUidRepeatSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & );
            if (_t _q_method = &DeviceManagement::pcJoinRoomSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::newUserJoinedSiganl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)();
            if (_t _q_method = &DeviceManagement::openVRShareTexFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)();
            if (_t _q_method = &DeviceManagement::rtcDisconnectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::deviceLeaveRoomSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(bool );
            if (_t _q_method = &DeviceManagement::connectStatusSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(bool , QString );
            if (_t _q_method = &DeviceManagement::roomStatusSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QVector<DeviceModel> );
            if (_t _q_method = &DeviceManagement::updateConnectedDeviceListSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QVector<DeviceModel> );
            if (_t _q_method = &DeviceManagement::updateAddedDeviceList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::updateAddedDeviceSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::updateDeviceGroupSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & , bool , const QString & );
            if (_t _q_method = &DeviceManagement::setServerUidReponseSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & );
            if (_t _q_method = &DeviceManagement::newDeviceAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & );
            if (_t _q_method = &DeviceManagement::removeAddDevcieSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & );
            if (_t _q_method = &DeviceManagement::filterGroupChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & , const TcpMessage & );
            if (_t _q_method = &DeviceManagement::deliverMsgToBroadCastSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(const QString & , const TcpMessage & );
            if (_t _q_method = &DeviceManagement::deliverMsgToVideoLiveSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(bool );
            if (_t _q_method = &DeviceManagement::businessIDConfirmResultSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::setUidSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString );
            if (_t _q_method = &DeviceManagement::replyExistDevice; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString , int , QByteArray );
            if (_t _q_method = &DeviceManagement::recvDeviceMessageSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString , int , int );
            if (_t _q_method = &DeviceManagement::replyFirstMonitorScreenFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString , QByteArray , int , int , int , int );
            if (_t _q_method = &DeviceManagement::replyMonitorScreenFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString , int , int );
            if (_t _q_method = &DeviceManagement::replyFirstMonitorStreamFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DeviceManagement::*)(QString , QByteArray , int , int , int , int );
            if (_t _q_method = &DeviceManagement::replyMonitorStreamFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
    }
}

const QMetaObject *DeviceManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceManagementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void DeviceManagement::newDeviceConnectSignal(DeviceModel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManagement::rtcUidRepeatSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceManagement::pcJoinRoomSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceManagement::newUserJoinedSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceManagement::openVRShareTexFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DeviceManagement::rtcDisconnectedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DeviceManagement::deviceLeaveRoomSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceManagement::connectStatusSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeviceManagement::roomStatusSignal(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeviceManagement::updateConnectedDeviceListSignal(QVector<DeviceModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DeviceManagement::updateAddedDeviceList(QVector<DeviceModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DeviceManagement::updateAddedDeviceSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DeviceManagement::updateDeviceGroupSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DeviceManagement::setServerUidReponseSignal(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DeviceManagement::newDeviceAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DeviceManagement::removeAddDevcieSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DeviceManagement::filterGroupChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DeviceManagement::deliverMsgToBroadCastSignal(const QString & _t1, const TcpMessage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DeviceManagement::deliverMsgToVideoLiveSignal(const QString & _t1, const TcpMessage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DeviceManagement::businessIDConfirmResultSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DeviceManagement::setUidSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DeviceManagement::replyExistDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DeviceManagement::recvDeviceMessageSignal(QString _t1, int _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DeviceManagement::replyFirstMonitorScreenFrame(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DeviceManagement::replyMonitorScreenFrame(QString _t1, QByteArray _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DeviceManagement::replyFirstMonitorStreamFrame(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DeviceManagement::replyMonitorStreamFrame(QString _t1, QByteArray _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_WARNING_POP
