/****************************************************************************
** Meta object code from reading C++ file 'contextmenulayerquickitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/declarativeimports/contextmenulayerquickitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextmenulayerquickitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ContextMenuLayerQuickItem::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ContextMenuLayerQuickItem",
        "menuChanged",
        "",
        "viewChanged",
        "onMenuAboutToHide",
        "menuIsShown",
        "view"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'menuChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onMenuAboutToHide'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'menuIsShown'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'view'
        QtMocHelpers::PropertyData<QObject*>(6, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ContextMenuLayerQuickItem, qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ContextMenuLayerQuickItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>.metaTypes,
    nullptr
} };

void Latte::ContextMenuLayerQuickItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ContextMenuLayerQuickItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->menuChanged(); break;
        case 1: _t->viewChanged(); break;
        case 2: _t->onMenuAboutToHide(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ContextMenuLayerQuickItem::*)()>(_a, &ContextMenuLayerQuickItem::menuChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContextMenuLayerQuickItem::*)()>(_a, &ContextMenuLayerQuickItem::viewChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->menuIsShown(); break;
        case 1: *reinterpret_cast<QObject**>(_v) = _t->view(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setView(*reinterpret_cast<QObject**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ContextMenuLayerQuickItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ContextMenuLayerQuickItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte25ContextMenuLayerQuickItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Latte::ContextMenuLayerQuickItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Latte::ContextMenuLayerQuickItem::menuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ContextMenuLayerQuickItem::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
