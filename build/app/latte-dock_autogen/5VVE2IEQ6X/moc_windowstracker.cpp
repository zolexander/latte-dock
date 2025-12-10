/****************************************************************************
** Meta object code from reading C++ file 'windowstracker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/windowstracker/windowstracker.h"
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
struct qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::WindowsTracker::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::WindowsTracker",
        "enabledChanged",
        "",
        "allScreensChanged",
        "currentScreenChanged",
        "switchToNextActivity",
        "switchToPreviousActivity",
        "switchToNextVirtualDesktop",
        "switchToPreviousVirtualDesktop",
        "enabled",
        "currentScreen",
        "Latte::ViewPart::TrackerPart::CurrentScreenTracker*",
        "allScreens",
        "Latte::ViewPart::TrackerPart::AllScreensTracker*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'allScreensChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentScreenChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToNextActivity'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToPreviousActivity'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToNextVirtualDesktop'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToPreviousVirtualDesktop'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'currentScreen'
        QtMocHelpers::PropertyData<Latte::ViewPart::TrackerPart::CurrentScreenTracker*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'allScreens'
        QtMocHelpers::PropertyData<Latte::ViewPart::TrackerPart::AllScreensTracker*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowsTracker, qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::WindowsTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::WindowsTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowsTracker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->allScreensChanged(); break;
        case 2: _t->currentScreenChanged(); break;
        case 3: _t->switchToNextActivity(); break;
        case 4: _t->switchToPreviousActivity(); break;
        case 5: _t->switchToNextVirtualDesktop(); break;
        case 6: _t->switchToPreviousVirtualDesktop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowsTracker::*)()>(_a, &WindowsTracker::enabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowsTracker::*)()>(_a, &WindowsTracker::allScreensChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowsTracker::*)()>(_a, &WindowsTracker::currentScreenChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast<Latte::ViewPart::TrackerPart::CurrentScreenTracker**>(_v) = _t->currentScreen(); break;
        case 2: *reinterpret_cast<Latte::ViewPart::TrackerPart::AllScreensTracker**>(_v) = _t->allScreens(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::WindowsTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::WindowsTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart14WindowsTrackerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::WindowsTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::WindowsTracker::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::WindowsTracker::allScreensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::WindowsTracker::currentScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
