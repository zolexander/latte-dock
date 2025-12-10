/****************************************************************************
** Meta object code from reading C++ file 'genericlayout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layout/genericlayout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericlayout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layout::GenericLayout::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layout::GenericLayout",
        "activitiesChanged",
        "",
        "viewsCountChanged",
        "screenId",
        "viewEdgeChanged",
        "lastConfigViewForChanged",
        "Latte::View*",
        "view",
        "preferredViewForShortcutsChanged",
        "viewsWithTasks",
        "qmlFreeEdges",
        "QList<int>",
        "screen",
        "toggleHiddenState",
        "viewName",
        "screenName",
        "Plasma::Types::Location",
        "edge",
        "addContainment",
        "Plasma::Containment*",
        "containment",
        "appletCreated",
        "Plasma::Applet*",
        "applet",
        "destroyedChanged",
        "destroyed",
        "containmentDestroyed",
        "cont",
        "onLastConfigViewChangedFrom",
        "viewsCount"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activitiesChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewsCountChanged'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'viewEdgeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastConfigViewForChanged'
        QtMocHelpers::SignalData<void(Latte::View *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'preferredViewForShortcutsChanged'
        QtMocHelpers::SignalData<void(Latte::View *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'viewsWithTasks'
        QtMocHelpers::SlotData<int() const>(10, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'qmlFreeEdges'
        QtMocHelpers::SlotData<QList<int>(int) const>(11, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'toggleHiddenState'
        QtMocHelpers::SlotData<void(QString, QString, Plasma::Types::Location)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 }, { QMetaType::QString, 16 }, { 0x80000000 | 17, 18 },
        }}),
        // Slot 'addContainment'
        QtMocHelpers::SlotData<void(Plasma::Containment *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'appletCreated'
        QtMocHelpers::SlotData<void(Plasma::Applet *)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'destroyedChanged'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'containmentDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 28 },
        }}),
        // Slot 'onLastConfigViewChangedFrom'
        QtMocHelpers::SlotData<void(Latte::View *)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'viewsCount'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericLayout, qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Layout::GenericLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>.metaTypes,
    nullptr
} };

void Latte::Layout::GenericLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activitiesChanged(); break;
        case 1: _t->viewsCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->viewEdgeChanged(); break;
        case 3: _t->lastConfigViewForChanged((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 4: _t->preferredViewForShortcutsChanged((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 5: { int _r = _t->viewsWithTasks();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<int> _r = _t->qmlFreeEdges((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->toggleHiddenState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Plasma::Types::Location>>(_a[3]))); break;
        case 8: _t->addContainment((*reinterpret_cast<std::add_pointer_t<Plasma::Containment*>>(_a[1]))); break;
        case 9: _t->appletCreated((*reinterpret_cast<std::add_pointer_t<Plasma::Applet*>>(_a[1]))); break;
        case 10: _t->destroyedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->containmentDestroyed((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 12: _t->onLastConfigViewChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GenericLayout::*)()>(_a, &GenericLayout::activitiesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GenericLayout::*)(int )>(_a, &GenericLayout::viewsCountChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GenericLayout::*)()>(_a, &GenericLayout::viewEdgeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GenericLayout::*)(Latte::View * )>(_a, &GenericLayout::lastConfigViewForChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GenericLayout::*)(Latte::View * )>(_a, &GenericLayout::preferredViewForShortcutsChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->viewsCount(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Layout::GenericLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layout::GenericLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout13GenericLayoutE_t>.strings))
        return static_cast<void*>(this);
    return AbstractLayout::qt_metacast(_clname);
}

int Latte::Layout::GenericLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Latte::Layout::GenericLayout::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layout::GenericLayout::viewsCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Latte::Layout::GenericLayout::viewEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layout::GenericLayout::lastConfigViewForChanged(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Latte::Layout::GenericLayout::preferredViewForShortcutsChanged(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
