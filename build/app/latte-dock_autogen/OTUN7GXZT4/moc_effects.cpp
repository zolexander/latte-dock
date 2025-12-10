/****************************************************************************
** Meta object code from reading C++ file 'effects.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/effects.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effects.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::Effects::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::Effects",
        "animationsBlockedChanged",
        "",
        "appletsLayoutGeometryChanged",
        "backgroundAllCornersChanged",
        "backgroundCornersMaskChanged",
        "backgroundOpacityChanged",
        "backgroundRadiusEnabledChanged",
        "backgroundRadiusChanged",
        "drawShadowsChanged",
        "drawEffectsChanged",
        "editShadowChanged",
        "enabledBordersChanged",
        "maskChanged",
        "innerShadowChanged",
        "inputMaskChanged",
        "panelBackgroundSvgChanged",
        "popUpMarginChanged",
        "rectChanged",
        "subtractedMaskRegionsChanged",
        "unitedMaskRegionsChanged",
        "forceMaskRedraw",
        "setSubtractedMaskRegion",
        "regionid",
        "QRegion",
        "region",
        "removeSubtractedMaskRegion",
        "setUnitedMaskRegion",
        "removeUnitedMaskRegion",
        "clearShadows",
        "updateShadows",
        "updateEffects",
        "updateEnabledBorders",
        "updateMask",
        "init",
        "onPopUpMarginChanged",
        "updateBackgroundContrastValues",
        "updateBackgroundCorners",
        "animationsBlocked",
        "drawShadows",
        "drawEffects",
        "editShadow",
        "innerShadow",
        "backgroundAllCorners",
        "backgroundRadiusEnabled",
        "backgroundRadius",
        "backgroundOpacity",
        "popUpMargin",
        "mask",
        "QRect",
        "rect",
        "inputMask",
        "appletsLayoutGeometry",
        "enabledBorders",
        "KSvg::FrameSvg::EnabledBorders",
        "panelBackgroundSvg",
        "QQuickItem*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'animationsBlockedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appletsLayoutGeometryChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundAllCornersChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundCornersMaskChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundOpacityChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundRadiusEnabledChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundRadiusChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'drawShadowsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'drawEffectsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editShadowChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledBordersChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maskChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'innerShadowChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inputMaskChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelBackgroundSvgChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'popUpMarginChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rectChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'subtractedMaskRegionsChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unitedMaskRegionsChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceMaskRedraw'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSubtractedMaskRegion'
        QtMocHelpers::SlotData<void(const QString &, const QRegion &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 }, { 0x80000000 | 24, 25 },
        }}),
        // Slot 'removeSubtractedMaskRegion'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'setUnitedMaskRegion'
        QtMocHelpers::SlotData<void(const QString &, const QRegion &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 }, { 0x80000000 | 24, 25 },
        }}),
        // Slot 'removeUnitedMaskRegion'
        QtMocHelpers::SlotData<void(const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'clearShadows'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateShadows'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateEffects'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateEnabledBorders'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateMask'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'init'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPopUpMarginChanged'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateBackgroundContrastValues'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateBackgroundCorners'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animationsBlocked'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'drawShadows'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'drawEffects'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'editShadow'
        QtMocHelpers::PropertyData<int>(41, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'innerShadow'
        QtMocHelpers::PropertyData<int>(42, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'backgroundAllCorners'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'backgroundRadiusEnabled'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'backgroundRadius'
        QtMocHelpers::PropertyData<int>(45, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'backgroundOpacity'
        QtMocHelpers::PropertyData<float>(46, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'popUpMargin'
        QtMocHelpers::PropertyData<int>(47, QMetaType::Int, QMC::DefaultPropertyFlags, 15),
        // property 'mask'
        QtMocHelpers::PropertyData<QRect>(48, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 11),
        // property 'rect'
        QtMocHelpers::PropertyData<QRect>(50, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 16),
        // property 'inputMask'
        QtMocHelpers::PropertyData<QRect>(51, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 13),
        // property 'appletsLayoutGeometry'
        QtMocHelpers::PropertyData<QRect>(52, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'enabledBorders'
        QtMocHelpers::PropertyData<KSvg::FrameSvg::EnabledBorders>(53, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 10),
        // property 'panelBackgroundSvg'
        QtMocHelpers::PropertyData<QQuickItem*>(55, 0x80000000 | 56, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Effects, qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte8ViewPart7EffectsE[] = {
    QMetaObject::SuperData::link<KSvg::FrameSvg::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::ViewPart::Effects::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte8ViewPart7EffectsE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::Effects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Effects *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->animationsBlockedChanged(); break;
        case 1: _t->appletsLayoutGeometryChanged(); break;
        case 2: _t->backgroundAllCornersChanged(); break;
        case 3: _t->backgroundCornersMaskChanged(); break;
        case 4: _t->backgroundOpacityChanged(); break;
        case 5: _t->backgroundRadiusEnabledChanged(); break;
        case 6: _t->backgroundRadiusChanged(); break;
        case 7: _t->drawShadowsChanged(); break;
        case 8: _t->drawEffectsChanged(); break;
        case 9: _t->editShadowChanged(); break;
        case 10: _t->enabledBordersChanged(); break;
        case 11: _t->maskChanged(); break;
        case 12: _t->innerShadowChanged(); break;
        case 13: _t->inputMaskChanged(); break;
        case 14: _t->panelBackgroundSvgChanged(); break;
        case 15: _t->popUpMarginChanged(); break;
        case 16: _t->rectChanged(); break;
        case 17: _t->subtractedMaskRegionsChanged(); break;
        case 18: _t->unitedMaskRegionsChanged(); break;
        case 19: _t->forceMaskRedraw(); break;
        case 20: _t->setSubtractedMaskRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[2]))); break;
        case 21: _t->removeSubtractedMaskRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setUnitedMaskRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[2]))); break;
        case 23: _t->removeUnitedMaskRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->clearShadows(); break;
        case 25: _t->updateShadows(); break;
        case 26: _t->updateEffects(); break;
        case 27: _t->updateEnabledBorders(); break;
        case 28: _t->updateMask(); break;
        case 29: _t->init(); break;
        case 30: _t->onPopUpMarginChanged(); break;
        case 31: _t->updateBackgroundContrastValues(); break;
        case 32: _t->updateBackgroundCorners(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::animationsBlockedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::appletsLayoutGeometryChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::backgroundAllCornersChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::backgroundCornersMaskChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::backgroundOpacityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::backgroundRadiusEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::backgroundRadiusChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::drawShadowsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::drawEffectsChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::editShadowChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::enabledBordersChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::maskChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::innerShadowChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::inputMaskChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::panelBackgroundSvgChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::popUpMarginChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::rectChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::subtractedMaskRegionsChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Effects::*)()>(_a, &Effects::unitedMaskRegionsChanged, 18))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->animationsBlocked(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->drawShadows(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->drawEffects(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->editShadow(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->innerShadow(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->backgroundAllCorners(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->backgroundRadiusEnabled(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->backgroundRadius(); break;
        case 8: *reinterpret_cast<float*>(_v) = _t->backgroundOpacity(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->popUpMargin(); break;
        case 10: *reinterpret_cast<QRect*>(_v) = _t->mask(); break;
        case 11: *reinterpret_cast<QRect*>(_v) = _t->rect(); break;
        case 12: *reinterpret_cast<QRect*>(_v) = _t->inputMask(); break;
        case 13: *reinterpret_cast<QRect*>(_v) = _t->appletsLayoutGeometry(); break;
        case 14: *reinterpret_cast<KSvg::FrameSvg::EnabledBorders*>(_v) = _t->enabledBorders(); break;
        case 15: *reinterpret_cast<QQuickItem**>(_v) = _t->panelBackgroundSvg(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDrawShadows(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setDrawEffects(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setEditShadow(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setInnerShadow(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setBackgroundAllCorners(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setBackgroundRadiusEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setBackgroundRadius(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setBackgroundOpacity(*reinterpret_cast<float*>(_v)); break;
        case 10: _t->setMask(*reinterpret_cast<QRect*>(_v)); break;
        case 11: _t->setRect(*reinterpret_cast<QRect*>(_v)); break;
        case 12: _t->setInputMask(*reinterpret_cast<QRect*>(_v)); break;
        case 13: _t->setAppletsLayoutGeometry(*reinterpret_cast<QRect*>(_v)); break;
        case 15: _t->setPanelBackgroundSvg(*reinterpret_cast<QQuickItem**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::Effects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::Effects::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart7EffectsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::Effects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::Effects::animationsBlockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::Effects::appletsLayoutGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::Effects::backgroundAllCornersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::Effects::backgroundCornersMaskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::Effects::backgroundOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::Effects::backgroundRadiusEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::Effects::backgroundRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::Effects::drawShadowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::Effects::drawEffectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::Effects::editShadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::ViewPart::Effects::enabledBordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::ViewPart::Effects::maskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::ViewPart::Effects::innerShadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::ViewPart::Effects::inputMaskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::ViewPart::Effects::panelBackgroundSvgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::ViewPart::Effects::popUpMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::ViewPart::Effects::rectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::ViewPart::Effects::subtractedMaskRegionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::ViewPart::Effects::unitedMaskRegionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
