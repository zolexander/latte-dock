/****************************************************************************
** Meta object code from reading C++ file 'lastactivewindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/wm/tracker/lastactivewindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lastactivewindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::WindowSystem::Tracker::LastActiveWindow::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::WindowSystem::Tracker::LastActiveWindow",
        "colorSchemeChanged",
        "",
        "iconChanged",
        "isActiveChanged",
        "isMinimizedChanged",
        "isMaximizedChanged",
        "isFullScreenChanged",
        "isKeepAboveChanged",
        "isOnAllDesktopsChanged",
        "isShadedChanged",
        "isValidChanged",
        "hasSkipTaskbarChanged",
        "isClosableChanged",
        "isFullScreenableChanged",
        "isGroupableChanged",
        "isMaximizableChanged",
        "isMinimizableChanged",
        "isMovableChanged",
        "isResizableChanged",
        "isShadeableChanged",
        "isVirtualDesktopChangeableChanged",
        "appNameChanged",
        "displayChanged",
        "geometryChanged",
        "currentWinIdChanged",
        "printRequested",
        "requestActivate",
        "requestClose",
        "requestToggleIsOnAllDesktops",
        "requestToggleKeepAbove",
        "requestToggleMinimized",
        "requestToggleMaximized",
        "canBeDragged",
        "requestMove",
        "Latte::View*",
        "fromView",
        "localX",
        "localY",
        "printHistory",
        "updateInformationFromHistory",
        "applicationDataChanged",
        "WindowId",
        "wid",
        "windowChanged",
        "windowRemoved",
        "isValid",
        "isActive",
        "isMinimized",
        "isMaximized",
        "isFullScreen",
        "isKeepAbove",
        "isOnAllDesktops",
        "isShaded",
        "hasSkipTaskbar",
        "isClosable",
        "isFullScreenable",
        "isGroupable",
        "isMaximizable",
        "isMinimizable",
        "isMovable",
        "isResizable",
        "isShadeable",
        "isVirtualDesktopChangeable",
        "colorScheme",
        "appName",
        "display",
        "geometry",
        "QRect",
        "icon",
        "QIcon",
        "winId"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'colorSchemeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isActiveChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMinimizedChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMaximizedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isFullScreenChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isKeepAboveChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isOnAllDesktopsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isShadedChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isValidChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasSkipTaskbarChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isClosableChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isFullScreenableChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isGroupableChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMaximizableChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMinimizableChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMovableChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isResizableChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isShadeableChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isVirtualDesktopChangeableChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appNameChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'displayChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'geometryChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentWinIdChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'printRequested'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestActivate'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestClose'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestToggleIsOnAllDesktops'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestToggleKeepAbove'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestToggleMinimized'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestToggleMaximized'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'canBeDragged'
        QtMocHelpers::SlotData<bool()>(33, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'requestMove'
        QtMocHelpers::SlotData<void(Latte::View *, int, int)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { QMetaType::Int, 37 }, { QMetaType::Int, 38 },
        }}),
        // Slot 'printHistory'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateInformationFromHistory'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'applicationDataChanged'
        QtMocHelpers::SlotData<void(const WindowId &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'windowChanged'
        QtMocHelpers::SlotData<void(const WindowId &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'windowRemoved'
        QtMocHelpers::SlotData<void(const WindowId &)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isValid'
        QtMocHelpers::PropertyData<bool>(46, QMetaType::Bool, QMC::DefaultPropertyFlags, 9),
        // property 'isActive'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'isMinimized'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'isMaximized'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'isFullScreen'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'isKeepAbove'
        QtMocHelpers::PropertyData<bool>(51, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'isOnAllDesktops'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'isShaded'
        QtMocHelpers::PropertyData<bool>(53, QMetaType::Bool, QMC::DefaultPropertyFlags, 8),
        // property 'hasSkipTaskbar'
        QtMocHelpers::PropertyData<bool>(54, QMetaType::Bool, QMC::DefaultPropertyFlags, 10),
        // property 'isClosable'
        QtMocHelpers::PropertyData<bool>(55, QMetaType::Bool, QMC::DefaultPropertyFlags, 11),
        // property 'isFullScreenable'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'isGroupable'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags, 13),
        // property 'isMaximizable'
        QtMocHelpers::PropertyData<bool>(58, QMetaType::Bool, QMC::DefaultPropertyFlags, 14),
        // property 'isMinimizable'
        QtMocHelpers::PropertyData<bool>(59, QMetaType::Bool, QMC::DefaultPropertyFlags, 15),
        // property 'isMovable'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags, 16),
        // property 'isResizable'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags, 17),
        // property 'isShadeable'
        QtMocHelpers::PropertyData<bool>(62, QMetaType::Bool, QMC::DefaultPropertyFlags, 18),
        // property 'isVirtualDesktopChangeable'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags, 19),
        // property 'colorScheme'
        QtMocHelpers::PropertyData<QString>(64, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'appName'
        QtMocHelpers::PropertyData<QString>(65, QMetaType::QString, QMC::DefaultPropertyFlags, 20),
        // property 'display'
        QtMocHelpers::PropertyData<QString>(66, QMetaType::QString, QMC::DefaultPropertyFlags, 21),
        // property 'geometry'
        QtMocHelpers::PropertyData<QRect>(67, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 22),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(69, 0x80000000 | 70, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'winId'
        QtMocHelpers::PropertyData<WindowId>(71, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 23),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LastActiveWindow, qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::WindowSystem::Tracker::LastActiveWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>.metaTypes,
    nullptr
} };

void Latte::WindowSystem::Tracker::LastActiveWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LastActiveWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->colorSchemeChanged(); break;
        case 1: _t->iconChanged(); break;
        case 2: _t->isActiveChanged(); break;
        case 3: _t->isMinimizedChanged(); break;
        case 4: _t->isMaximizedChanged(); break;
        case 5: _t->isFullScreenChanged(); break;
        case 6: _t->isKeepAboveChanged(); break;
        case 7: _t->isOnAllDesktopsChanged(); break;
        case 8: _t->isShadedChanged(); break;
        case 9: _t->isValidChanged(); break;
        case 10: _t->hasSkipTaskbarChanged(); break;
        case 11: _t->isClosableChanged(); break;
        case 12: _t->isFullScreenableChanged(); break;
        case 13: _t->isGroupableChanged(); break;
        case 14: _t->isMaximizableChanged(); break;
        case 15: _t->isMinimizableChanged(); break;
        case 16: _t->isMovableChanged(); break;
        case 17: _t->isResizableChanged(); break;
        case 18: _t->isShadeableChanged(); break;
        case 19: _t->isVirtualDesktopChangeableChanged(); break;
        case 20: _t->appNameChanged(); break;
        case 21: _t->displayChanged(); break;
        case 22: _t->geometryChanged(); break;
        case 23: _t->currentWinIdChanged(); break;
        case 24: _t->printRequested(); break;
        case 25: _t->requestActivate(); break;
        case 26: _t->requestClose(); break;
        case 27: _t->requestToggleIsOnAllDesktops(); break;
        case 28: _t->requestToggleKeepAbove(); break;
        case 29: _t->requestToggleMinimized(); break;
        case 30: _t->requestToggleMaximized(); break;
        case 31: { bool _r = _t->canBeDragged();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->requestMove((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 33: _t->printHistory(); break;
        case 34: _t->updateInformationFromHistory(); break;
        case 35: _t->applicationDataChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 36: _t->windowChanged((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        case 37: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<WindowId>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::colorSchemeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::iconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isActiveChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isMinimizedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isMaximizedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isFullScreenChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isKeepAboveChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isOnAllDesktopsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isShadedChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isValidChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::hasSkipTaskbarChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isClosableChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isFullScreenableChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isGroupableChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isMaximizableChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isMinimizableChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isMovableChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isResizableChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isShadeableChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::isVirtualDesktopChangeableChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::appNameChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::displayChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::geometryChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::currentWinIdChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (LastActiveWindow::*)()>(_a, &LastActiveWindow::printRequested, 24))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isMinimized(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isMaximized(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isFullScreen(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isKeepAbove(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isOnAllDesktops(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isShaded(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->hasSkipTaskbar(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isClosable(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isFullScreenable(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isGroupable(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isMaximizable(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isMinimizable(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isMovable(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isResizable(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isShadeable(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isVirtualDesktopChangeable(); break;
        case 18: *reinterpret_cast<QString*>(_v) = _t->colorScheme(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->appName(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->display(); break;
        case 21: *reinterpret_cast<QRect*>(_v) = _t->geometry(); break;
        case 22: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 23: *reinterpret_cast<WindowId*>(_v) = _t->currentWinId(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::WindowSystem::Tracker::LastActiveWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::Tracker::LastActiveWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12WindowSystem7Tracker16LastActiveWindowE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::Tracker::LastActiveWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Latte::WindowSystem::Tracker::LastActiveWindow::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::WindowSystem::Tracker::LastActiveWindow::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::WindowSystem::Tracker::LastActiveWindow::isActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::WindowSystem::Tracker::LastActiveWindow::isMinimizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::WindowSystem::Tracker::LastActiveWindow::isMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::WindowSystem::Tracker::LastActiveWindow::isFullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::WindowSystem::Tracker::LastActiveWindow::isKeepAboveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::WindowSystem::Tracker::LastActiveWindow::isOnAllDesktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::WindowSystem::Tracker::LastActiveWindow::isShadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::WindowSystem::Tracker::LastActiveWindow::isValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::WindowSystem::Tracker::LastActiveWindow::hasSkipTaskbarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::WindowSystem::Tracker::LastActiveWindow::isClosableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::WindowSystem::Tracker::LastActiveWindow::isFullScreenableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::WindowSystem::Tracker::LastActiveWindow::isGroupableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::WindowSystem::Tracker::LastActiveWindow::isMaximizableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::WindowSystem::Tracker::LastActiveWindow::isMinimizableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::WindowSystem::Tracker::LastActiveWindow::isMovableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::WindowSystem::Tracker::LastActiveWindow::isResizableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::WindowSystem::Tracker::LastActiveWindow::isShadeableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Latte::WindowSystem::Tracker::LastActiveWindow::isVirtualDesktopChangeableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Latte::WindowSystem::Tracker::LastActiveWindow::appNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Latte::WindowSystem::Tracker::LastActiveWindow::displayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Latte::WindowSystem::Tracker::LastActiveWindow::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Latte::WindowSystem::Tracker::LastActiveWindow::currentWinIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Latte::WindowSystem::Tracker::LastActiveWindow::printRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}
QT_WARNING_POP
