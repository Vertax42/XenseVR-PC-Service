/****************************************************************************
** Meta object code from reading C++ file 'FeedbackController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../PXREAGRPCServer/FeedbackController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeedbackController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFeedbackControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFeedbackControllerENDCLASS = QtMocHelpers::stringData(
    "FeedbackController",
    "startFrameCapture",
    "",
    "width",
    "height",
    "fps",
    "stopFrameCapture",
    "replyDeviceFind",
    "devid",
    "replyDeviceMissing",
    "replyDeviceMessage",
    "type",
    "msgbody",
    "replyFirstMonitorScreenFrame",
    "replyMonitorScreenFrame",
    "rtcFrame",
    "bytesPerLine",
    "pixFormat",
    "replyFirstMonitorStreamFrame",
    "replyMonitorStreamFrame",
    "createScreenMonitorSharedMemory",
    "uid",
    "destroyScreenMonitorSharedMemory",
    "createStreamMonitorSharedMemory",
    "destroyStreamMonitorSharedMemory",
    "onReplyDeviceMessage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFeedbackControllerENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[7];
    char stringdata5[4];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[6];
    char stringdata9[19];
    char stringdata10[19];
    char stringdata11[5];
    char stringdata12[8];
    char stringdata13[29];
    char stringdata14[24];
    char stringdata15[9];
    char stringdata16[13];
    char stringdata17[10];
    char stringdata18[29];
    char stringdata19[24];
    char stringdata20[32];
    char stringdata21[4];
    char stringdata22[33];
    char stringdata23[32];
    char stringdata24[33];
    char stringdata25[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFeedbackControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFeedbackControllerENDCLASS_t qt_meta_stringdata_CLASSFeedbackControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "FeedbackController"
        QT_MOC_LITERAL(19, 17),  // "startFrameCapture"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "width"
        QT_MOC_LITERAL(44, 6),  // "height"
        QT_MOC_LITERAL(51, 3),  // "fps"
        QT_MOC_LITERAL(55, 16),  // "stopFrameCapture"
        QT_MOC_LITERAL(72, 15),  // "replyDeviceFind"
        QT_MOC_LITERAL(88, 5),  // "devid"
        QT_MOC_LITERAL(94, 18),  // "replyDeviceMissing"
        QT_MOC_LITERAL(113, 18),  // "replyDeviceMessage"
        QT_MOC_LITERAL(132, 4),  // "type"
        QT_MOC_LITERAL(137, 7),  // "msgbody"
        QT_MOC_LITERAL(145, 28),  // "replyFirstMonitorScreenFrame"
        QT_MOC_LITERAL(174, 23),  // "replyMonitorScreenFrame"
        QT_MOC_LITERAL(198, 8),  // "rtcFrame"
        QT_MOC_LITERAL(207, 12),  // "bytesPerLine"
        QT_MOC_LITERAL(220, 9),  // "pixFormat"
        QT_MOC_LITERAL(230, 28),  // "replyFirstMonitorStreamFrame"
        QT_MOC_LITERAL(259, 23),  // "replyMonitorStreamFrame"
        QT_MOC_LITERAL(283, 31),  // "createScreenMonitorSharedMemory"
        QT_MOC_LITERAL(315, 3),  // "uid"
        QT_MOC_LITERAL(319, 32),  // "destroyScreenMonitorSharedMemory"
        QT_MOC_LITERAL(352, 31),  // "createStreamMonitorSharedMemory"
        QT_MOC_LITERAL(384, 32),  // "destroyStreamMonitorSharedMemory"
        QT_MOC_LITERAL(417, 20)   // "onReplyDeviceMessage"
    },
    "FeedbackController",
    "startFrameCapture",
    "",
    "width",
    "height",
    "fps",
    "stopFrameCapture",
    "replyDeviceFind",
    "devid",
    "replyDeviceMissing",
    "replyDeviceMessage",
    "type",
    "msgbody",
    "replyFirstMonitorScreenFrame",
    "replyMonitorScreenFrame",
    "rtcFrame",
    "bytesPerLine",
    "pixFormat",
    "replyFirstMonitorStreamFrame",
    "replyMonitorStreamFrame",
    "createScreenMonitorSharedMemory",
    "uid",
    "destroyScreenMonitorSharedMemory",
    "createStreamMonitorSharedMemory",
    "destroyStreamMonitorSharedMemory",
    "onReplyDeviceMessage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFeedbackControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   98,    2, 0x06,    1 /* Public */,
       6,    0,  105,    2, 0x06,    5 /* Public */,
       7,    1,  106,    2, 0x06,    6 /* Public */,
       9,    1,  109,    2, 0x06,    8 /* Public */,
      10,    3,  112,    2, 0x06,   10 /* Public */,
      13,    3,  119,    2, 0x06,   14 /* Public */,
      14,    6,  126,    2, 0x06,   18 /* Public */,
      18,    3,  139,    2, 0x06,   25 /* Public */,
      19,    6,  146,    2, 0x06,   29 /* Public */,
      20,    1,  159,    2, 0x06,   36 /* Public */,
      22,    1,  162,    2, 0x06,   38 /* Public */,
      23,    1,  165,    2, 0x06,   40 /* Public */,
      24,    1,  168,    2, 0x06,   42 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      25,    3,  171,    2, 0x0a,   44 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    8,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,   15,    3,    4,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,   15,    3,    4,   16,   17,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    8,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject FeedbackController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFeedbackControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFeedbackControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFeedbackControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FeedbackController, std::true_type>,
        // method 'startFrameCapture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'stopFrameCapture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'createScreenMonitorSharedMemory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'destroyScreenMonitorSharedMemory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createStreamMonitorSharedMemory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'destroyStreamMonitorSharedMemory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onReplyDeviceMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void FeedbackController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FeedbackController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startFrameCapture((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 1: _t->stopFrameCapture(); break;
        case 2: _t->replyDeviceFind((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->replyDeviceMissing((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->replyDeviceMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        case 5: _t->replyFirstMonitorScreenFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->replyMonitorScreenFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 7: _t->replyFirstMonitorStreamFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->replyMonitorStreamFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 9: _t->createScreenMonitorSharedMemory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->destroyScreenMonitorSharedMemory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->createStreamMonitorSharedMemory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->destroyStreamMonitorSharedMemory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->onReplyDeviceMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FeedbackController::*)(unsigned  , unsigned  , unsigned  );
            if (_t _q_method = &FeedbackController::startFrameCapture; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)();
            if (_t _q_method = &FeedbackController::stopFrameCapture; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::replyDeviceFind; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::replyDeviceMissing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString , int , QByteArray );
            if (_t _q_method = &FeedbackController::replyDeviceMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString , int , int );
            if (_t _q_method = &FeedbackController::replyFirstMonitorScreenFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString , QByteArray , int , int , int , int );
            if (_t _q_method = &FeedbackController::replyMonitorScreenFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString , int , int );
            if (_t _q_method = &FeedbackController::replyFirstMonitorStreamFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString , QByteArray , int , int , int , int );
            if (_t _q_method = &FeedbackController::replyMonitorStreamFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::createScreenMonitorSharedMemory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::destroyScreenMonitorSharedMemory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::createStreamMonitorSharedMemory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FeedbackController::*)(QString );
            if (_t _q_method = &FeedbackController::destroyStreamMonitorSharedMemory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject *FeedbackController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FeedbackController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFeedbackControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FeedbackController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void FeedbackController::startFrameCapture(unsigned  _t1, unsigned  _t2, unsigned  _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FeedbackController::stopFrameCapture()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FeedbackController::replyDeviceFind(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FeedbackController::replyDeviceMissing(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FeedbackController::replyDeviceMessage(QString _t1, int _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FeedbackController::replyFirstMonitorScreenFrame(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FeedbackController::replyMonitorScreenFrame(QString _t1, QByteArray _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FeedbackController::replyFirstMonitorStreamFrame(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FeedbackController::replyMonitorStreamFrame(QString _t1, QByteArray _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FeedbackController::createScreenMonitorSharedMemory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FeedbackController::destroyScreenMonitorSharedMemory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FeedbackController::createStreamMonitorSharedMemory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FeedbackController::destroyStreamMonitorSharedMemory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
