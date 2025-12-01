/****************************************************************************
** Meta object code from reading C++ file 'screenpool.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/screenpool.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenpool.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte10ScreenPoolE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ScreenPool::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte10ScreenPoolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ScreenPool",
        "primaryScreenChanged",
        "",
        "QScreen*",
        "screen",
        "screenGeometryChanged",
        "updateScreenGeometry",
        "const QScreen*",
        "onPrimaryOutputNameChanged",
        "oldOutputName",
        "newOutputName",
        "onScreenAdded",
        "onScreenRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'primaryScreenChanged'
        QtMocHelpers::SignalData<void(QScreen *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateScreenGeometry'
        QtMocHelpers::SlotData<void(const QScreen *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 4 },
        }}),
        // Slot 'onPrimaryOutputNameChanged'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'onScreenAdded'
        QtMocHelpers::SlotData<void(const QScreen *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 4 },
        }}),
        // Slot 'onScreenRemoved'
        QtMocHelpers::SlotData<void(const QScreen *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenPool, qt_meta_tag_ZN5Latte10ScreenPoolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ScreenPool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ScreenPoolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ScreenPoolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte10ScreenPoolE_t>.metaTypes,
    nullptr
} };

void Latte::ScreenPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenPool *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->primaryScreenChanged((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 1: _t->screenGeometryChanged(); break;
        case 2: _t->updateScreenGeometry((*reinterpret_cast<std::add_pointer_t<const QScreen*>>(_a[1]))); break;
        case 3: _t->onPrimaryOutputNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->onScreenAdded((*reinterpret_cast<std::add_pointer_t<const QScreen*>>(_a[1]))); break;
        case 5: _t->onScreenRemoved((*reinterpret_cast<std::add_pointer_t<const QScreen*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreenPool::*)(QScreen * )>(_a, &ScreenPool::primaryScreenChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenPool::*)()>(_a, &ScreenPool::screenGeometryChanged, 1))
            return;
    }
}

const QMetaObject *Latte::ScreenPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ScreenPool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ScreenPoolE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ScreenPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Latte::ScreenPool::primaryScreenChanged(QScreen * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::ScreenPool::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
