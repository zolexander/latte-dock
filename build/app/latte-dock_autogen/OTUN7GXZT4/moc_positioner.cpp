/****************************************************************************
** Meta object code from reading C++ file 'positioner.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/positioner.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'positioner.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::Positioner::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::Positioner",
        "canvasGeometryChanged",
        "",
        "currentScreenChanged",
        "edgeChanged",
        "screenGeometryChanged",
        "slideOffsetChanged",
        "windowSizeChanged",
        "winIdChanged",
        "hidingForRelocationStarted",
        "hidingForRelocationFinished",
        "showingAfterRelocationFinished",
        "startupFinished",
        "onHideWindowsForSlidingOut",
        "inRelocationAnimationChanged",
        "inRelocationShowingChanged",
        "inSlideAnimationChanged",
        "isOffScreenChanged",
        "isStickedOnTopEdgeChanged",
        "isStickedOnBottomEdgeChanged",
        "setNextLocation",
        "layoutName",
        "screensGroup",
        "screenName",
        "edge",
        "alignment",
        "slideInDuringStartup",
        "syncGeometry",
        "immediateSyncGeometry",
        "slideOutDuringExit",
        "Plasma::Types::Location",
        "location",
        "initDelayedSignals",
        "updateWaylandId",
        "onScreenChanged",
        "QScreen*",
        "screen",
        "onCurrentLayoutIsSwitching",
        "onLastRepositionApplyEvent",
        "onStartupFinished",
        "validateDockGeometry",
        "updateInRelocationAnimation",
        "syncLatteViews",
        "updateContainmentScreen",
        "inRelocationAnimation",
        "inRelocationShowing",
        "inSlideAnimation",
        "isOffScreen",
        "isStickedOnTopEdge",
        "isStickedOnBottomEdge",
        "currentScreenId",
        "canvasGeometry",
        "QRect",
        "slideOffset",
        "currentScreenName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'canvasGeometryChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentScreenChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'edgeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'slideOffsetChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowSizeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'winIdChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hidingForRelocationStarted'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hidingForRelocationFinished'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showingAfterRelocationFinished'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startupFinished'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'onHideWindowsForSlidingOut'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inRelocationAnimationChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inRelocationShowingChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inSlideAnimationChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isOffScreenChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isStickedOnTopEdgeChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isStickedOnBottomEdgeChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setNextLocation'
        QtMocHelpers::SlotData<void(const QString, const int, QString, int, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 }, { QMetaType::Int, 22 }, { QMetaType::QString, 23 }, { QMetaType::Int, 24 },
            { QMetaType::Int, 25 },
        }}),
        // Slot 'slideInDuringStartup'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'syncGeometry'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'immediateSyncGeometry'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slideOutDuringExit'
        QtMocHelpers::SlotData<void(Plasma::Types::Location)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
        // Slot 'slideOutDuringExit'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'initDelayedSignals'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateWaylandId'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScreenChanged'
        QtMocHelpers::SlotData<void(QScreen *)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'onCurrentLayoutIsSwitching'
        QtMocHelpers::SlotData<void(const QString &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'onLastRepositionApplyEvent'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStartupFinished'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'validateDockGeometry'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateInRelocationAnimation'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'syncLatteViews'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateContainmentScreen'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'inRelocationAnimation'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'inRelocationShowing'
        QtMocHelpers::PropertyData<bool>(45, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'inSlideAnimation'
        QtMocHelpers::PropertyData<bool>(46, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'isOffScreen'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags, 15),
        // property 'isStickedOnTopEdge'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'isStickedOnBottomEdge'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'currentScreenId'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'canvasGeometry'
        QtMocHelpers::PropertyData<QRect>(51, 0x80000000 | 52, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'slideOffset'
        QtMocHelpers::PropertyData<int>(53, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'currentScreenName'
        QtMocHelpers::PropertyData<QString>(54, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Positioner, qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::Positioner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::Positioner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Positioner *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->canvasGeometryChanged(); break;
        case 1: _t->currentScreenChanged(); break;
        case 2: _t->edgeChanged(); break;
        case 3: _t->screenGeometryChanged(); break;
        case 4: _t->slideOffsetChanged(); break;
        case 5: _t->windowSizeChanged(); break;
        case 6: _t->winIdChanged(); break;
        case 7: _t->hidingForRelocationStarted(); break;
        case 8: _t->hidingForRelocationFinished(); break;
        case 9: _t->showingAfterRelocationFinished(); break;
        case 10: _t->startupFinished(); break;
        case 11: _t->onHideWindowsForSlidingOut(); break;
        case 12: _t->inRelocationAnimationChanged(); break;
        case 13: _t->inRelocationShowingChanged(); break;
        case 14: _t->inSlideAnimationChanged(); break;
        case 15: _t->isOffScreenChanged(); break;
        case 16: _t->isStickedOnTopEdgeChanged(); break;
        case 17: _t->isStickedOnBottomEdgeChanged(); break;
        case 18: _t->setNextLocation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 19: _t->slideInDuringStartup(); break;
        case 20: _t->syncGeometry(); break;
        case 21: _t->immediateSyncGeometry(); break;
        case 22: _t->slideOutDuringExit((*reinterpret_cast<std::add_pointer_t<Plasma::Types::Location>>(_a[1]))); break;
        case 23: _t->slideOutDuringExit(); break;
        case 24: _t->initDelayedSignals(); break;
        case 25: _t->updateWaylandId(); break;
        case 26: _t->onScreenChanged((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 27: _t->onCurrentLayoutIsSwitching((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->onLastRepositionApplyEvent(); break;
        case 29: _t->onStartupFinished(); break;
        case 30: _t->validateDockGeometry(); break;
        case 31: _t->updateInRelocationAnimation(); break;
        case 32: _t->syncLatteViews(); break;
        case 33: _t->updateContainmentScreen(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::canvasGeometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::currentScreenChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::edgeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::screenGeometryChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::slideOffsetChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::windowSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::winIdChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::hidingForRelocationStarted, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::hidingForRelocationFinished, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::showingAfterRelocationFinished, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::startupFinished, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::onHideWindowsForSlidingOut, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::inRelocationAnimationChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::inRelocationShowingChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::inSlideAnimationChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::isOffScreenChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::isStickedOnTopEdgeChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Positioner::*)()>(_a, &Positioner::isStickedOnBottomEdgeChanged, 17))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->inRelocationAnimation(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->inRelocationShowing(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->inSlideAnimation(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isOffScreen(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isStickedOnTopEdge(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isStickedOnBottomEdge(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->currentScreenId(); break;
        case 7: *reinterpret_cast<QRect*>(_v) = _t->canvasGeometry(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->slideOffset(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->currentScreenName(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setInRelocationShowing(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setInSlideAnimation(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setIsStickedOnTopEdge(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setIsStickedOnBottomEdge(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setSlideOffset(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::Positioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::Positioner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10PositionerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::Positioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::Positioner::canvasGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::Positioner::currentScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::Positioner::edgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::Positioner::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::Positioner::slideOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::Positioner::windowSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::Positioner::winIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::Positioner::hidingForRelocationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::Positioner::hidingForRelocationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::Positioner::showingAfterRelocationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::ViewPart::Positioner::startupFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::ViewPart::Positioner::onHideWindowsForSlidingOut()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::ViewPart::Positioner::inRelocationAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::ViewPart::Positioner::inRelocationShowingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::ViewPart::Positioner::inSlideAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::ViewPart::Positioner::isOffScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::ViewPart::Positioner::isStickedOnTopEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::ViewPart::Positioner::isStickedOnBottomEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
