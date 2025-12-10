/****************************************************************************
** Meta object code from reading C++ file 'windowstracker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/wm/tracker/windowstracker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowstracker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::WindowSystem::Tracker::Windows::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::WindowSystem::Tracker::Windows",
        "enabledChanged",
        "",
        "const Latte::View*",
        "view",
        "activeWindowMaximizedChanged",
        "activeWindowTouchingChanged",
        "activeWindowTouchingEdgeChanged",
        "existsWindowActiveChanged",
        "existsWindowMaximizedChanged",
        "existsWindowTouchingChanged",
        "existsWindowTouchingEdgeChanged",
        "isTouchingBusyVerticalViewChanged",
        "activeWindowSchemeChanged",
        "touchingWindowSchemeChanged",
        "informationAnnounced",
        "enabledChangedForLayout",
        "const Latte::Layout::GenericLayout*",
        "layout",
        "activeWindowMaximizedChangedForLayout",
        "existsWindowActiveChangedForLayout",
        "existsWindowMaximizedChangedForLayout",
        "activeWindowSchemeChangedForLayout",
        "informationAnnouncedForLayout",
        "activeWindowChanged",
        "WindowId",
        "wid",
        "windowChanged",
        "windowRemoved",
        "applicationDataChanged",
        "updateScreenGeometries",
        "addRelevantLayout",
        "Latte::View*",
        "updateApplicationData",
        "updateRelevantLayouts",
        "updateExtraViewHints"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activeWindowMaximizedChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activeWindowTouchingChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activeWindowTouchingEdgeChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'existsWindowActiveChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'existsWindowMaximizedChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'existsWindowTouchingChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'existsWindowTouchingEdgeChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'isTouchingBusyVerticalViewChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activeWindowSchemeChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'touchingWindowSchemeChanged'
        QtMocHelpers::SignalData<void(const Latte::View *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'informationAnnounced'
        QtMocHelpers::SignalData<void(const Latte::View *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'enabledChangedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'activeWindowMaximizedChangedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'existsWindowActiveChangedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'existsWindowMaximizedChangedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'activeWindowSchemeChangedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'informationAnnouncedForLayout'
        QtMocHelpers::SignalData<void(const Latte::Layout::GenericLayout *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void(const WindowId &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'windowChanged'
        QtMocHelpers::SignalData<void(const WindowId &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(const WindowId &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'applicationDataChanged'
        QtMocHelpers::SignalData<void(const WindowId &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'updateScreenGeometries'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addRelevantLayout'
        QtMocHelpers::SlotData<void(Latte::View *)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 4 },
        }}),
        // Slot 'updateApplicationData'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateRelevantLayouts'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateExtraViewHints'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Windows, qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::WindowSystem::Tracker::Windows::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>.metaTypes,
    nullptr
} };

void Latte::WindowSystem::Tracker::Windows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Windows *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 1: _t->activeWindowMaximizedChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 2: _t->activeWindowTouchingChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 3: _t->activeWindowTouchingEdgeChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 4: _t->existsWindowActiveChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 5: _t->existsWindowMaximizedChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 6: _t->existsWindowTouchingChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 7: _t->existsWindowTouchingEdgeChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 8: _t->isTouchingBusyVerticalViewChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 9: _t->activeWindowSchemeChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 10: _t->touchingWindowSchemeChanged((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 11: _t->informationAnnounced((*reinterpret_cast<std::add_pointer_t<const Latte::View*>>(_a[1]))); break;
        case 12: _t->enabledChangedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 13: _t->activeWindowMaximizedChangedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 14: _t->existsWindowActiveChangedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 15: _t->existsWindowMaximizedChangedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 16: _t->activeWindowSchemeChangedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 17: _t->informationAnnouncedForLayout((*reinterpret_cast<std::add_pointer_t<const Latte::Layout::GenericLayout*>>(_a[1]))); break;
        case 18: _t->activeWindowChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 19: _t->windowChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 20: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 21: _t->applicationDataChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 22: _t->updateScreenGeometries(); break;
        case 23: _t->addRelevantLayout((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 24: _t->updateApplicationData(); break;
        case 25: _t->updateRelevantLayouts(); break;
        case 26: _t->updateExtraViewHints(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::enabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::activeWindowMaximizedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::activeWindowTouchingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::activeWindowTouchingEdgeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::existsWindowActiveChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::existsWindowMaximizedChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::existsWindowTouchingChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::existsWindowTouchingEdgeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::isTouchingBusyVerticalViewChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::activeWindowSchemeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::touchingWindowSchemeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::View * )>(_a, &Windows::informationAnnounced, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::enabledChangedForLayout, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::activeWindowMaximizedChangedForLayout, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::existsWindowActiveChangedForLayout, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::existsWindowMaximizedChangedForLayout, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::activeWindowSchemeChangedForLayout, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const Latte::Layout::GenericLayout * )>(_a, &Windows::informationAnnouncedForLayout, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const WindowId & )>(_a, &Windows::activeWindowChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const WindowId & )>(_a, &Windows::windowChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const WindowId & )>(_a, &Windows::windowRemoved, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Windows::*)(const WindowId & )>(_a, &Windows::applicationDataChanged, 21))
            return;
    }
}

const QMetaObject *Latte::WindowSystem::Tracker::Windows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::Tracker::Windows::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker7WindowsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::Tracker::Windows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Latte::WindowSystem::Tracker::Windows::enabledChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::WindowSystem::Tracker::Windows::activeWindowMaximizedChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Latte::WindowSystem::Tracker::Windows::activeWindowTouchingChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Latte::WindowSystem::Tracker::Windows::activeWindowTouchingEdgeChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Latte::WindowSystem::Tracker::Windows::existsWindowActiveChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Latte::WindowSystem::Tracker::Windows::existsWindowMaximizedChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Latte::WindowSystem::Tracker::Windows::existsWindowTouchingChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Latte::WindowSystem::Tracker::Windows::existsWindowTouchingEdgeChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Latte::WindowSystem::Tracker::Windows::isTouchingBusyVerticalViewChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Latte::WindowSystem::Tracker::Windows::activeWindowSchemeChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Latte::WindowSystem::Tracker::Windows::touchingWindowSchemeChanged(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Latte::WindowSystem::Tracker::Windows::informationAnnounced(const Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Latte::WindowSystem::Tracker::Windows::enabledChangedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Latte::WindowSystem::Tracker::Windows::activeWindowMaximizedChangedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Latte::WindowSystem::Tracker::Windows::existsWindowActiveChangedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Latte::WindowSystem::Tracker::Windows::existsWindowMaximizedChangedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Latte::WindowSystem::Tracker::Windows::activeWindowSchemeChangedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Latte::WindowSystem::Tracker::Windows::informationAnnouncedForLayout(const Latte::Layout::GenericLayout * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void Latte::WindowSystem::Tracker::Windows::activeWindowChanged(const WindowId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void Latte::WindowSystem::Tracker::Windows::windowChanged(const WindowId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void Latte::WindowSystem::Tracker::Windows::windowRemoved(const WindowId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void Latte::WindowSystem::Tracker::Windows::applicationDataChanged(const WindowId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}
QT_WARNING_POP
