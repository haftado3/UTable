/****************************************************************************
** Meta object code from reading C++ file 'rangefilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UTable/SortFilterProxyModel-master/filters/rangefilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rangefilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qqsfpm__RangeFilter_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qqsfpm__RangeFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qqsfpm__RangeFilter_t qt_meta_stringdata_qqsfpm__RangeFilter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qqsfpm::RangeFilter"
QT_MOC_LITERAL(1, 20, 19), // "minimumValueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "minimumInclusiveChanged"
QT_MOC_LITERAL(4, 65, 19), // "maximumValueChanged"
QT_MOC_LITERAL(5, 85, 23), // "maximumInclusiveChanged"
QT_MOC_LITERAL(6, 109, 12), // "minimumValue"
QT_MOC_LITERAL(7, 122, 16), // "minimumInclusive"
QT_MOC_LITERAL(8, 139, 12), // "maximumValue"
QT_MOC_LITERAL(9, 152, 16) // "maximumInclusive"

    },
    "qqsfpm::RangeFilter\0minimumValueChanged\0"
    "\0minimumInclusiveChanged\0maximumValueChanged\0"
    "maximumInclusiveChanged\0minimumValue\0"
    "minimumInclusive\0maximumValue\0"
    "maximumInclusive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qqsfpm__RangeFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QVariant, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::QVariant, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void qqsfpm::RangeFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RangeFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimumValueChanged(); break;
        case 1: _t->minimumInclusiveChanged(); break;
        case 2: _t->maximumValueChanged(); break;
        case 3: _t->maximumInclusiveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RangeFilter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeFilter::minimumValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RangeFilter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeFilter::minimumInclusiveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RangeFilter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeFilter::maximumValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RangeFilter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeFilter::maximumInclusiveChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RangeFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->minimumValue(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->minimumInclusive(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->maximumValue(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->maximumInclusive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RangeFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setMinimumInclusive(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMaximumValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setMaximumInclusive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qqsfpm::RangeFilter::staticMetaObject = { {
    &RoleFilter::staticMetaObject,
    qt_meta_stringdata_qqsfpm__RangeFilter.data,
    qt_meta_data_qqsfpm__RangeFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qqsfpm::RangeFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qqsfpm::RangeFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qqsfpm__RangeFilter.stringdata0))
        return static_cast<void*>(this);
    return RoleFilter::qt_metacast(_clname);
}

int qqsfpm::RangeFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RoleFilter::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qqsfpm::RangeFilter::minimumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qqsfpm::RangeFilter::minimumInclusiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qqsfpm::RangeFilter::maximumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qqsfpm::RangeFilter::maximumInclusiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
