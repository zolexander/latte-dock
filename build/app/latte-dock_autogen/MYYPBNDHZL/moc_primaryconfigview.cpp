/****************************************************************************
** Meta object code from reading C++ file 'primaryconfigview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/settings/primaryconfigview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'primaryconfigview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::PrimaryConfigView::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::PrimaryConfigView",
        "availableScreenGeometryChanged",
        "",
        "indicatorUiManagerChanged",
        "isReadyChanged",
        "raiseDocksTemporaryChanged",
        "showInlinePropertiesChanged",
        "showSignal",
        "xChanged",
        "yChanged",
        "syncGeometry",
        "hideConfigWindow",
        "setSticker",
        "blockFocusLost",
        "updateEffects",
        "immutabilityChanged",
        "Plasma::Types::ImmutabilityType",
        "type",
        "updateAvailableScreenGeometry",
        "View*",
        "origin",
        "updateShowInlineProperties",
        "showSecondaryWindow",
        "hideSecondaryWindow",
        "showCanvasWindow",
        "hideCanvasWindow",
        "setShowInlineProperties",
        "show",
        "showInlineProperties",
        "isReady",
        "x",
        "y",
        "availableScreenGeometry",
        "QRect",
        "indicatorUiManager",
        "Latte::ViewPart::Config::IndicatorUiManager*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'availableScreenGeometryChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indicatorUiManagerChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isReadyChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'raiseDocksTemporaryChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showInlinePropertiesChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showSignal'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'yChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'syncGeometry'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hideConfigWindow'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSticker'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'updateEffects'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'immutabilityChanged'
        QtMocHelpers::SlotData<void(Plasma::Types::ImmutabilityType)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'updateAvailableScreenGeometry'
        QtMocHelpers::SlotData<void(View *)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'updateAvailableScreenGeometry'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateShowInlineProperties'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSecondaryWindow'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'hideSecondaryWindow'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showCanvasWindow'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'hideCanvasWindow'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setShowInlineProperties'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 27 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'showInlineProperties'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'isReady'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'x'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'y'
        QtMocHelpers::PropertyData<int>(31, QMetaType::Int, QMC::DefaultPropertyFlags, 7),
        // property 'availableScreenGeometry'
        QtMocHelpers::PropertyData<QRect>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'indicatorUiManager'
        QtMocHelpers::PropertyData<Latte::ViewPart::Config::IndicatorUiManager*>(34, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PrimaryConfigView, qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::PrimaryConfigView::staticMetaObject = { {
    QMetaObject::SuperData::link<SubConfigView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::PrimaryConfigView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PrimaryConfigView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->availableScreenGeometryChanged(); break;
        case 1: _t->indicatorUiManagerChanged(); break;
        case 2: _t->isReadyChanged(); break;
        case 3: _t->raiseDocksTemporaryChanged(); break;
        case 4: _t->showInlinePropertiesChanged(); break;
        case 5: _t->showSignal(); break;
        case 6: _t->xChanged(); break;
        case 7: _t->yChanged(); break;
        case 8: _t->syncGeometry(); break;
        case 9: _t->hideConfigWindow(); break;
        case 10: _t->setSticker((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->updateEffects(); break;
        case 12: _t->immutabilityChanged((*reinterpret_cast<std::add_pointer_t<Plasma::Types::ImmutabilityType>>(_a[1]))); break;
        case 13: _t->updateAvailableScreenGeometry((*reinterpret_cast<std::add_pointer_t<View*>>(_a[1]))); break;
        case 14: _t->updateAvailableScreenGeometry(); break;
        case 15: _t->updateShowInlineProperties(); break;
        case 16: _t->showSecondaryWindow(); break;
        case 17: _t->hideSecondaryWindow(); break;
        case 18: _t->showCanvasWindow(); break;
        case 19: _t->hideCanvasWindow(); break;
        case 20: _t->setShowInlineProperties((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::availableScreenGeometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::indicatorUiManagerChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::isReadyChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::raiseDocksTemporaryChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::showInlinePropertiesChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::showSignal, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::xChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrimaryConfigView::*)()>(_a, &PrimaryConfigView::yChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->showInlineProperties(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isReady(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->x(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->y(); break;
        case 4: *reinterpret_cast<QRect*>(_v) = _t->availableScreenGeometry(); break;
        case 5: *reinterpret_cast<Latte::ViewPart::Config::IndicatorUiManager**>(_v) = _t->indicatorUiManager(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::PrimaryConfigView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::PrimaryConfigView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17PrimaryConfigViewE_t>.strings))
        return static_cast<void*>(this);
    return SubConfigView::qt_metacast(_clname);
}

int Latte::ViewPart::PrimaryConfigView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubConfigView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::PrimaryConfigView::availableScreenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::PrimaryConfigView::indicatorUiManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::PrimaryConfigView::isReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::PrimaryConfigView::raiseDocksTemporaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::PrimaryConfigView::showInlinePropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::PrimaryConfigView::showSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::PrimaryConfigView::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::PrimaryConfigView::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
