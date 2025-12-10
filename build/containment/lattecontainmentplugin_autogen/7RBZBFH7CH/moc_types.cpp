/****************************************************************************
** Meta object code from reading C++ file 'types.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../containment/plugin/types.h"
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
struct qt_meta_tag_ZN5Latte11Containment5TypesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Containment::Types::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte11Containment5TypesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Containment::Types",
        "ScrollAction",
        "ScrollNone",
        "ScrollDesktops",
        "ScrollActivities",
        "ScrollTasks",
        "ScrollToggleMinimized",
        "ShadowColorGroup",
        "DefaultColorShadow",
        "ThemeColorShadow",
        "UserColorShadow",
        "ThemeColorsGroup",
        "PlasmaThemeColors",
        "ReverseThemeColors",
        "SmartThemeColors",
        "DarkThemeColors",
        "LightThemeColors",
        "LayoutThemeColors",
        "WindowColorsGroup",
        "NoneWindowColors",
        "ActiveWindowColors",
        "TouchingWindowColors",
        "ActiveWindowFilterGroup",
        "ActiveInCurrentScreen",
        "ActiveFromAllScreens"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ScrollAction'
        QtMocHelpers::EnumData<enum ScrollAction>(1, 1, QMC::EnumFlags{}).add({
            {    2, ScrollAction::ScrollNone },
            {    3, ScrollAction::ScrollDesktops },
            {    4, ScrollAction::ScrollActivities },
            {    5, ScrollAction::ScrollTasks },
            {    6, ScrollAction::ScrollToggleMinimized },
        }),
        // enum 'ShadowColorGroup'
        QtMocHelpers::EnumData<enum ShadowColorGroup>(7, 7, QMC::EnumFlags{}).add({
            {    8, ShadowColorGroup::DefaultColorShadow },
            {    9, ShadowColorGroup::ThemeColorShadow },
            {   10, ShadowColorGroup::UserColorShadow },
        }),
        // enum 'ThemeColorsGroup'
        QtMocHelpers::EnumData<enum ThemeColorsGroup>(11, 11, QMC::EnumFlags{}).add({
            {   12, ThemeColorsGroup::PlasmaThemeColors },
            {   13, ThemeColorsGroup::ReverseThemeColors },
            {   14, ThemeColorsGroup::SmartThemeColors },
            {   15, ThemeColorsGroup::DarkThemeColors },
            {   16, ThemeColorsGroup::LightThemeColors },
            {   17, ThemeColorsGroup::LayoutThemeColors },
        }),
        // enum 'WindowColorsGroup'
        QtMocHelpers::EnumData<enum WindowColorsGroup>(18, 18, QMC::EnumFlags{}).add({
            {   19, WindowColorsGroup::NoneWindowColors },
            {   20, WindowColorsGroup::ActiveWindowColors },
            {   21, WindowColorsGroup::TouchingWindowColors },
        }),
        // enum 'ActiveWindowFilterGroup'
        QtMocHelpers::EnumData<enum ActiveWindowFilterGroup>(22, 22, QMC::EnumFlags{}).add({
            {   23, ActiveWindowFilterGroup::ActiveInCurrentScreen },
            {   24, ActiveWindowFilterGroup::ActiveFromAllScreens },
        }),
    };
    return QtMocHelpers::metaObjectData<Types, qt_meta_tag_ZN5Latte11Containment5TypesE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Containment::Types::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11Containment5TypesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte11Containment5TypesE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte11Containment5TypesE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
