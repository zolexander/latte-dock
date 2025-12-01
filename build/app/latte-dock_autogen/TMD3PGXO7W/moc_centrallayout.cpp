/****************************************************************************
** Meta object code from reading C++ file 'centrallayout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layout/centrallayout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centrallayout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte13CentralLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::CentralLayout::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte13CentralLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::CentralLayout",
        "disableBordersForMaximizedWindowsChanged",
        "",
        "schemeChanged",
        "showInMenuChanged",
        "loadConfig",
        "saveConfig",
        "onSchemeFileChanged",
        "isCurrent",
        "scheme",
        "Latte::WindowSystem::SchemeColors*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'disableBordersForMaximizedWindowsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'schemeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showInMenuChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSchemeFileChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'isCurrent'
        QtMocHelpers::MethodData<bool()>(8, 2, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'scheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CentralLayout, qt_meta_tag_ZN5Latte13CentralLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::CentralLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<Layout::GenericLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte13CentralLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte13CentralLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte13CentralLayoutE_t>.metaTypes,
    nullptr
} };

void Latte::CentralLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CentralLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->disableBordersForMaximizedWindowsChanged(); break;
        case 1: _t->schemeChanged(); break;
        case 2: _t->showInMenuChanged(); break;
        case 3: _t->loadConfig(); break;
        case 4: _t->saveConfig(); break;
        case 5: _t->onSchemeFileChanged(); break;
        case 6: { bool _r = _t->isCurrent();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CentralLayout::*)()>(_a, &CentralLayout::disableBordersForMaximizedWindowsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CentralLayout::*)()>(_a, &CentralLayout::schemeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CentralLayout::*)()>(_a, &CentralLayout::showInMenuChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::SchemeColors* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->scheme(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::CentralLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::CentralLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte13CentralLayoutE_t>.strings))
        return static_cast<void*>(this);
    return Layout::GenericLayout::qt_metacast(_clname);
}

int Latte::CentralLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Layout::GenericLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Latte::CentralLayout::disableBordersForMaximizedWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::CentralLayout::schemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::CentralLayout::showInMenuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
