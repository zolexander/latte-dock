/****************************************************************************
** Meta object code from reading C++ file 'containmentinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/containmentinterface.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'containmentinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::ContainmentInterface::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::ContainmentInterface",
        "expandedAppletStateChanged",
        "",
        "hasExpandedAppletChanged",
        "hasLatteTasksChanged",
        "hasPlasmaTasksChanged",
        "initializationCompleted",
        "latteTasksModelChanged",
        "layoutManagerChanged",
        "plasmaTasksModelChanged",
        "plasmoidChanged",
        "appletRemoved",
        "id",
        "appletConfigPropertyChanged",
        "key",
        "QVariant",
        "value",
        "appletCreated",
        "pluginId",
        "appletDataCreated",
        "appletDropped",
        "data",
        "x",
        "y",
        "containmentConfigPropertyChanged",
        "appletsOrderChanged",
        "appletsInLockedZoomChanged",
        "QList<int>",
        "applets",
        "appletsDisabledColoringChanged",
        "appletInScheduledDestructionChanged",
        "enabled",
        "appletRequestedVisualIndicator",
        "plasmoidId",
        "deactivateApplets",
        "toggleAppletExpanded",
        "appletIsExpandable",
        "appletIsExpanded",
        "appletIsActivationTogglesExpanded",
        "isApplication",
        "QUrl",
        "url",
        "addApplet",
        "metadata",
        "removeApplet",
        "setAppletsOrder",
        "order",
        "setAppletsInLockedZoom",
        "setAppletsDisabledColoring",
        "setAppletInScheduledDestruction",
        "updateContainmentConfigProperty",
        "updateAppletConfigProperty",
        "identifyShortcutsHost",
        "identifyMethods",
        "updateAppletsOrder",
        "updateAppletsInLockedZoom",
        "updateAppletsDisabledColoring",
        "updateAppletsTracking",
        "updateAppletDelayedConfiguration",
        "onAppletAdded",
        "Plasma::Applet*",
        "applet",
        "onAppletExpandedChanged",
        "onLatteTasksCountChanged",
        "onPlasmaTasksCountChanged",
        "hasExpandedApplet",
        "hasLatteTasks",
        "hasPlasmaTasks",
        "plasmoid",
        "latteTasksModel",
        "QAbstractListModel*",
        "plasmaTasksModel",
        "layoutManager"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'expandedAppletStateChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasExpandedAppletChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasLatteTasksChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasPlasmaTasksChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializationCompleted'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'latteTasksModelChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutManagerChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'plasmaTasksModelChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'plasmoidChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appletRemoved'
        QtMocHelpers::SignalData<void(const int &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'appletConfigPropertyChanged'
        QtMocHelpers::SignalData<void(const int &, const QString &, const QVariant &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::QString, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Signal 'appletCreated'
        QtMocHelpers::SignalData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Signal 'appletDataCreated'
        QtMocHelpers::SignalData<void(const int &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'appletDropped'
        QtMocHelpers::SignalData<void(QObject *, int, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 21 }, { QMetaType::Int, 22 }, { QMetaType::Int, 23 },
        }}),
        // Signal 'containmentConfigPropertyChanged'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Signal 'appletsOrderChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appletsInLockedZoomChanged'
        QtMocHelpers::SignalData<void(const QList<int> &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'appletsDisabledColoringChanged'
        QtMocHelpers::SignalData<void(const QList<int> &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'appletInScheduledDestructionChanged'
        QtMocHelpers::SignalData<void(const int &, const bool &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Bool, 31 },
        }}),
        // Signal 'appletRequestedVisualIndicator'
        QtMocHelpers::SignalData<void(const int &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 },
        }}),
        // Slot 'deactivateApplets'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleAppletExpanded'
        QtMocHelpers::SlotData<void(const int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'appletIsExpandable'
        QtMocHelpers::SlotData<bool(const int) const>(36, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'appletIsExpanded'
        QtMocHelpers::SlotData<bool(const int) const>(37, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'appletIsActivationTogglesExpanded'
        QtMocHelpers::SlotData<bool(const int) const>(38, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'isApplication'
        QtMocHelpers::SlotData<bool(const QUrl &) const>(39, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Slot 'addApplet'
        QtMocHelpers::SlotData<void(const QString &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'addApplet'
        QtMocHelpers::SlotData<void(QObject *, int, int)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 43 }, { QMetaType::Int, 22 }, { QMetaType::Int, 23 },
        }}),
        // Slot 'removeApplet'
        QtMocHelpers::SlotData<void(const int &)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'setAppletsOrder'
        QtMocHelpers::SlotData<void(const QList<int> &)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 46 },
        }}),
        // Slot 'setAppletsInLockedZoom'
        QtMocHelpers::SlotData<void(const QList<int> &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'setAppletsDisabledColoring'
        QtMocHelpers::SlotData<void(const QList<int> &)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'setAppletInScheduledDestruction'
        QtMocHelpers::SlotData<void(const int &, const bool &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Bool, 31 },
        }}),
        // Slot 'updateContainmentConfigProperty'
        QtMocHelpers::SlotData<void(const QString &, const QVariant &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'updateAppletConfigProperty'
        QtMocHelpers::SlotData<void(const int &, const QString &, const QVariant &)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::QString, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'identifyShortcutsHost'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'identifyMethods'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAppletsOrder'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAppletsInLockedZoom'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAppletsDisabledColoring'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAppletsTracking'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAppletDelayedConfiguration'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAppletAdded'
        QtMocHelpers::SlotData<void(Plasma::Applet *)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 60, 61 },
        }}),
        // Slot 'onAppletExpandedChanged'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLatteTasksCountChanged'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlasmaTasksCountChanged'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'hasExpandedApplet'
        QtMocHelpers::PropertyData<bool>(65, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'hasLatteTasks'
        QtMocHelpers::PropertyData<bool>(66, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'hasPlasmaTasks'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'plasmoid'
        QtMocHelpers::PropertyData<QObject*>(68, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'latteTasksModel'
        QtMocHelpers::PropertyData<QAbstractListModel*>(69, 0x80000000 | 70, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'plasmaTasksModel'
        QtMocHelpers::PropertyData<QAbstractListModel*>(71, 0x80000000 | 70, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 7),
        // property 'layoutManager'
        QtMocHelpers::PropertyData<QObject*>(72, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ContainmentInterface, qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::ContainmentInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::ContainmentInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ContainmentInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->expandedAppletStateChanged(); break;
        case 1: _t->hasExpandedAppletChanged(); break;
        case 2: _t->hasLatteTasksChanged(); break;
        case 3: _t->hasPlasmaTasksChanged(); break;
        case 4: _t->initializationCompleted(); break;
        case 5: _t->latteTasksModelChanged(); break;
        case 6: _t->layoutManagerChanged(); break;
        case 7: _t->plasmaTasksModelChanged(); break;
        case 8: _t->plasmoidChanged(); break;
        case 9: _t->appletRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->appletConfigPropertyChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 11: _t->appletCreated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->appletDataCreated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->appletDropped((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->containmentConfigPropertyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 15: _t->appletsOrderChanged(); break;
        case 16: _t->appletsInLockedZoomChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 17: _t->appletsDisabledColoringChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 18: _t->appletInScheduledDestructionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 19: _t->appletRequestedVisualIndicator((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->deactivateApplets(); break;
        case 21: _t->toggleAppletExpanded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: { bool _r = _t->appletIsExpandable((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->appletIsExpanded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->appletIsActivationTogglesExpanded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isApplication((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->addApplet((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->addApplet((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 28: _t->removeApplet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->setAppletsOrder((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 30: _t->setAppletsInLockedZoom((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 31: _t->setAppletsDisabledColoring((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 32: _t->setAppletInScheduledDestruction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->updateContainmentConfigProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 34: _t->updateAppletConfigProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 35: _t->identifyShortcutsHost(); break;
        case 36: _t->identifyMethods(); break;
        case 37: _t->updateAppletsOrder(); break;
        case 38: _t->updateAppletsInLockedZoom(); break;
        case 39: _t->updateAppletsDisabledColoring(); break;
        case 40: _t->updateAppletsTracking(); break;
        case 41: _t->updateAppletDelayedConfiguration(); break;
        case 42: _t->onAppletAdded((*reinterpret_cast<std::add_pointer_t<Plasma::Applet*>>(_a[1]))); break;
        case 43: _t->onAppletExpandedChanged(); break;
        case 44: _t->onLatteTasksCountChanged(); break;
        case 45: _t->onPlasmaTasksCountChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::expandedAppletStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::hasExpandedAppletChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::hasLatteTasksChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::hasPlasmaTasksChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::initializationCompleted, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::latteTasksModelChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::layoutManagerChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::plasmaTasksModelChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::plasmoidChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const int & )>(_a, &ContainmentInterface::appletRemoved, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const int & , const QString & , const QVariant & )>(_a, &ContainmentInterface::appletConfigPropertyChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const QString & )>(_a, &ContainmentInterface::appletCreated, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const int & )>(_a, &ContainmentInterface::appletDataCreated, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(QObject * , int , int )>(_a, &ContainmentInterface::appletDropped, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const QString & , const QVariant & )>(_a, &ContainmentInterface::containmentConfigPropertyChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)()>(_a, &ContainmentInterface::appletsOrderChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const QList<int> & )>(_a, &ContainmentInterface::appletsInLockedZoomChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const QList<int> & )>(_a, &ContainmentInterface::appletsDisabledColoringChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const int & , const bool & )>(_a, &ContainmentInterface::appletInScheduledDestructionChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContainmentInterface::*)(const int & )>(_a, &ContainmentInterface::appletRequestedVisualIndicator, 19))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractListModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->hasExpandedApplet(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasLatteTasks(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasPlasmaTasks(); break;
        case 3: *reinterpret_cast<QObject**>(_v) = _t->plasmoid(); break;
        case 4: *reinterpret_cast<QAbstractListModel**>(_v) = _t->latteTasksModel(); break;
        case 5: *reinterpret_cast<QAbstractListModel**>(_v) = _t->plasmaTasksModel(); break;
        case 6: *reinterpret_cast<QObject**>(_v) = _t->layoutManager(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setPlasmoid(*reinterpret_cast<QObject**>(_v)); break;
        case 6: _t->setLayoutManager(*reinterpret_cast<QObject**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::ContainmentInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::ContainmentInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart20ContainmentInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::ContainmentInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::ContainmentInterface::expandedAppletStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::ContainmentInterface::hasExpandedAppletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::ContainmentInterface::hasLatteTasksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::ContainmentInterface::hasPlasmaTasksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::ContainmentInterface::initializationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::ContainmentInterface::latteTasksModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::ContainmentInterface::layoutManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::ContainmentInterface::plasmaTasksModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::ContainmentInterface::plasmoidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::ContainmentInterface::appletRemoved(const int & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Latte::ViewPart::ContainmentInterface::appletConfigPropertyChanged(const int & _t1, const QString & _t2, const QVariant & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2, _t3);
}

// SIGNAL 11
void Latte::ViewPart::ContainmentInterface::appletCreated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Latte::ViewPart::ContainmentInterface::appletDataCreated(const int & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Latte::ViewPart::ContainmentInterface::appletDropped(QObject * _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}

// SIGNAL 14
void Latte::ViewPart::ContainmentInterface::containmentConfigPropertyChanged(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void Latte::ViewPart::ContainmentInterface::appletsOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::ViewPart::ContainmentInterface::appletsInLockedZoomChanged(const QList<int> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Latte::ViewPart::ContainmentInterface::appletsDisabledColoringChanged(const QList<int> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void Latte::ViewPart::ContainmentInterface::appletInScheduledDestructionChanged(const int & _t1, const bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1, _t2);
}

// SIGNAL 19
void Latte::ViewPart::ContainmentInterface::appletRequestedVisualIndicator(const int & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}
QT_WARNING_POP
