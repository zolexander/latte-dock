/****************************************************************************
** Meta object code from reading C++ file 'infoview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/infoview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infoview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8InfoViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::InfoView::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8InfoViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::InfoView",
        "enabledBordersChanged",
        "",
        "syncGeometry",
        "setupWaylandIntegration",
        "updateWaylandId",
        "enabledBorders",
        "KSvg::FrameSvg::EnabledBorders"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabledBordersChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'syncGeometry'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setupWaylandIntegration'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWaylandId'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'enabledBorders'
        QtMocHelpers::PropertyData<KSvg::FrameSvg::EnabledBorders>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InfoView, qt_meta_tag_ZN5Latte8InfoViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte8InfoViewE[] = {
    QMetaObject::SuperData::link<KSvg::FrameSvg::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::InfoView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8InfoViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8InfoViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte8InfoViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8InfoViewE_t>.metaTypes,
    nullptr
} };

void Latte::InfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InfoView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabledBordersChanged(); break;
        case 1: _t->syncGeometry(); break;
        case 2: _t->setupWaylandIntegration(); break;
        case 3: _t->updateWaylandId(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InfoView::*)()>(_a, &InfoView::enabledBordersChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KSvg::FrameSvg::EnabledBorders*>(_v) = _t->enabledBorders(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::InfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::InfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8InfoViewE_t>.strings))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int Latte::InfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void Latte::InfoView::enabledBordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
