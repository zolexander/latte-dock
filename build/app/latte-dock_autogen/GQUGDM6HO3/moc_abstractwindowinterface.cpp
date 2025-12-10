/****************************************************************************
** Meta object code from reading C++ file 'abstractwindowinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/wm/abstractwindowinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractwindowinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::WindowSystem::AbstractWindowInterface::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::WindowSystem::AbstractWindowInterface",
        "activeWindowChanged",
        "",
        "WindowId",
        "wid",
        "windowChanged",
        "winfo",
        "windowAdded",
        "windowRemoved",
        "currentDesktopChanged",
        "activitiesChanged",
        "isShowingDesktopChanged",
        "latteWindowAdded",
        "initKWinInterface",
        "windowRemovedSlot",
        "setIsShowingDesktop",
        "showing",
        "onVirtualDesktopNavigationWrappingAroundChanged",
        "navigationWrappingAround"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void(WindowId)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowChanged'
        QtMocHelpers::SignalData<void(WindowId)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 6 },
        }}),
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(WindowId)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(WindowId)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'currentDesktopChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activitiesChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isShowingDesktopChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'latteWindowAdded'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initKWinInterface'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'windowRemovedSlot'
        QtMocHelpers::SlotData<void(WindowId)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setIsShowingDesktop'
        QtMocHelpers::SlotData<void(const bool &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'onVirtualDesktopNavigationWrappingAroundChanged'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractWindowInterface, qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::WindowSystem::AbstractWindowInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>.metaTypes,
    nullptr
} };

void Latte::WindowSystem::AbstractWindowInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractWindowInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeWindowChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 1: _t->windowChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 2: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 3: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 4: _t->currentDesktopChanged(); break;
        case 5: _t->activitiesChanged(); break;
        case 6: _t->isShowingDesktopChanged(); break;
        case 7: _t->latteWindowAdded(); break;
        case 8: _t->initKWinInterface(); break;
        case 9: _t->windowRemovedSlot((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 10: _t->setIsShowingDesktop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->onVirtualDesktopNavigationWrappingAroundChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)(WindowId )>(_a, &AbstractWindowInterface::activeWindowChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)(WindowId )>(_a, &AbstractWindowInterface::windowChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)(WindowId )>(_a, &AbstractWindowInterface::windowAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)(WindowId )>(_a, &AbstractWindowInterface::windowRemoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)()>(_a, &AbstractWindowInterface::currentDesktopChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)()>(_a, &AbstractWindowInterface::activitiesChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)()>(_a, &AbstractWindowInterface::isShowingDesktopChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowInterface::*)()>(_a, &AbstractWindowInterface::latteWindowAdded, 7))
            return;
    }
}

const QMetaObject *Latte::WindowSystem::AbstractWindowInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::AbstractWindowInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem23AbstractWindowInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::AbstractWindowInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Latte::WindowSystem::AbstractWindowInterface::activeWindowChanged(WindowId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::WindowSystem::AbstractWindowInterface::windowChanged(WindowId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Latte::WindowSystem::AbstractWindowInterface::windowAdded(WindowId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Latte::WindowSystem::AbstractWindowInterface::windowRemoved(WindowId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Latte::WindowSystem::AbstractWindowInterface::currentDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::WindowSystem::AbstractWindowInterface::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::WindowSystem::AbstractWindowInterface::isShowingDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::WindowSystem::AbstractWindowInterface::latteWindowAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
