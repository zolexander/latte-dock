/****************************************************************************
** Meta object code from reading C++ file 'tabpreferenceshandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/settingsdialog/tabpreferenceshandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabpreferenceshandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Handler::TabPreferences::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Handler::TabPreferences",
        "borderlessMaximizedChanged",
        "",
        "contextActionsChanged",
        "initUi",
        "initSettings",
        "updateUi",
        "onActionsBtnPressed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'borderlessMaximizedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contextActionsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initUi'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initSettings'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateUi'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onActionsBtnPressed'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabPreferences, qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Handler::TabPreferences::staticMetaObject = { {
    QMetaObject::SuperData::link<Generic::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Handler::TabPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabPreferences *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->borderlessMaximizedChanged(); break;
        case 1: _t->contextActionsChanged(); break;
        case 2: _t->initUi(); break;
        case 3: _t->initSettings(); break;
        case 4: _t->updateUi(); break;
        case 5: _t->onActionsBtnPressed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabPreferences::*)()>(_a, &TabPreferences::borderlessMaximizedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabPreferences::*)()>(_a, &TabPreferences::contextActionsChanged, 1))
            return;
    }
}

const QMetaObject *Latte::Settings::Handler::TabPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Handler::TabPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14TabPreferencesE_t>.strings))
        return static_cast<void*>(this);
    return Generic::qt_metacast(_clname);
}

int Latte::Settings::Handler::TabPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Generic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Latte::Settings::Handler::TabPreferences::borderlessMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Settings::Handler::TabPreferences::contextActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
