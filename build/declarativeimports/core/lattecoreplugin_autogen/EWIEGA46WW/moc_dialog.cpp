/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../declarativeimports/core/dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte5Quick6DialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Quick::Dialog::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte5Quick6DialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Quick::Dialog",
        "containsMouseChanged",
        "",
        "edgeChanged",
        "setContainsMouse",
        "contains",
        "updatePopUpEnabledBorders",
        "onVisualParentChanged",
        "updateGeometry",
        "containsMouse",
        "edge",
        "Plasma::Types::Location"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'containsMouseChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'edgeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setContainsMouse'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'updatePopUpEnabledBorders'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onVisualParentChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateGeometry'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'containsMouse'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'edge'
        QtMocHelpers::PropertyData<Plasma::Types::Location>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Dialog, qt_meta_tag_ZN5Latte5Quick6DialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte5Quick6DialogE[] = {
    QMetaObject::SuperData::link<Plasma::Types::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::Quick::Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<PlasmaQuick::Dialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5Quick6DialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5Quick6DialogE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte5Quick6DialogE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte5Quick6DialogE_t>.metaTypes,
    nullptr
} };

void Latte::Quick::Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Dialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->containsMouseChanged(); break;
        case 1: _t->edgeChanged(); break;
        case 2: _t->setContainsMouse((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->updatePopUpEnabledBorders(); break;
        case 4: _t->onVisualParentChanged(); break;
        case 5: _t->updateGeometry(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::containsMouseChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::edgeChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->containsMouse(); break;
        case 1: *reinterpret_cast<Plasma::Types::Location*>(_v) = _t->edge(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEdge(*reinterpret_cast<Plasma::Types::Location*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Quick::Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Quick::Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte5Quick6DialogE_t>.strings))
        return static_cast<void*>(this);
    return PlasmaQuick::Dialog::qt_metacast(_clname);
}

int Latte::Quick::Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlasmaQuick::Dialog::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Latte::Quick::Dialog::containsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Quick::Dialog::edgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
