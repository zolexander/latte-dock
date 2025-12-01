/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/view.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte4ViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::View::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte4ViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::View",
        "eventTriggered",
        "",
        "QEvent*",
        "ev",
        "mousePressed",
        "QPoint",
        "pos",
        "button",
        "mouseReleased",
        "wheelScrolled",
        "angleDelta",
        "buttons",
        "activitiesChanged",
        "alternativesIsShownChanged",
        "alignmentChanged",
        "behaveAsPlasmaPanelChanged",
        "byPassWMChanged",
        "colorizerChanged",
        "configWindowGeometryChanged",
        "containmentActionsChanged",
        "containsDragChanged",
        "dockLocationChanged",
        "editThicknessChanged",
        "effectsChanged",
        "extendedInterfaceChanged",
        "fontPixelSizeChanged",
        "forcedShown",
        "geometryChanged",
        "groupIdChanged",
        "widthChanged",
        "headThicknessGapChanged",
        "heightChanged",
        "inEditModeChanged",
        "indicatorChanged",
        "inSettingsAdvancedModeChanged",
        "interfacesGraphicObjChanged",
        "isPreferredForShortcutsChanged",
        "isTouchingBottomViewAndIsBusyChanged",
        "isTouchingTopViewAndIsBusyChanged",
        "layoutChanged",
        "localGeometryChanged",
        "maxLengthChanged",
        "maxThicknessChanged",
        "metricsChanged",
        "normalThicknessChanged",
        "maxNormalThicknessChanged",
        "nameChanged",
        "offsetChanged",
        "onPrimaryChanged",
        "parabolicChanged",
        "positionerChanged",
        "screenEdgeMarginChanged",
        "screenEdgeMarginEnabledChanged",
        "screenGeometryChanged",
        "sinkChanged",
        "typeChanged",
        "visibilityChanged",
        "windowsTrackerChanged",
        "xChanged",
        "yChanged",
        "absoluteGeometryChanged",
        "QRect",
        "geometry",
        "indicatorPluginChanged",
        "indicatorId",
        "indicatorPluginRemoved",
        "userRequestedViewType",
        "type",
        "availableScreenRectChangedFrom",
        "Latte::View*",
        "origin",
        "availableScreenRegionChangedFrom",
        "newView",
        "templateFile",
        "removeView",
        "duplicateView",
        "exportTemplate",
        "mimeContainsPlasmoid",
        "QMimeData*",
        "mimeData",
        "name",
        "updateAbsoluteGeometry",
        "bypassChecks",
        "isHighestPriorityView",
        "action",
        "QAction*",
        "showConfigurationInterface",
        "Plasma::Applet*",
        "applet",
        "showWidgetExplorer",
        "QPointF",
        "point",
        "applyActivitiesToWindows",
        "availableScreenRectChangedFromSlot",
        "View*",
        "hideWindowsForSlidingOut",
        "preferredViewForShortcutsChangedSlot",
        "view",
        "releaseGrab",
        "reloadSource",
        "updateTransientWindowsTracking",
        "statusChanged",
        "Plasma::Types::ItemStatus",
        "addTransientWindow",
        "QWindow*",
        "window",
        "removeTransientWindow",
        "visible",
        "topViewAlwaysOnTop",
        "verticalUnityViewHasFocus",
        "showHiddenViewFromActivityStopping",
        "restoreConfig",
        "saveConfig",
        "groupId",
        "Latte::Types::ViewType",
        "alternativesIsShown",
        "behaveAsPlasmaPanel",
        "byPassWM",
        "containsDrag",
        "inSettingsAdvancedMode",
        "inEditMode",
        "isPreferredForShortcuts",
        "onPrimary",
        "screenEdgeMarginEnabled",
        "isTouchingBottomViewAndIsBusy",
        "isTouchingTopViewAndIsBusy",
        "alignment",
        "fontPixelSize",
        "x",
        "y",
        "width",
        "height",
        "editThickness",
        "maxThickness",
        "normalThickness",
        "maxNormalThickness",
        "headThicknessGap",
        "screenEdgeMargin",
        "maxLength",
        "offset",
        "colorizer",
        "QQuickItem*",
        "metrics",
        "containmentActions",
        "QVariantList",
        "layout",
        "Latte::Layout::GenericLayout*",
        "effects",
        "Latte::ViewPart::Effects*",
        "extendedInterface",
        "Latte::ViewPart::ContainmentInterface*",
        "indicator",
        "Latte::ViewPart::Indicator*",
        "parabolic",
        "Latte::ViewPart::Parabolic*",
        "positioner",
        "Latte::ViewPart::Positioner*",
        "sink",
        "Latte::ViewPart::EventsSink*",
        "visibility",
        "Latte::ViewPart::VisibilityManager*",
        "windowsTracker",
        "Latte::ViewPart::WindowsTracker*",
        "interfacesGraphicObj",
        "Latte::Interfaces*",
        "absoluteGeometry",
        "localGeometry",
        "screenGeometry"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'eventTriggered'
        QtMocHelpers::SignalData<void(QEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'mousePressed'
        QtMocHelpers::SignalData<void(const QPoint, const int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'mouseReleased'
        QtMocHelpers::SignalData<void(const QPoint, const int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'wheelScrolled'
        QtMocHelpers::SignalData<void(const QPoint, const QPoint, const int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 6, 11 }, { QMetaType::Int, 12 },
        }}),
        // Signal 'activitiesChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alternativesIsShownChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alignmentChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'behaveAsPlasmaPanelChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'byPassWMChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorizerChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configWindowGeometryChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'containmentActionsChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'containsDragChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dockLocationChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editThicknessChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'effectsChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'extendedInterfaceChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontPixelSizeChanged'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'forcedShown'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'geometryChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'groupIdChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'widthChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headThicknessGapChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'heightChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inEditModeChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indicatorChanged'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inSettingsAdvancedModeChanged'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interfacesGraphicObjChanged'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isPreferredForShortcutsChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTouchingBottomViewAndIsBusyChanged'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTouchingTopViewAndIsBusyChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'localGeometryChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxLengthChanged'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxThicknessChanged'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'metricsChanged'
        QtMocHelpers::SignalData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'normalThicknessChanged'
        QtMocHelpers::SignalData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxNormalThicknessChanged'
        QtMocHelpers::SignalData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offsetChanged'
        QtMocHelpers::SignalData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'onPrimaryChanged'
        QtMocHelpers::SignalData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'parabolicChanged'
        QtMocHelpers::SignalData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'positionerChanged'
        QtMocHelpers::SignalData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenEdgeMarginChanged'
        QtMocHelpers::SignalData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenEdgeMarginEnabledChanged'
        QtMocHelpers::SignalData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sinkChanged'
        QtMocHelpers::SignalData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'typeChanged'
        QtMocHelpers::SignalData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visibilityChanged'
        QtMocHelpers::SignalData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowsTrackerChanged'
        QtMocHelpers::SignalData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xChanged'
        QtMocHelpers::SignalData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'yChanged'
        QtMocHelpers::SignalData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'absoluteGeometryChanged'
        QtMocHelpers::SignalData<void(const QRect &)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Signal 'indicatorPluginChanged'
        QtMocHelpers::SignalData<void(const QString &)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 65 },
        }}),
        // Signal 'indicatorPluginRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 65 },
        }}),
        // Signal 'userRequestedViewType'
        QtMocHelpers::SignalData<void(const int &)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 68 },
        }}),
        // Signal 'availableScreenRectChangedFrom'
        QtMocHelpers::SignalData<void(Latte::View *)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 70, 71 },
        }}),
        // Signal 'availableScreenRegionChangedFrom'
        QtMocHelpers::SignalData<void(Latte::View *)>(72, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 70, 71 },
        }}),
        // Slot 'newView'
        QtMocHelpers::SlotData<void(const QString &)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 74 },
        }}),
        // Slot 'removeView'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'duplicateView'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exportTemplate'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mimeContainsPlasmoid'
        QtMocHelpers::SlotData<bool(QMimeData *, QString)>(78, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 79, 80 }, { QMetaType::QString, 81 },
        }}),
        // Slot 'updateAbsoluteGeometry'
        QtMocHelpers::SlotData<void(bool)>(82, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 83 },
        }}),
        // Slot 'updateAbsoluteGeometry'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'isHighestPriorityView'
        QtMocHelpers::SlotData<bool()>(84, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'action'
        QtMocHelpers::SlotData<QAction *(const QString &)>(85, 2, QMC::AccessPublic, 0x80000000 | 86, {{
            { QMetaType::QString, 81 },
        }}),
        // Slot 'showConfigurationInterface'
        QtMocHelpers::SlotData<void(Plasma::Applet *)>(87, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 88, 89 },
        }}),
        // Slot 'showWidgetExplorer'
        QtMocHelpers::SlotData<void(const QPointF &)>(90, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'applyActivitiesToWindows'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'availableScreenRectChangedFromSlot'
        QtMocHelpers::SlotData<void(View *)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 95, 71 },
        }}),
        // Slot 'hideWindowsForSlidingOut'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'preferredViewForShortcutsChangedSlot'
        QtMocHelpers::SlotData<void(Latte::View *)>(97, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 70, 98 },
        }}),
        // Slot 'releaseGrab'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadSource'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTransientWindowsTracking'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statusChanged'
        QtMocHelpers::SlotData<void(Plasma::Types::ItemStatus)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 103, 2 },
        }}),
        // Slot 'addTransientWindow'
        QtMocHelpers::SlotData<void(QWindow *)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 105, 106 },
        }}),
        // Slot 'removeTransientWindow'
        QtMocHelpers::SlotData<void(const bool &)>(107, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 108 },
        }}),
        // Slot 'topViewAlwaysOnTop'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'verticalUnityViewHasFocus'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHiddenViewFromActivityStopping'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreConfig'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'groupId'
        QtMocHelpers::PropertyData<int>(114, QMetaType::Int, QMC::DefaultPropertyFlags, 20),
        // property 'type'
        QtMocHelpers::PropertyData<Latte::Types::ViewType>(68, 0x80000000 | 115, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 47),
        // property 'alternativesIsShown'
        QtMocHelpers::PropertyData<bool>(116, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'behaveAsPlasmaPanel'
        QtMocHelpers::PropertyData<bool>(117, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'byPassWM'
        QtMocHelpers::PropertyData<bool>(118, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'containsDrag'
        QtMocHelpers::PropertyData<bool>(119, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'inSettingsAdvancedMode'
        QtMocHelpers::PropertyData<bool>(120, QMetaType::Bool, QMC::DefaultPropertyFlags, 26),
        // property 'inEditMode'
        QtMocHelpers::PropertyData<bool>(121, QMetaType::Bool, QMC::DefaultPropertyFlags, 24),
        // property 'isPreferredForShortcuts'
        QtMocHelpers::PropertyData<bool>(122, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 28),
        // property 'onPrimary'
        QtMocHelpers::PropertyData<bool>(123, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 40),
        // property 'screenEdgeMarginEnabled'
        QtMocHelpers::PropertyData<bool>(124, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 44),
        // property 'isTouchingBottomViewAndIsBusy'
        QtMocHelpers::PropertyData<bool>(125, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 29),
        // property 'isTouchingTopViewAndIsBusy'
        QtMocHelpers::PropertyData<bool>(126, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 30),
        // property 'alignment'
        QtMocHelpers::PropertyData<int>(127, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'fontPixelSize'
        QtMocHelpers::PropertyData<int>(128, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'x'
        QtMocHelpers::PropertyData<int>(129, QMetaType::Int, QMC::DefaultPropertyFlags, 50),
        // property 'y'
        QtMocHelpers::PropertyData<int>(130, QMetaType::Int, QMC::DefaultPropertyFlags, 51),
        // property 'width'
        QtMocHelpers::PropertyData<int>(131, QMetaType::Int, QMC::DefaultPropertyFlags, 21),
        // property 'height'
        QtMocHelpers::PropertyData<int>(132, QMetaType::Int, QMC::DefaultPropertyFlags, 23),
        // property 'editThickness'
        QtMocHelpers::PropertyData<int>(133, QMetaType::Int, QMC::DefaultPropertyFlags, 14),
        // property 'maxThickness'
        QtMocHelpers::PropertyData<int>(134, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 34),
        // property 'normalThickness'
        QtMocHelpers::PropertyData<int>(135, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 36),
        // property 'maxNormalThickness'
        QtMocHelpers::PropertyData<int>(136, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 37),
        // property 'headThicknessGap'
        QtMocHelpers::PropertyData<int>(137, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 22),
        // property 'screenEdgeMargin'
        QtMocHelpers::PropertyData<int>(138, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 43),
        // property 'maxLength'
        QtMocHelpers::PropertyData<float>(139, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 33),
        // property 'offset'
        QtMocHelpers::PropertyData<float>(140, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 39),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(81, QMetaType::QString, QMC::DefaultPropertyFlags, 38),
        // property 'colorizer'
        QtMocHelpers::PropertyData<QQuickItem*>(141, 0x80000000 | 142, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'metrics'
        QtMocHelpers::PropertyData<QQuickItem*>(143, 0x80000000 | 142, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 35),
        // property 'containmentActions'
        QtMocHelpers::PropertyData<QVariantList>(144, 0x80000000 | 145, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
        // property 'layout'
        QtMocHelpers::PropertyData<Latte::Layout::GenericLayout*>(146, 0x80000000 | 147, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 31),
        // property 'effects'
        QtMocHelpers::PropertyData<Latte::ViewPart::Effects*>(148, 0x80000000 | 149, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 15),
        // property 'extendedInterface'
        QtMocHelpers::PropertyData<Latte::ViewPart::ContainmentInterface*>(150, 0x80000000 | 151, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 16),
        // property 'indicator'
        QtMocHelpers::PropertyData<Latte::ViewPart::Indicator*>(152, 0x80000000 | 153, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 25),
        // property 'parabolic'
        QtMocHelpers::PropertyData<Latte::ViewPart::Parabolic*>(154, 0x80000000 | 155, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 41),
        // property 'positioner'
        QtMocHelpers::PropertyData<Latte::ViewPart::Positioner*>(156, 0x80000000 | 157, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 42),
        // property 'sink'
        QtMocHelpers::PropertyData<Latte::ViewPart::EventsSink*>(158, 0x80000000 | 159, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 46),
        // property 'visibility'
        QtMocHelpers::PropertyData<Latte::ViewPart::VisibilityManager*>(160, 0x80000000 | 161, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 48),
        // property 'windowsTracker'
        QtMocHelpers::PropertyData<Latte::ViewPart::WindowsTracker*>(162, 0x80000000 | 163, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 49),
        // property 'interfacesGraphicObj'
        QtMocHelpers::PropertyData<Latte::Interfaces*>(164, 0x80000000 | 165, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 27),
        // property 'absoluteGeometry'
        QtMocHelpers::PropertyData<QRect>(166, 0x80000000 | 62, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 52),
        // property 'localGeometry'
        QtMocHelpers::PropertyData<QRect>(167, 0x80000000 | 62, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 32),
        // property 'screenGeometry'
        QtMocHelpers::PropertyData<QRect>(168, 0x80000000 | 62, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 45),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<View, qt_meta_tag_ZN5Latte4ViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte4ViewE[] = {
    QMetaObject::SuperData::link<Latte::Types::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::View::staticMetaObject = { {
    QMetaObject::SuperData::link<PlasmaQuick::ContainmentView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte4ViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte4ViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte4ViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte4ViewE_t>.metaTypes,
    nullptr
} };

void Latte::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<View *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->eventTriggered((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 1: _t->mousePressed((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->wheelScrolled((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->activitiesChanged(); break;
        case 5: _t->alternativesIsShownChanged(); break;
        case 6: _t->alignmentChanged(); break;
        case 7: _t->behaveAsPlasmaPanelChanged(); break;
        case 8: _t->byPassWMChanged(); break;
        case 9: _t->colorizerChanged(); break;
        case 10: _t->configWindowGeometryChanged(); break;
        case 11: _t->containmentActionsChanged(); break;
        case 12: _t->containsDragChanged(); break;
        case 13: _t->dockLocationChanged(); break;
        case 14: _t->editThicknessChanged(); break;
        case 15: _t->effectsChanged(); break;
        case 16: _t->extendedInterfaceChanged(); break;
        case 17: _t->fontPixelSizeChanged(); break;
        case 18: _t->forcedShown(); break;
        case 19: _t->geometryChanged(); break;
        case 20: _t->groupIdChanged(); break;
        case 21: _t->widthChanged(); break;
        case 22: _t->headThicknessGapChanged(); break;
        case 23: _t->heightChanged(); break;
        case 24: _t->inEditModeChanged(); break;
        case 25: _t->indicatorChanged(); break;
        case 26: _t->inSettingsAdvancedModeChanged(); break;
        case 27: _t->interfacesGraphicObjChanged(); break;
        case 28: _t->isPreferredForShortcutsChanged(); break;
        case 29: _t->isTouchingBottomViewAndIsBusyChanged(); break;
        case 30: _t->isTouchingTopViewAndIsBusyChanged(); break;
        case 31: _t->layoutChanged(); break;
        case 32: _t->localGeometryChanged(); break;
        case 33: _t->maxLengthChanged(); break;
        case 34: _t->maxThicknessChanged(); break;
        case 35: _t->metricsChanged(); break;
        case 36: _t->normalThicknessChanged(); break;
        case 37: _t->maxNormalThicknessChanged(); break;
        case 38: _t->nameChanged(); break;
        case 39: _t->offsetChanged(); break;
        case 40: _t->onPrimaryChanged(); break;
        case 41: _t->parabolicChanged(); break;
        case 42: _t->positionerChanged(); break;
        case 43: _t->screenEdgeMarginChanged(); break;
        case 44: _t->screenEdgeMarginEnabledChanged(); break;
        case 45: _t->screenGeometryChanged(); break;
        case 46: _t->sinkChanged(); break;
        case 47: _t->typeChanged(); break;
        case 48: _t->visibilityChanged(); break;
        case 49: _t->windowsTrackerChanged(); break;
        case 50: _t->xChanged(); break;
        case 51: _t->yChanged(); break;
        case 52: _t->absoluteGeometryChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 53: _t->indicatorPluginChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 54: _t->indicatorPluginRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->userRequestedViewType((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 56: _t->availableScreenRectChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 57: _t->availableScreenRegionChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 58: _t->newView((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 59: _t->removeView(); break;
        case 60: _t->duplicateView(); break;
        case 61: _t->exportTemplate(); break;
        case 62: { bool _r = _t->mimeContainsPlasmoid((*reinterpret_cast<std::add_pointer_t<QMimeData*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->updateAbsoluteGeometry((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 64: _t->updateAbsoluteGeometry(); break;
        case 65: { bool _r = _t->isHighestPriorityView();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 66: { QAction* _r = _t->action((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QAction**>(_a[0]) = std::move(_r); }  break;
        case 67: _t->showConfigurationInterface((*reinterpret_cast<std::add_pointer_t<Plasma::Applet*>>(_a[1]))); break;
        case 68: _t->showWidgetExplorer((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 69: _t->applyActivitiesToWindows(); break;
        case 70: _t->availableScreenRectChangedFromSlot((*reinterpret_cast<std::add_pointer_t<View*>>(_a[1]))); break;
        case 71: _t->hideWindowsForSlidingOut(); break;
        case 72: _t->preferredViewForShortcutsChangedSlot((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 73: _t->releaseGrab(); break;
        case 74: _t->reloadSource(); break;
        case 75: _t->updateTransientWindowsTracking(); break;
        case 76: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<Plasma::Types::ItemStatus>>(_a[1]))); break;
        case 77: _t->addTransientWindow((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 78: _t->removeTransientWindow((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 79: _t->topViewAlwaysOnTop(); break;
        case 80: _t->verticalUnityViewHasFocus(); break;
        case 81: _t->showHiddenViewFromActivityStopping(); break;
        case 82: _t->restoreConfig(); break;
        case 83: _t->saveConfig(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Latte::View* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Latte::View* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMimeData* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Plasma::Applet* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< View* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Latte::View* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (View::*)(QEvent * )>(_a, &View::eventTriggered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QPoint , const int )>(_a, &View::mousePressed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QPoint , const int )>(_a, &View::mouseReleased, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QPoint , const QPoint , const int )>(_a, &View::wheelScrolled, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::activitiesChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::alternativesIsShownChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::alignmentChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::behaveAsPlasmaPanelChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::byPassWMChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::colorizerChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::configWindowGeometryChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::containmentActionsChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::containsDragChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::dockLocationChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::editThicknessChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::effectsChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::extendedInterfaceChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::fontPixelSizeChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::forcedShown, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::geometryChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::groupIdChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::widthChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::headThicknessGapChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::heightChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::inEditModeChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::indicatorChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::inSettingsAdvancedModeChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::interfacesGraphicObjChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::isPreferredForShortcutsChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::isTouchingBottomViewAndIsBusyChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::isTouchingTopViewAndIsBusyChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::layoutChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::localGeometryChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::maxLengthChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::maxThicknessChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::metricsChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::normalThicknessChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::maxNormalThicknessChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::nameChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::offsetChanged, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::onPrimaryChanged, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::parabolicChanged, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::positionerChanged, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::screenEdgeMarginChanged, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::screenEdgeMarginEnabledChanged, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::screenGeometryChanged, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::sinkChanged, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::typeChanged, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::visibilityChanged, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::windowsTrackerChanged, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::xChanged, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)()>(_a, &View::yChanged, 51))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QRect & )>(_a, &View::absoluteGeometryChanged, 52))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QString & )>(_a, &View::indicatorPluginChanged, 53))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const QString & )>(_a, &View::indicatorPluginRemoved, 54))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(const int & )>(_a, &View::userRequestedViewType, 55))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(Latte::View * )>(_a, &View::availableScreenRectChangedFrom, 56))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(Latte::View * )>(_a, &View::availableScreenRegionChangedFrom, 57))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::Layout::GenericLayout* >(); break;
        case 33:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::ContainmentInterface* >(); break;
        case 32:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Effects* >(); break;
        case 37:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::EventsSink* >(); break;
        case 34:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Indicator* >(); break;
        case 35:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Parabolic* >(); break;
        case 36:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Positioner* >(); break;
        case 38:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::VisibilityManager* >(); break;
        case 39:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::WindowsTracker* >(); break;
        case 29:
        case 28:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->groupId(); break;
        case 1: *reinterpret_cast<Latte::Types::ViewType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->alternativesIsShown(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->behaveAsPlasmaPanel(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->byPassWM(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->containsDrag(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->inSettingsAdvancedMode(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->inEditMode(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isPreferredForShortcuts(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->onPrimary(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->screenEdgeMarginEnabled(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isTouchingBottomViewAndIsBusy(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isTouchingTopViewAndIsBusy(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->alignment(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->fontPixelSize(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->x(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->y(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 18: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 19: *reinterpret_cast<int*>(_v) = _t->editThickness(); break;
        case 20: *reinterpret_cast<int*>(_v) = _t->maxThickness(); break;
        case 21: *reinterpret_cast<int*>(_v) = _t->normalThickness(); break;
        case 22: *reinterpret_cast<int*>(_v) = _t->maxNormalThickness(); break;
        case 23: *reinterpret_cast<int*>(_v) = _t->headThicknessGap(); break;
        case 24: *reinterpret_cast<int*>(_v) = _t->screenEdgeMargin(); break;
        case 25: *reinterpret_cast<float*>(_v) = _t->maxLength(); break;
        case 26: *reinterpret_cast<float*>(_v) = _t->offset(); break;
        case 27: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 28: *reinterpret_cast<QQuickItem**>(_v) = _t->colorizer(); break;
        case 29: *reinterpret_cast<QQuickItem**>(_v) = _t->metrics(); break;
        case 30: *reinterpret_cast<QVariantList*>(_v) = _t->containmentActions(); break;
        case 31: *reinterpret_cast<Latte::Layout::GenericLayout**>(_v) = _t->layout(); break;
        case 32: *reinterpret_cast<Latte::ViewPart::Effects**>(_v) = _t->effects(); break;
        case 33: *reinterpret_cast<Latte::ViewPart::ContainmentInterface**>(_v) = _t->extendedInterface(); break;
        case 34: *reinterpret_cast<Latte::ViewPart::Indicator**>(_v) = _t->indicator(); break;
        case 35: *reinterpret_cast<Latte::ViewPart::Parabolic**>(_v) = _t->parabolic(); break;
        case 36: *reinterpret_cast<Latte::ViewPart::Positioner**>(_v) = _t->positioner(); break;
        case 37: *reinterpret_cast<Latte::ViewPart::EventsSink**>(_v) = _t->sink(); break;
        case 38: *reinterpret_cast<Latte::ViewPart::VisibilityManager**>(_v) = _t->visibility(); break;
        case 39: *reinterpret_cast<Latte::ViewPart::WindowsTracker**>(_v) = _t->windowsTracker(); break;
        case 40: *reinterpret_cast<Latte::Interfaces**>(_v) = _t->interfacesGraphicObj(); break;
        case 41: *reinterpret_cast<QRect*>(_v) = _t->absoluteGeometry(); break;
        case 42: *reinterpret_cast<QRect*>(_v) = _t->localGeometry(); break;
        case 43: *reinterpret_cast<QRect*>(_v) = _t->screenGeometry(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setType(*reinterpret_cast<Latte::Types::ViewType*>(_v)); break;
        case 3: _t->setBehaveAsPlasmaPanel(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setByPassWM(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setIsPreferredForShortcuts(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setOnPrimary(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setScreenEdgeMarginEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setIsTouchingBottomViewAndIsBusy(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setIsTouchingTopViewAndIsBusy(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setAlignment(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setFontPixelSize(*reinterpret_cast<int*>(_v)); break;
        case 20: _t->setMaxThickness(*reinterpret_cast<int*>(_v)); break;
        case 21: _t->setNormalThickness(*reinterpret_cast<int*>(_v)); break;
        case 22: _t->setMaxNormalThickness(*reinterpret_cast<int*>(_v)); break;
        case 23: _t->setHeadThicknessGap(*reinterpret_cast<int*>(_v)); break;
        case 24: _t->setScreenEdgeMargin(*reinterpret_cast<int*>(_v)); break;
        case 25: _t->setMaxLength(*reinterpret_cast<float*>(_v)); break;
        case 26: _t->setOffset(*reinterpret_cast<float*>(_v)); break;
        case 28: _t->setColorizer(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 29: _t->setMetrics(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 31: _t->setLayout(*reinterpret_cast<Latte::Layout::GenericLayout**>(_v)); break;
        case 40: _t->setInterfacesGraphicObj(*reinterpret_cast<Latte::Interfaces**>(_v)); break;
        case 42: _t->setLocalGeometry(*reinterpret_cast<QRect*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte4ViewE_t>.strings))
        return static_cast<void*>(this);
    return PlasmaQuick::ContainmentView::qt_metacast(_clname);
}

int Latte::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlasmaQuick::ContainmentView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void Latte::View::eventTriggered(QEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::View::mousePressed(const QPoint _t1, const int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void Latte::View::mouseReleased(const QPoint _t1, const int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void Latte::View::wheelScrolled(const QPoint _t1, const QPoint _t2, const int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void Latte::View::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::View::alternativesIsShownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::View::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::View::behaveAsPlasmaPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::View::byPassWMChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::View::colorizerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::View::configWindowGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::View::containmentActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::View::containsDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::View::dockLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::View::editThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::View::effectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::View::extendedInterfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::View::fontPixelSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::View::forcedShown()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Latte::View::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Latte::View::groupIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Latte::View::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Latte::View::headThicknessGapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Latte::View::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Latte::View::inEditModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Latte::View::indicatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Latte::View::inSettingsAdvancedModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Latte::View::interfacesGraphicObjChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Latte::View::isPreferredForShortcutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Latte::View::isTouchingBottomViewAndIsBusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Latte::View::isTouchingTopViewAndIsBusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Latte::View::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Latte::View::localGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Latte::View::maxLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Latte::View::maxThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void Latte::View::metricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Latte::View::normalThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Latte::View::maxNormalThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Latte::View::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void Latte::View::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void Latte::View::onPrimaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void Latte::View::parabolicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void Latte::View::positionerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void Latte::View::screenEdgeMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void Latte::View::screenEdgeMarginEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void Latte::View::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void Latte::View::sinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void Latte::View::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void Latte::View::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void Latte::View::windowsTrackerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void Latte::View::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void Latte::View::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 51, nullptr);
}

// SIGNAL 52
void Latte::View::absoluteGeometryChanged(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 52, nullptr, _t1);
}

// SIGNAL 53
void Latte::View::indicatorPluginChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 53, nullptr, _t1);
}

// SIGNAL 54
void Latte::View::indicatorPluginRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 54, nullptr, _t1);
}

// SIGNAL 55
void Latte::View::userRequestedViewType(const int & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 55, nullptr, _t1);
}

// SIGNAL 56
void Latte::View::availableScreenRectChangedFrom(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 56, nullptr, _t1);
}

// SIGNAL 57
void Latte::View::availableScreenRegionChangedFrom(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 57, nullptr, _t1);
}
QT_WARNING_POP
