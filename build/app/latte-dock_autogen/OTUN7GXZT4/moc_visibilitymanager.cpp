/****************************************************************************
** Meta object code from reading C++ file 'visibilitymanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/visibilitymanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visibilitymanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::VisibilityManager::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::VisibilityManager",
        "mustBeShown",
        "",
        "mustBeHide",
        "slideOutFinished",
        "slideInFinished",
        "frameExtentsCleared",
        "modeChanged",
        "raiseOnDesktopChanged",
        "raiseOnActivityChanged",
        "isBelowLayerChanged",
        "isFloatingGapWindowEnabledChanged",
        "isHiddenChanged",
        "isSidebarChanged",
        "isShownFullyChanged",
        "hidingIsBlockedChanged",
        "containsMouseChanged",
        "strutsThicknessChanged",
        "timerShowChanged",
        "timerHideChanged",
        "enableKWinEdgesChanged",
        "supportsKWinEdgesChanged",
        "hide",
        "show",
        "setViewOnBackLayer",
        "setViewOnFrontLayer",
        "addBlockHidingEvent",
        "type",
        "removeBlockHidingEvent",
        "initViewFlags",
        "saveConfig",
        "restoreConfig",
        "setIsBelowLayer",
        "below",
        "onHeadThicknessChanged",
        "onHidingIsBlockedChanged",
        "onIsFloatingGapWindowEnabledChanged",
        "publishFrameExtents",
        "forceUpdate",
        "updateKWinEdgesSupport",
        "updateSidebarState",
        "dodgeAllWindows",
        "dodgeActive",
        "dodgeMaximized",
        "updateHiddenState",
        "updateStrutsAfterTimer",
        "isValidMode",
        "hidingIsBlocked",
        "mode",
        "Latte::Types::Visibility",
        "raiseOnDesktop",
        "raiseOnActivity",
        "isHidden",
        "isShownFully",
        "isBelowLayer",
        "isSidebar",
        "containsMouse",
        "isFloatingGapWindowEnabled",
        "enableKWinEdges",
        "supportsKWinEdges",
        "timerShow",
        "timerHide",
        "strutsThickness"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mustBeShown'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mustBeHide'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'slideOutFinished'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'slideInFinished'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'frameExtentsCleared'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'raiseOnDesktopChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'raiseOnActivityChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isBelowLayerChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isFloatingGapWindowEnabledChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isHiddenChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isSidebarChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isShownFullyChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hidingIsBlockedChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'containsMouseChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'strutsThicknessChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timerShowChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timerHideChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enableKWinEdgesChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'supportsKWinEdgesChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hide'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'show'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setViewOnBackLayer'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setViewOnFrontLayer'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addBlockHidingEvent'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'removeBlockHidingEvent'
        QtMocHelpers::SlotData<void(const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'initViewFlags'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreConfig'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setIsBelowLayer'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'onHeadThicknessChanged'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHidingIsBlockedChanged'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onIsFloatingGapWindowEnabledChanged'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'publishFrameExtents'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'publishFrameExtents'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateKWinEdgesSupport'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSidebarState'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dodgeAllWindows'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dodgeActive'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dodgeMaximized'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateHiddenState'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStrutsAfterTimer'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'isValidMode'
        QtMocHelpers::SlotData<bool() const>(46, 2, QMC::AccessPrivate, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'hidingIsBlocked'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags, 13),
        // property 'mode'
        QtMocHelpers::PropertyData<Latte::Types::Visibility>(48, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'raiseOnDesktop'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'raiseOnActivity'
        QtMocHelpers::PropertyData<bool>(51, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'isHidden'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'isShownFully'
        QtMocHelpers::PropertyData<bool>(53, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'isBelowLayer'
        QtMocHelpers::PropertyData<bool>(54, QMetaType::Bool, QMC::DefaultPropertyFlags, 8),
        // property 'isSidebar'
        QtMocHelpers::PropertyData<bool>(55, QMetaType::Bool, QMC::DefaultPropertyFlags, 11),
        // property 'containsMouse'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags, 14),
        // property 'isFloatingGapWindowEnabled'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'enableKWinEdges'
        QtMocHelpers::PropertyData<bool>(58, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'supportsKWinEdges'
        QtMocHelpers::PropertyData<bool>(59, QMetaType::Bool, QMC::DefaultPropertyFlags, 19),
        // property 'timerShow'
        QtMocHelpers::PropertyData<int>(60, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'timerHide'
        QtMocHelpers::PropertyData<int>(61, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'strutsThickness'
        QtMocHelpers::PropertyData<int>(62, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VisibilityManager, qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte8ViewPart17VisibilityManagerE[] = {
    QMetaObject::SuperData::link<Latte::Types::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::ViewPart::VisibilityManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte8ViewPart17VisibilityManagerE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::VisibilityManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VisibilityManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mustBeShown(); break;
        case 1: _t->mustBeHide(); break;
        case 2: _t->slideOutFinished(); break;
        case 3: _t->slideInFinished(); break;
        case 4: _t->frameExtentsCleared(); break;
        case 5: _t->modeChanged(); break;
        case 6: _t->raiseOnDesktopChanged(); break;
        case 7: _t->raiseOnActivityChanged(); break;
        case 8: _t->isBelowLayerChanged(); break;
        case 9: _t->isFloatingGapWindowEnabledChanged(); break;
        case 10: _t->isHiddenChanged(); break;
        case 11: _t->isSidebarChanged(); break;
        case 12: _t->isShownFullyChanged(); break;
        case 13: _t->hidingIsBlockedChanged(); break;
        case 14: _t->containsMouseChanged(); break;
        case 15: _t->strutsThicknessChanged(); break;
        case 16: _t->timerShowChanged(); break;
        case 17: _t->timerHideChanged(); break;
        case 18: _t->enableKWinEdgesChanged(); break;
        case 19: _t->supportsKWinEdgesChanged(); break;
        case 20: _t->hide(); break;
        case 21: _t->show(); break;
        case 22: _t->setViewOnBackLayer(); break;
        case 23: _t->setViewOnFrontLayer(); break;
        case 24: _t->addBlockHidingEvent((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->removeBlockHidingEvent((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->initViewFlags(); break;
        case 27: _t->saveConfig(); break;
        case 28: _t->restoreConfig(); break;
        case 29: _t->setIsBelowLayer((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->onHeadThicknessChanged(); break;
        case 31: _t->onHidingIsBlockedChanged(); break;
        case 32: _t->onIsFloatingGapWindowEnabledChanged(); break;
        case 33: _t->publishFrameExtents((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->publishFrameExtents(); break;
        case 35: _t->updateKWinEdgesSupport(); break;
        case 36: _t->updateSidebarState(); break;
        case 37: _t->dodgeAllWindows(); break;
        case 38: _t->dodgeActive(); break;
        case 39: _t->dodgeMaximized(); break;
        case 40: _t->updateHiddenState(); break;
        case 41: _t->updateStrutsAfterTimer(); break;
        case 42: { bool _r = _t->isValidMode();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::mustBeShown, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::mustBeHide, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::slideOutFinished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::slideInFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::frameExtentsCleared, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::modeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::raiseOnDesktopChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::raiseOnActivityChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::isBelowLayerChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::isFloatingGapWindowEnabledChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::isHiddenChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::isSidebarChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::isShownFullyChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::hidingIsBlockedChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::containsMouseChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::strutsThicknessChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::timerShowChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::timerHideChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::enableKWinEdgesChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (VisibilityManager::*)()>(_a, &VisibilityManager::supportsKWinEdgesChanged, 19))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->hidingIsBlocked(); break;
        case 1: *reinterpret_cast<Latte::Types::Visibility*>(_v) = _t->mode(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->raiseOnDesktop(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->raiseOnActivity(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isHidden(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isShownFully(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isBelowLayer(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isSidebar(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->containsMouse(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isFloatingGapWindowEnabled(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->enableKWinEdges(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->supportsKWinEdges(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->timerShow(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->timerHide(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->strutsThickness(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMode(*reinterpret_cast<Latte::Types::Visibility*>(_v)); break;
        case 2: _t->setRaiseOnDesktop(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setRaiseOnActivity(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setIsHidden(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setIsShownFully(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setIsFloatingGapWindowEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setEnableKWinEdges(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setTimerShow(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setTimerHide(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setStrutsThickness(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::VisibilityManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::VisibilityManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17VisibilityManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::VisibilityManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::VisibilityManager::mustBeShown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::VisibilityManager::mustBeHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::VisibilityManager::slideOutFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::VisibilityManager::slideInFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::VisibilityManager::frameExtentsCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::VisibilityManager::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::VisibilityManager::raiseOnDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::VisibilityManager::raiseOnActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::VisibilityManager::isBelowLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::VisibilityManager::isFloatingGapWindowEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::ViewPart::VisibilityManager::isHiddenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::ViewPart::VisibilityManager::isSidebarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::ViewPart::VisibilityManager::isShownFullyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::ViewPart::VisibilityManager::hidingIsBlockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::ViewPart::VisibilityManager::containsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::ViewPart::VisibilityManager::strutsThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::ViewPart::VisibilityManager::timerShowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::ViewPart::VisibilityManager::timerHideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::ViewPart::VisibilityManager::enableKWinEdgesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Latte::ViewPart::VisibilityManager::supportsKWinEdgesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
