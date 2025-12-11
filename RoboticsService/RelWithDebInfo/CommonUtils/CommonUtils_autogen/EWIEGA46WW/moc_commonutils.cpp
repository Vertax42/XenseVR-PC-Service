/****************************************************************************
** Meta object code from reading C++ file 'commonutils.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CommonUtils/commonutils.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commonutils.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCommonUtilsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCommonUtilsENDCLASS = QtMocHelpers::stringData(
    "CommonUtils",
    "getThisPoint",
    "",
    "installLogHandler",
    "getLocalIPv4Address",
    "getLocalIPv4AddressList",
    "isOnline"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCommonUtilsENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[20];
    char stringdata5[24];
    char stringdata6[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCommonUtilsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCommonUtilsENDCLASS_t qt_meta_stringdata_CLASSCommonUtilsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "CommonUtils"
        QT_MOC_LITERAL(12, 12),  // "getThisPoint"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 17),  // "installLogHandler"
        QT_MOC_LITERAL(44, 19),  // "getLocalIPv4Address"
        QT_MOC_LITERAL(64, 23),  // "getLocalIPv4AddressList"
        QT_MOC_LITERAL(88, 8)   // "isOnline"
    },
    "CommonUtils",
    "getThisPoint",
    "",
    "installLogHandler",
    "getLocalIPv4Address",
    "getLocalIPv4AddressList",
    "isOnline"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCommonUtilsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject CommonUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCommonUtilsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCommonUtilsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCommonUtilsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CommonUtils, std::true_type>,
        // method 'getThisPoint'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'installLogHandler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getLocalIPv4Address'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getLocalIPv4AddressList'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'isOnline'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void CommonUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommonUtils *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint64 _r = _t->getThisPoint();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->installLogHandler(); break;
        case 2: { QString _r = _t->getLocalIPv4Address();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->getLocalIPv4AddressList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isOnline();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *CommonUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommonUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCommonUtilsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CommonUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
