/****************************************************************************
** Meta object code from reading C++ file 'currentscreentracker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/windowstracker/currentscreentracker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentscreentracker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::TrackerPart::CurrentScreenTracker",
        "activeWindowMaximizedChanged",
        "",
        "activeWindowTouchingChanged",
        "activeWindowTouchingEdgeChanged",
        "existsWindowActiveChanged",
        "existsWindowMaximizedChanged",
        "existsWindowTouchingChanged",
        "existsWindowTouchingEdgeChanged",
        "isTouchingBusyVerticalViewChanged",
        "activeWindowSchemeChanged",
        "touchingWindowSchemeChanged",
        "lastActiveWindowChanged",
        "requestMoveLastWindow",
        "localX",
        "localY",
        "initSignalsForInformation",
        "activeWindowMaximized",
        "activeWindowTouching",
        "activeWindowTouchingEdge",
        "existsWindowActive",
        "existsWindowMaximized",
        "existsWindowTouching",
        "existsWindowTouchingEdge",
        "isTouchingBusyVerticalView",
        "activeWindowScheme",
        "Latte::WindowSystem::SchemeColors*",
        "touchingWindowScheme",
        "lastActiveWindow",
        "Latte::WindowSystem::Tracker::LastActiveWindow*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeWindowMaximizedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowTouchingChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowTouchingEdgeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowActiveChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowMaximizedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowTouchingChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowTouchingEdgeChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTouchingBusyVerticalViewChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowSchemeChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'touchingWindowSchemeChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastActiveWindowChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestMoveLastWindow'
        QtMocHelpers::SlotData<void(int, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Slot 'initSignalsForInformation'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeWindowMaximized'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'activeWindowTouching'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'activeWindowTouchingEdge'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'existsWindowActive'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'existsWindowMaximized'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'existsWindowTouching'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'existsWindowTouchingEdge'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'isTouchingBusyVerticalView'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'activeWindowScheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 8),
        // property 'touchingWindowScheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(27, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 9),
        // property 'lastActiveWindow'
        QtMocHelpers::PropertyData<Latte::WindowSystem::Tracker::LastActiveWindow*>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 10),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CurrentScreenTracker, qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::TrackerPart::CurrentScreenTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CurrentScreenTracker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeWindowMaximizedChanged(); break;
        case 1: _t->activeWindowTouchingChanged(); break;
        case 2: _t->activeWindowTouchingEdgeChanged(); break;
        case 3: _t->existsWindowActiveChanged(); break;
        case 4: _t->existsWindowMaximizedChanged(); break;
        case 5: _t->existsWindowTouchingChanged(); break;
        case 6: _t->existsWindowTouchingEdgeChanged(); break;
        case 7: _t->isTouchingBusyVerticalViewChanged(); break;
        case 8: _t->activeWindowSchemeChanged(); break;
        case 9: _t->touchingWindowSchemeChanged(); break;
        case 10: _t->lastActiveWindowChanged(); break;
        case 11: _t->requestMoveLastWindow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->initSignalsForInformation(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::activeWindowMaximizedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::activeWindowTouchingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::activeWindowTouchingEdgeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::existsWindowActiveChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::existsWindowMaximizedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::existsWindowTouchingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::existsWindowTouchingEdgeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::isTouchingBusyVerticalViewChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::activeWindowSchemeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::touchingWindowSchemeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (CurrentScreenTracker::*)()>(_a, &CurrentScreenTracker::lastActiveWindowChanged, 10))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::SchemeColors* >(); break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::Tracker::LastActiveWindow* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->activeWindowMaximized(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->activeWindowTouching(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->activeWindowTouchingEdge(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->existsWindowActive(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->existsWindowMaximized(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->existsWindowTouching(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->existsWindowTouchingEdge(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isTouchingBusyVerticalView(); break;
        case 8: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->activeWindowScheme(); break;
        case 9: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->touchingWindowScheme(); break;
        case 10: *reinterpret_cast<Latte::WindowSystem::Tracker::LastActiveWindow**>(_v) = _t->lastActiveWindow(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::TrackerPart::CurrentScreenTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart20CurrentScreenTrackerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowTouchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowTouchingEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowTouchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowTouchingEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::isTouchingBusyVerticalViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::touchingWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::lastActiveWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
