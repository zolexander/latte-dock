/****************************************************************************
** Meta object code from reading C++ file 'screengeometries.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/plasma/extended/screengeometries.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screengeometries.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::PlasmaExtended::ScreenGeometries::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::PlasmaExtended::ScreenGeometries",
        "availableScreenGeometryChangedFrom",
        "",
        "Latte::View*",
        "origin",
        "init",
        "updateGeometries",
        "clearGeometries",
        "onBroadcastToPlasmaChanged",
        "screenIsActive",
        "screenName",
        "setPlasmaAvailableScreenRect",
        "QRect",
        "rect",
        "setPlasmaAvailableScreenRegion",
        "QRegion",
        "region"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'availableScreenGeometryChangedFrom'
        QtMocHelpers::SlotData<void(Latte::View *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'init'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateGeometries'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearGeometries'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBroadcastToPlasmaChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'screenIsActive'
        QtMocHelpers::SlotData<bool(const QString &) const>(9, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'setPlasmaAvailableScreenRect'
        QtMocHelpers::SlotData<void(const QString &, const QRect &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setPlasmaAvailableScreenRegion'
        QtMocHelpers::SlotData<void(const QString &, const QRegion &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 15, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenGeometries, qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::PlasmaExtended::ScreenGeometries::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>.metaTypes,
    nullptr
} };

void Latte::PlasmaExtended::ScreenGeometries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenGeometries *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->availableScreenGeometryChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 1: _t->init(); break;
        case 2: _t->updateGeometries(); break;
        case 3: _t->clearGeometries(); break;
        case 4: _t->onBroadcastToPlasmaChanged(); break;
        case 5: { bool _r = _t->screenIsActive((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setPlasmaAvailableScreenRect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[2]))); break;
        case 7: _t->setPlasmaAvailableScreenRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Latte::PlasmaExtended::ScreenGeometries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::PlasmaExtended::ScreenGeometries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended16ScreenGeometriesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::PlasmaExtended::ScreenGeometries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
