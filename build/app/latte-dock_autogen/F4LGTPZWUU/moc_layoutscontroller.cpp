/****************************************************************************
** Meta object code from reading C++ file 'layoutscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/settingsdialog/layoutscontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layoutscontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Controller::Layouts::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Controller::Layouts",
        "dataChanged",
        "",
        "initLayouts",
        "loadConfig",
        "saveConfig",
        "storeColumnWidths",
        "inMultipleMode",
        "applyColumnWidths",
        "storeValues",
        "showInitialErrorWarningMessages",
        "onCurrentRowChanged",
        "onNameDuplicatedFrom",
        "provenId",
        "trialId",
        "onLayoutAddedExternally",
        "Data::Layout",
        "layout",
        "onLayoutActivitiesChangedExternally"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initLayouts'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'storeColumnWidths'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'applyColumnWidths'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'applyColumnWidths'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'showInitialErrorWarningMessages'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCurrentRowChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNameDuplicatedFrom'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { QMetaType::QString, 14 },
        }}),
        // Slot 'onLayoutAddedExternally'
        QtMocHelpers::SlotData<void(const Data::Layout &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'onLayoutActivitiesChangedExternally'
        QtMocHelpers::SlotData<void(const Data::Layout &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Layouts, qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Controller::Layouts::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Controller::Layouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Layouts *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->initLayouts(); break;
        case 2: _t->loadConfig(); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->storeColumnWidths((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->applyColumnWidths((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->applyColumnWidths(); break;
        case 7: _t->showInitialErrorWarningMessages(); break;
        case 8: _t->onCurrentRowChanged(); break;
        case 9: _t->onNameDuplicatedFrom((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->onLayoutAddedExternally((*reinterpret_cast<std::add_pointer_t<Data::Layout>>(_a[1]))); break;
        case 11: _t->onLayoutActivitiesChangedExternally((*reinterpret_cast<std::add_pointer_t<Data::Layout>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Layouts::*)()>(_a, &Layouts::dataChanged, 0))
            return;
    }
}

const QMetaObject *Latte::Settings::Controller::Layouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Controller::Layouts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings10Controller7LayoutsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Settings::Controller::Layouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Latte::Settings::Controller::Layouts::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
