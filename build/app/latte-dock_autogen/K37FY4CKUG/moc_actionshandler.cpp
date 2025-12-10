/****************************************************************************
** Meta object code from reading C++ file 'actionshandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/actionsdialog/actionshandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionshandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Handler::ActionsHandler::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Handler::ActionsHandler",
        "reset",
        "",
        "resetDefaults",
        "save",
        "updateButtonEnablement",
        "onCancel"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetDefaults'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateButtonEnablement'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCancel'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ActionsHandler, qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Handler::ActionsHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<Generic::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Handler::ActionsHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ActionsHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->resetDefaults(); break;
        case 2: _t->save(); break;
        case 3: _t->updateButtonEnablement(); break;
        case 4: _t->onCancel(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Latte::Settings::Handler::ActionsHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Handler::ActionsHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler14ActionsHandlerE_t>.strings))
        return static_cast<void*>(this);
    return Generic::qt_metacast(_clname);
}

int Latte::Settings::Handler::ActionsHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Generic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
