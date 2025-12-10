/****************************************************************************
** Meta object code from reading C++ file 'types.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../types.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'types.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte5TypesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Types::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte5TypesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Types",
        "ViewType",
        "DockView",
        "PanelView",
        "Visibility",
        "None",
        "AlwaysVisible",
        "AutoHide",
        "DodgeActive",
        "DodgeMaximized",
        "DodgeAllWindows",
        "WindowsGoBelow",
        "WindowsCanCover",
        "WindowsAlwaysCover",
        "SidebarOnDemand",
        "SidebarAutoHide",
        "NormalWindow",
        "Alignment",
        "NoneAlignment",
        "Center",
        "Left",
        "Right",
        "Top",
        "Bottom",
        "Justify",
        "EdgesAndAlignments",
        "BottomEdgeCenterAlign",
        "BottomEdgeLeftAlign",
        "BottomEdgeRightAlign",
        "TopEdgeCenterAlign",
        "TopEdgeLeftAlign",
        "TopEdgeRightAlign",
        "LeftEdgeCenterAlign",
        "LeftEdgeTopAlign",
        "LeftEdgeBottomAlign",
        "RightEdgeCenterAlign",
        "RightEdgeTopAlign",
        "RightEdgeBottomAlign",
        "LaunchersGroup",
        "UniqueLaunchers",
        "LayoutLaunchers",
        "GlobalLaunchers",
        "ScreensGroup",
        "SingleScreenGroup",
        "AllScreensGroup",
        "AllSecondaryScreensGroup"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ViewType'
        QtMocHelpers::EnumData<enum ViewType>(1, 1, QMC::EnumFlags{}).add({
            {    2, ViewType::DockView },
            {    3, ViewType::PanelView },
        }),
        // enum 'Visibility'
        QtMocHelpers::EnumData<enum Visibility>(4, 4, QMC::EnumFlags{}).add({
            {    5, Visibility::None },
            {    6, Visibility::AlwaysVisible },
            {    7, Visibility::AutoHide },
            {    8, Visibility::DodgeActive },
            {    9, Visibility::DodgeMaximized },
            {   10, Visibility::DodgeAllWindows },
            {   11, Visibility::WindowsGoBelow },
            {   12, Visibility::WindowsCanCover },
            {   13, Visibility::WindowsAlwaysCover },
            {   14, Visibility::SidebarOnDemand },
            {   15, Visibility::SidebarAutoHide },
            {   16, Visibility::NormalWindow },
        }),
        // enum 'Alignment'
        QtMocHelpers::EnumData<enum Alignment>(17, 17, QMC::EnumFlags{}).add({
            {   18, Alignment::NoneAlignment },
            {   19, Alignment::Center },
            {   20, Alignment::Left },
            {   21, Alignment::Right },
            {   22, Alignment::Top },
            {   23, Alignment::Bottom },
            {   24, Alignment::Justify },
        }),
        // enum 'EdgesAndAlignments'
        QtMocHelpers::EnumData<enum EdgesAndAlignments>(25, 25, QMC::EnumFlags{}).add({
            {   26, EdgesAndAlignments::BottomEdgeCenterAlign },
            {   27, EdgesAndAlignments::BottomEdgeLeftAlign },
            {   28, EdgesAndAlignments::BottomEdgeRightAlign },
            {   29, EdgesAndAlignments::TopEdgeCenterAlign },
            {   30, EdgesAndAlignments::TopEdgeLeftAlign },
            {   31, EdgesAndAlignments::TopEdgeRightAlign },
            {   32, EdgesAndAlignments::LeftEdgeCenterAlign },
            {   33, EdgesAndAlignments::LeftEdgeTopAlign },
            {   34, EdgesAndAlignments::LeftEdgeBottomAlign },
            {   35, EdgesAndAlignments::RightEdgeCenterAlign },
            {   36, EdgesAndAlignments::RightEdgeTopAlign },
            {   37, EdgesAndAlignments::RightEdgeBottomAlign },
        }),
        // enum 'LaunchersGroup'
        QtMocHelpers::EnumData<enum LaunchersGroup>(38, 38, QMC::EnumFlags{}).add({
            {   39, LaunchersGroup::UniqueLaunchers },
            {   40, LaunchersGroup::LayoutLaunchers },
            {   41, LaunchersGroup::GlobalLaunchers },
        }),
        // enum 'ScreensGroup'
        QtMocHelpers::EnumData<enum ScreensGroup>(42, 42, QMC::EnumFlags{}).add({
            {   43, ScreensGroup::SingleScreenGroup },
            {   44, ScreensGroup::AllScreensGroup },
            {   45, ScreensGroup::AllSecondaryScreensGroup },
        }),
    };
    return QtMocHelpers::metaObjectData<Types, qt_meta_tag_ZN5Latte5TypesE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Types::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5TypesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5TypesE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte5TypesE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
