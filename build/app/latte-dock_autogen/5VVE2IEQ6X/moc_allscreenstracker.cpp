/****************************************************************************
** Meta object code from reading C++ file 'allscreenstracker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/windowstracker/allscreenstracker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allscreenstracker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::TrackerPart::AllScreensTracker::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::TrackerPart::AllScreensTracker",
        "activeWindowMaximizedChanged",
        "",
        "existsWindowActiveChanged",
        "existsWindowMaximizedChanged",
        "activeWindowSchemeChanged",
        "lastActiveWindowChanged",
        "requestMoveLastWindow",
        "localX",
        "localY",
        "initSignalsForInformation",
        "activeWindowMaximized",
        "existsWindowActive",
        "existsWindowMaximized",
        "activeWindowScheme",
        "Latte::WindowSystem::SchemeColors*",
        "lastActiveWindow",
        "Latte::WindowSystem::Tracker::LastActiveWindow*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeWindowMaximizedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowActiveChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'existsWindowMaximizedChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowSchemeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastActiveWindowChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestMoveLastWindow'
        QtMocHelpers::SlotData<void(int, int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'initSignalsForInformation'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeWindowMaximized'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'existsWindowActive'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'existsWindowMaximized'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'activeWindowScheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'lastActiveWindow'
        QtMocHelpers::PropertyData<Latte::WindowSystem::Tracker::LastActiveWindow*>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AllScreensTracker, qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::TrackerPart::AllScreensTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::TrackerPart::AllScreensTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AllScreensTracker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeWindowMaximizedChanged(); break;
        case 1: _t->existsWindowActiveChanged(); break;
        case 2: _t->existsWindowMaximizedChanged(); break;
        case 3: _t->activeWindowSchemeChanged(); break;
        case 4: _t->lastActiveWindowChanged(); break;
        case 5: _t->requestMoveLastWindow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->initSignalsForInformation(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AllScreensTracker::*)()>(_a, &AllScreensTracker::activeWindowMaximizedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AllScreensTracker::*)()>(_a, &AllScreensTracker::existsWindowActiveChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AllScreensTracker::*)()>(_a, &AllScreensTracker::existsWindowMaximizedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AllScreensTracker::*)()>(_a, &AllScreensTracker::activeWindowSchemeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AllScreensTracker::*)()>(_a, &AllScreensTracker::lastActiveWindowChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::SchemeColors* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::Tracker::LastActiveWindow* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->activeWindowMaximized(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->existsWindowActive(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->existsWindowMaximized(); break;
        case 3: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->activeWindowScheme(); break;
        case 4: *reinterpret_cast<Latte::WindowSystem::Tracker::LastActiveWindow**>(_v) = _t->lastActiveWindow(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::TrackerPart::AllScreensTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::TrackerPart::AllScreensTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart11TrackerPart17AllScreensTrackerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::TrackerPart::AllScreensTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::TrackerPart::AllScreensTracker::activeWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::TrackerPart::AllScreensTracker::existsWindowActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::TrackerPart::AllScreensTracker::existsWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::TrackerPart::AllScreensTracker::activeWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::TrackerPart::AllScreensTracker::lastActiveWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
