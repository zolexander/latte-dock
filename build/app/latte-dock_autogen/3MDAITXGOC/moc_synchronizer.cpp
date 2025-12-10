/****************************************************************************
** Meta object code from reading C++ file 'synchronizer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layouts/synchronizer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synchronizer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layouts::Synchronizer::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layouts::Synchronizer",
        "centralLayoutsChanged",
        "",
        "layoutsChanged",
        "runningActicitiesChanged",
        "initializationFinished",
        "currentLayoutIsSwitching",
        "layoutName",
        "newLayoutAdded",
        "Data::Layout",
        "layout",
        "layoutActivitiesChanged",
        "initLayouts",
        "updateKWinDisabledBorders",
        "updateLayoutsTable",
        "onActivityRemoved",
        "activityid",
        "onLayoutAdded",
        "layoutpath",
        "unloadPreloadedLayouts",
        "reloadAssignedLayouts",
        "updateBorderlessMaximizedAfterTimer"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'centralLayoutsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'runningActicitiesChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializationFinished'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentLayoutIsSwitching'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'newLayoutAdded'
        QtMocHelpers::SignalData<void(const Data::Layout &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'layoutActivitiesChanged'
        QtMocHelpers::SignalData<void(const Data::Layout &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'initLayouts'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateKWinDisabledBorders'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateLayoutsTable'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActivityRemoved'
        QtMocHelpers::SlotData<void(const QString &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'onLayoutAdded'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'unloadPreloadedLayouts'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadAssignedLayouts'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateBorderlessMaximizedAfterTimer'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Synchronizer, qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Layouts::Synchronizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>.metaTypes,
    nullptr
} };

void Latte::Layouts::Synchronizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Synchronizer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->centralLayoutsChanged(); break;
        case 1: _t->layoutsChanged(); break;
        case 2: _t->runningActicitiesChanged(); break;
        case 3: _t->initializationFinished(); break;
        case 4: _t->currentLayoutIsSwitching((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->newLayoutAdded((*reinterpret_cast<std::add_pointer_t<Data::Layout>>(_a[1]))); break;
        case 6: _t->layoutActivitiesChanged((*reinterpret_cast<std::add_pointer_t<Data::Layout>>(_a[1]))); break;
        case 7: _t->initLayouts(); break;
        case 8: _t->updateKWinDisabledBorders(); break;
        case 9: _t->updateLayoutsTable(); break;
        case 10: _t->onActivityRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onLayoutAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->unloadPreloadedLayouts(); break;
        case 13: _t->reloadAssignedLayouts(); break;
        case 14: _t->updateBorderlessMaximizedAfterTimer(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)()>(_a, &Synchronizer::centralLayoutsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)()>(_a, &Synchronizer::layoutsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)()>(_a, &Synchronizer::runningActicitiesChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)()>(_a, &Synchronizer::initializationFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)(QString )>(_a, &Synchronizer::currentLayoutIsSwitching, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)(const Data::Layout & )>(_a, &Synchronizer::newLayoutAdded, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Synchronizer::*)(const Data::Layout & )>(_a, &Synchronizer::layoutActivitiesChanged, 6))
            return;
    }
}

const QMetaObject *Latte::Layouts::Synchronizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::Synchronizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts12SynchronizerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::Synchronizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Latte::Layouts::Synchronizer::centralLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layouts::Synchronizer::layoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layouts::Synchronizer::runningActicitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layouts::Synchronizer::initializationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Layouts::Synchronizer::currentLayoutIsSwitching(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Latte::Layouts::Synchronizer::newLayoutAdded(const Data::Layout & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Latte::Layouts::Synchronizer::layoutActivitiesChanged(const Data::Layout & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
