/****************************************************************************
** Meta object code from reading C++ file 'apptypes.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/apptypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apptypes.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte12ImportExportE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ImportExport::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12ImportExportE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ImportExport",
        "State",
        "FailedState",
        "UpdatedState",
        "InstalledState"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'State'
        QtMocHelpers::EnumData<State>(1, 1, QMC::EnumFlags{}).add({
            {    2, State::FailedState },
            {    3, State::UpdatedState },
            {    4, State::InstalledState },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Latte12ImportExportE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Latte12ImportExportE =
    Latte::ImportExport::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12ImportExportE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Latte12ImportExportE =
    qt_staticMetaObjectContent_ZN5Latte12ImportExportE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Latte12ImportExportE =
    qt_staticMetaObjectContent_ZN5Latte12ImportExportE.relocatingData;

Q_CONSTINIT const QMetaObject Latte::ImportExport::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Latte12ImportExportE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Latte12ImportExportE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Latte12ImportExportE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN5Latte8SettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8SettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings",
        "MouseSensitivity",
        "LowMouseSensitivity",
        "MediumMouseSensitivity",
        "HighMouseSensitivity"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'MouseSensitivity'
        QtMocHelpers::EnumData<MouseSensitivity>(1, 1, QMC::EnumFlags{}).add({
            {    2, MouseSensitivity::LowMouseSensitivity },
            {    3, MouseSensitivity::MediumMouseSensitivity },
            {    4, MouseSensitivity::HighMouseSensitivity },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Latte8SettingsE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Latte8SettingsE =
    Latte::Settings::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8SettingsE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Latte8SettingsE =
    qt_staticMetaObjectContent_ZN5Latte8SettingsE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Latte8SettingsE =
    qt_staticMetaObjectContent_ZN5Latte8SettingsE.relocatingData;

Q_CONSTINIT const QMetaObject Latte::Settings::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Latte8SettingsE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Latte8SettingsE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Latte8SettingsE.metaTypes,
    nullptr
} };

QT_WARNING_POP
