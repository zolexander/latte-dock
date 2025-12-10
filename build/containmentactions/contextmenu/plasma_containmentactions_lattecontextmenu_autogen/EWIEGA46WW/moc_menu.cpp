/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../containmentactions/contextmenu/menu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4MenuE_t {};
} // unnamed namespace

template <> constexpr inline auto Menu::qt_create_metaobjectdata<qt_meta_tag_ZN4MenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Menu",
        "populateLayouts",
        "",
        "populateMoveToLayouts",
        "populateViewTemplates",
        "quitApplication",
        "requestConfiguration",
        "requestWidgetExplorer",
        "updateViewData",
        "updateVisibleActions",
        "addView",
        "QAction*",
        "action",
        "moveToLayout",
        "switchToLayout"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'populateLayouts'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'populateMoveToLayouts'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'populateViewTemplates'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'quitApplication'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'requestConfiguration'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'requestWidgetExplorer'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateViewData'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateVisibleActions'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addView'
        QtMocHelpers::SlotData<void(QAction *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'moveToLayout'
        QtMocHelpers::SlotData<void(QAction *)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'switchToLayout'
        QtMocHelpers::SlotData<void(QAction *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Menu, qt_meta_tag_ZN4MenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<Plasma::ContainmentActions::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4MenuE_t>.metaTypes,
    nullptr
} };

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Menu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->populateLayouts(); break;
        case 1: _t->populateMoveToLayouts(); break;
        case 2: _t->populateViewTemplates(); break;
        case 3: _t->quitApplication(); break;
        case 4: _t->requestConfiguration(); break;
        case 5: _t->requestWidgetExplorer(); break;
        case 6: _t->updateViewData(); break;
        case 7: _t->updateVisibleActions(); break;
        case 8: _t->addView((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 9: _t->moveToLayout((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 10: _t->switchToLayout((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.strings))
        return static_cast<void*>(this);
    return Plasma::ContainmentActions::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Plasma::ContainmentActions::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
