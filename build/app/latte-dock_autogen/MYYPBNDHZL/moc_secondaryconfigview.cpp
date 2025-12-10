/****************************************************************************
** Meta object code from reading C++ file 'secondaryconfigview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/settings/secondaryconfigview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondaryconfigview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::SecondaryConfigView::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::SecondaryConfigView",
        "showSignal",
        "",
        "syncGeometry",
        "updateEffects"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showSignal'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'syncGeometry'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateEffects'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SecondaryConfigView, qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::SecondaryConfigView::staticMetaObject = { {
    QMetaObject::SuperData::link<SubConfigView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::SecondaryConfigView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SecondaryConfigView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showSignal(); break;
        case 1: _t->syncGeometry(); break;
        case 2: _t->updateEffects(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SecondaryConfigView::*)()>(_a, &SecondaryConfigView::showSignal, 0))
            return;
    }
}

const QMetaObject *Latte::ViewPart::SecondaryConfigView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::SecondaryConfigView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart19SecondaryConfigViewE_t>.strings))
        return static_cast<void*>(this);
    return SubConfigView::qt_metacast(_clname);
}

int Latte::ViewPart::SecondaryConfigView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubConfigView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::SecondaryConfigView::showSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
