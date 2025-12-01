/****************************************************************************
** Meta object code from reading C++ file 'types.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plasmoid/plugin/types.h"
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
struct qt_meta_tag_ZN5Latte5Tasks5TypesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Tasks::Types::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte5Tasks5TypesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Tasks::Types",
        "Modifier",
        "Shift",
        "Ctrl",
        "Alt",
        "Meta",
        "ClickAction",
        "LeftClick",
        "MiddleClick",
        "RightClick",
        "TaskAction",
        "NoneAction",
        "Close",
        "NewInstance",
        "ToggleMinimized",
        "CycleThroughTasks",
        "ToggleGrouping",
        "PresentWindows",
        "PreviewWindows",
        "HighlightWindows",
        "PreviewAndHighlightWindows",
        "TaskScrollAction",
        "ScrollNone",
        "ScrollTasks",
        "ScrollToggleMinimized",
        "ManualScrollType",
        "ManualScrollDisabled",
        "ManualScrollOnlyParallel",
        "ManualScrollVerticalHorizontal"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Modifier'
        QtMocHelpers::EnumData<enum Modifier>(1, 1, QMC::EnumFlags{}).add({
            {    2, Modifier::Shift },
            {    3, Modifier::Ctrl },
            {    4, Modifier::Alt },
            {    5, Modifier::Meta },
        }),
        // enum 'ClickAction'
        QtMocHelpers::EnumData<enum ClickAction>(6, 6, QMC::EnumFlags{}).add({
            {    7, ClickAction::LeftClick },
            {    8, ClickAction::MiddleClick },
            {    9, ClickAction::RightClick },
        }),
        // enum 'TaskAction'
        QtMocHelpers::EnumData<enum TaskAction>(10, 10, QMC::EnumFlags{}).add({
            {   11, TaskAction::NoneAction },
            {   12, TaskAction::Close },
            {   13, TaskAction::NewInstance },
            {   14, TaskAction::ToggleMinimized },
            {   15, TaskAction::CycleThroughTasks },
            {   16, TaskAction::ToggleGrouping },
            {   17, TaskAction::PresentWindows },
            {   18, TaskAction::PreviewWindows },
            {   19, TaskAction::HighlightWindows },
            {   20, TaskAction::PreviewAndHighlightWindows },
        }),
        // enum 'TaskScrollAction'
        QtMocHelpers::EnumData<enum TaskScrollAction>(21, 21, QMC::EnumFlags{}).add({
            {   22, TaskScrollAction::ScrollNone },
            {   23, TaskScrollAction::ScrollTasks },
            {   24, TaskScrollAction::ScrollToggleMinimized },
        }),
        // enum 'ManualScrollType'
        QtMocHelpers::EnumData<enum ManualScrollType>(25, 25, QMC::EnumFlags{}).add({
            {   26, ManualScrollType::ManualScrollDisabled },
            {   27, ManualScrollType::ManualScrollOnlyParallel },
            {   28, ManualScrollType::ManualScrollVerticalHorizontal },
        }),
    };
    return QtMocHelpers::metaObjectData<Types, qt_meta_tag_ZN5Latte5Tasks5TypesE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Tasks::Types::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5Tasks5TypesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5Tasks5TypesE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte5Tasks5TypesE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
