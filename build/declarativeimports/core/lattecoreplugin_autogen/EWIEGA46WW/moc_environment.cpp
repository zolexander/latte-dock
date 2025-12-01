/****************************************************************************
** Meta object code from reading C++ file 'environment.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../declarativeimports/core/environment.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'environment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN5Latte11EnvironmentE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Environment::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte11EnvironmentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Environment",
        "frameworksVersionChanged",
        "",
        "longDurationChanged",
        "shortDurationChanged",
        "makeVersion",
        "major",
        "minor",
        "release",
        "separatorLength",
        "shortDuration",
        "longDuration",
        "frameworksVersion"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'frameworksVersionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'longDurationChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shortDurationChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'makeVersion'
        QtMocHelpers::SlotData<uint(uint, uint, uint) const>(5, 2, QMC::AccessPublic, QMetaType::UInt, {{
            { QMetaType::UInt, 6 }, { QMetaType::UInt, 7 }, { QMetaType::UInt, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'separatorLength'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'shortDuration'
        QtMocHelpers::PropertyData<uint>(10, QMetaType::UInt, QMC::DefaultPropertyFlags, 2),
        // property 'longDuration'
        QtMocHelpers::PropertyData<uint>(11, QMetaType::UInt, QMC::DefaultPropertyFlags, 1),
        // property 'frameworksVersion'
        QtMocHelpers::PropertyData<uint>(12, QMetaType::UInt, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Environment, qt_meta_tag_ZN5Latte11EnvironmentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Environment::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11EnvironmentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11EnvironmentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte11EnvironmentE_t>.metaTypes,
    nullptr
} };

void Latte::Environment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Environment *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->frameworksVersionChanged(); break;
        case 1: _t->longDurationChanged(); break;
        case 2: _t->shortDurationChanged(); break;
        case 3: { uint _r = _t->makeVersion((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Environment::*)()>(_a, &Environment::frameworksVersionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Environment::*)()>(_a, &Environment::longDurationChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Environment::*)()>(_a, &Environment::shortDurationChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->separatorLength(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->shortDuration(); break;
        case 2: *reinterpret_cast<uint*>(_v) = _t->longDuration(); break;
        case 3: *reinterpret_cast<uint*>(_v) = _t->frameworksVersion(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Environment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Environment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11EnvironmentE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Environment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Latte::Environment::frameworksVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Environment::longDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Environment::shortDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
