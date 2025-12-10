/****************************************************************************
** Meta object code from reading C++ file 'eventssink.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/eventssink.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventssink.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::EventsSink::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::EventsSink",
        "itemsChanged",
        "",
        "setSink",
        "QQuickItem*",
        "originParent",
        "destination",
        "onEvent",
        "QEvent*",
        "e",
        "release",
        "originParentItem",
        "destinationItem"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSink'
        QtMocHelpers::SlotData<void(QQuickItem *, QQuickItem *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 },
        }}),
        // Slot 'onEvent'
        QtMocHelpers::SlotData<QEvent *(QEvent *)>(7, 2, QMC::AccessPublic, 0x80000000 | 8, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'release'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'originParentItem'
        QtMocHelpers::PropertyData<QQuickItem*>(11, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'destinationItem'
        QtMocHelpers::PropertyData<QQuickItem*>(12, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EventsSink, qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::EventsSink::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::EventsSink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EventsSink *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemsChanged(); break;
        case 1: _t->setSink((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 2: { QEvent* _r = _t->onEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QEvent**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->release(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EventsSink::*)()>(_a, &EventsSink::itemsChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQuickItem**>(_v) = _t->originParentItem(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->destinationItem(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::EventsSink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::EventsSink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart10EventsSinkE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::EventsSink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void Latte::ViewPart::EventsSink::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
