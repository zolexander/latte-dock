/****************************************************************************
** Meta object code from reading C++ file 'layoutmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../containment/plugin/layoutmanager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layoutmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Containment::LayoutManager::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Containment::LayoutManager",
        "appletOrderChanged",
        "",
        "appletsInScheduledDestructionChanged",
        "hasRestoredAppletsChanged",
        "plasmoidChanged",
        "rootItemChanged",
        "dndSpacerChanged",
        "lockedZoomAppletsChanged",
        "userBlocksColorizingAppletsChanged",
        "mainLayoutChanged",
        "metricsChanged",
        "orderChanged",
        "splitterPositionChanged",
        "splitterPosition2Changed",
        "startLayoutChanged",
        "endLayoutChanged",
        "restore",
        "save",
        "saveOptions",
        "setOption",
        "appletId",
        "property",
        "QVariant",
        "value",
        "addAppletItem",
        "applet",
        "x",
        "y",
        "index",
        "removeAppletItem",
        "addJustifySplittersInMainLayout",
        "moveAppletsBasedOnJustifyAlignment",
        "joinLayoutsToMainLayout",
        "insertBefore",
        "QQuickItem*",
        "hoveredItem",
        "item",
        "insertAfter",
        "insertAtCoordinates",
        "visualAppletFor",
        "appletObj",
        "dndSpacerIndex",
        "isMasqueradedIndex",
        "masquearadedIndex",
        "indexToMasquearadedPoint",
        "QPoint",
        "requestAppletsOrder",
        "QList<int>",
        "order",
        "requestAppletsInLockedZoom",
        "applets",
        "requestAppletsDisabledColoring",
        "setAppletInScheduledDestruction",
        "id",
        "enabled",
        "onRootItemChanged",
        "destroyJustifySplitters",
        "updateOrder",
        "cleanupOptions",
        "reorderParabolicSpacers",
        "plasmoidObj",
        "rootItem",
        "mainLayout",
        "startLayout",
        "endLayout",
        "dndSpacerItem",
        "metrics",
        "hasRestoredApplets",
        "splitterPosition",
        "splitterPosition2",
        "appletOrder",
        "lockedZoomApplets",
        "userBlocksColorizingApplets",
        "appletsInScheduledDestruction"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appletOrderChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appletsInScheduledDestructionChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasRestoredAppletsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'plasmoidChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rootItemChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dndSpacerChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockedZoomAppletsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'userBlocksColorizingAppletsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mainLayoutChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'metricsChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'orderChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'splitterPositionChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'splitterPosition2Changed'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startLayoutChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'endLayoutChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'restore'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveOptions'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const int &, const QString &, const QVariant &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 }, { QMetaType::QString, 22 }, { 0x80000000 | 23, 24 },
        }}),
        // Slot 'addAppletItem'
        QtMocHelpers::SlotData<void(QObject *, int, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 27 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'addAppletItem'
        QtMocHelpers::SlotData<void(QObject *, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 29 },
        }}),
        // Slot 'removeAppletItem'
        QtMocHelpers::SlotData<void(QObject *)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 26 },
        }}),
        // Slot 'addJustifySplittersInMainLayout'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveAppletsBasedOnJustifyAlignment'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'joinLayoutsToMainLayout'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'insertBefore'
        QtMocHelpers::SlotData<void(QQuickItem *, QQuickItem *)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 35, 37 },
        }}),
        // Slot 'insertAfter'
        QtMocHelpers::SlotData<void(QQuickItem *, QQuickItem *)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 35, 37 },
        }}),
        // Slot 'insertAtCoordinates'
        QtMocHelpers::SlotData<void(QQuickItem *, const int &, const int &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 37 }, { QMetaType::Int, 27 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'visualAppletFor'
        QtMocHelpers::SlotData<QObject *(QObject *) const>(40, 2, QMC::AccessPublic, QMetaType::QObjectStar, {{
            { QMetaType::QObjectStar, 41 },
        }}),
        // Slot 'dndSpacerIndex'
        QtMocHelpers::SlotData<int()>(42, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'isMasqueradedIndex'
        QtMocHelpers::SlotData<bool(const int &, const int &)>(43, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 27 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'masquearadedIndex'
        QtMocHelpers::SlotData<int(const int &, const int &)>(44, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 27 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'indexToMasquearadedPoint'
        QtMocHelpers::SlotData<QPoint(const int &)>(45, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'requestAppletsOrder'
        QtMocHelpers::SlotData<void(const QList<int> &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'requestAppletsInLockedZoom'
        QtMocHelpers::SlotData<void(const QList<int> &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 51 },
        }}),
        // Slot 'requestAppletsDisabledColoring'
        QtMocHelpers::SlotData<void(const QList<int> &)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 51 },
        }}),
        // Slot 'setAppletInScheduledDestruction'
        QtMocHelpers::SlotData<void(const int &, const bool &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 54 }, { QMetaType::Bool, 55 },
        }}),
        // Slot 'onRootItemChanged'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'destroyJustifySplitters'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateOrder'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanupOptions'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reorderParabolicSpacers'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'plasmoidObj'
        QtMocHelpers::PropertyData<QObject*>(61, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable, 3),
        // property 'rootItem'
        QtMocHelpers::PropertyData<QQuickItem*>(62, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'mainLayout'
        QtMocHelpers::PropertyData<QQuickItem*>(63, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'startLayout'
        QtMocHelpers::PropertyData<QQuickItem*>(64, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 13),
        // property 'endLayout'
        QtMocHelpers::PropertyData<QQuickItem*>(65, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
        // property 'dndSpacerItem'
        QtMocHelpers::PropertyData<QQuickItem*>(66, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 5),
        // property 'metrics'
        QtMocHelpers::PropertyData<QQuickItem*>(67, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'hasRestoredApplets'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'splitterPosition'
        QtMocHelpers::PropertyData<int>(69, QMetaType::Int, QMC::DefaultPropertyFlags, 11),
        // property 'splitterPosition2'
        QtMocHelpers::PropertyData<int>(70, QMetaType::Int, QMC::DefaultPropertyFlags, 12),
        // property 'appletOrder'
        QtMocHelpers::PropertyData<QList<int>>(71, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'order'
        QtMocHelpers::PropertyData<QList<int>>(49, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 10),
        // property 'lockedZoomApplets'
        QtMocHelpers::PropertyData<QList<int>>(72, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 6),
        // property 'userBlocksColorizingApplets'
        QtMocHelpers::PropertyData<QList<int>>(73, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 7),
        // property 'appletsInScheduledDestruction'
        QtMocHelpers::PropertyData<QList<int>>(74, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayoutManager, qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Containment::LayoutManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>.metaTypes,
    nullptr
} };

void Latte::Containment::LayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayoutManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appletOrderChanged(); break;
        case 1: _t->appletsInScheduledDestructionChanged(); break;
        case 2: _t->hasRestoredAppletsChanged(); break;
        case 3: _t->plasmoidChanged(); break;
        case 4: _t->rootItemChanged(); break;
        case 5: _t->dndSpacerChanged(); break;
        case 6: _t->lockedZoomAppletsChanged(); break;
        case 7: _t->userBlocksColorizingAppletsChanged(); break;
        case 8: _t->mainLayoutChanged(); break;
        case 9: _t->metricsChanged(); break;
        case 10: _t->orderChanged(); break;
        case 11: _t->splitterPositionChanged(); break;
        case 12: _t->splitterPosition2Changed(); break;
        case 13: _t->startLayoutChanged(); break;
        case 14: _t->endLayoutChanged(); break;
        case 15: _t->restore(); break;
        case 16: _t->save(); break;
        case 17: _t->saveOptions(); break;
        case 18: _t->setOption((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 19: _t->addAppletItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 20: _t->addAppletItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->removeAppletItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 22: _t->addJustifySplittersInMainLayout(); break;
        case 23: _t->moveAppletsBasedOnJustifyAlignment(); break;
        case 24: _t->joinLayoutsToMainLayout(); break;
        case 25: _t->insertBefore((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 26: _t->insertAfter((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 27: _t->insertAtCoordinates((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 28: { QObject* _r = _t->visualAppletFor((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = std::move(_r); }  break;
        case 29: { int _r = _t->dndSpacerIndex();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->isMasqueradedIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { int _r = _t->masquearadedIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 32: { QPoint _r = _t->indexToMasquearadedPoint((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPoint*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->requestAppletsOrder((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 34: _t->requestAppletsInLockedZoom((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 35: _t->requestAppletsDisabledColoring((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 36: _t->setAppletInScheduledDestruction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 37: _t->onRootItemChanged(); break;
        case 38: _t->destroyJustifySplitters(); break;
        case 39: _t->updateOrder(); break;
        case 40: _t->cleanupOptions(); break;
        case 41: _t->reorderParabolicSpacers(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::appletOrderChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::appletsInScheduledDestructionChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::hasRestoredAppletsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::plasmoidChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::rootItemChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::dndSpacerChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::lockedZoomAppletsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::userBlocksColorizingAppletsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::mainLayoutChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::metricsChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::orderChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::splitterPositionChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::splitterPosition2Changed, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::startLayoutChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayoutManager::*)()>(_a, &LayoutManager::endLayoutChanged, 14))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QObject**>(_v) = _t->plasmoid(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->rootItem(); break;
        case 2: *reinterpret_cast<QQuickItem**>(_v) = _t->mainLayout(); break;
        case 3: *reinterpret_cast<QQuickItem**>(_v) = _t->startLayout(); break;
        case 4: *reinterpret_cast<QQuickItem**>(_v) = _t->endLayout(); break;
        case 5: *reinterpret_cast<QQuickItem**>(_v) = _t->dndSpacer(); break;
        case 6: *reinterpret_cast<QQuickItem**>(_v) = _t->metrics(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasRestoredApplets(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->splitterPosition(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->splitterPosition2(); break;
        case 10: *reinterpret_cast<QList<int>*>(_v) = _t->appletOrder(); break;
        case 11: *reinterpret_cast<QList<int>*>(_v) = _t->order(); break;
        case 12: *reinterpret_cast<QList<int>*>(_v) = _t->lockedZoomApplets(); break;
        case 13: *reinterpret_cast<QList<int>*>(_v) = _t->userBlocksColorizingApplets(); break;
        case 14: *reinterpret_cast<QList<int>*>(_v) = _t->appletsInScheduledDestruction(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlasmoid(*reinterpret_cast<QObject**>(_v)); break;
        case 1: _t->setRootItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 2: _t->setMainLayout(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 3: _t->setStartLayout(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 4: _t->setEndLayout(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 5: _t->setDndSpacer(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 6: _t->setMetrics(*reinterpret_cast<QQuickItem**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Containment::LayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Containment::LayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11Containment13LayoutManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Containment::LayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
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
void Latte::Containment::LayoutManager::appletOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Containment::LayoutManager::appletsInScheduledDestructionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Containment::LayoutManager::hasRestoredAppletsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Containment::LayoutManager::plasmoidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Containment::LayoutManager::rootItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Containment::LayoutManager::dndSpacerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::Containment::LayoutManager::lockedZoomAppletsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::Containment::LayoutManager::userBlocksColorizingAppletsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::Containment::LayoutManager::mainLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::Containment::LayoutManager::metricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::Containment::LayoutManager::orderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::Containment::LayoutManager::splitterPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::Containment::LayoutManager::splitterPosition2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::Containment::LayoutManager::startLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::Containment::LayoutManager::endLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
