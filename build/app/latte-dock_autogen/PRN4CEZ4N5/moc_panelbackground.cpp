/****************************************************************************
** Meta object code from reading C++ file 'panelbackground.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/plasma/extended/panelbackground.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelbackground.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::PlasmaExtended::PanelBackground::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::PlasmaExtended::PanelBackground",
        "paddingsChanged",
        "",
        "roundnessChanged",
        "shadowColorChanged",
        "shadowSizeChanged",
        "maxOpacityChanged",
        "update",
        "paddingTop",
        "paddingLeft",
        "paddingBottom",
        "paddingRight",
        "shadowSize",
        "roundness",
        "maxOpacity",
        "shadowColor",
        "QColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'paddingsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'roundnessChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadowColorChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadowSizeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxOpacityChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'paddingTop'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'paddingLeft'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'paddingBottom'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'paddingRight'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'shadowSize'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'roundness'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'maxOpacity'
        QtMocHelpers::PropertyData<float>(14, QMetaType::Float, QMC::DefaultPropertyFlags, 4),
        // property 'shadowColor'
        QtMocHelpers::PropertyData<QColor>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PanelBackground, qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::PlasmaExtended::PanelBackground::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>.metaTypes,
    nullptr
} };

void Latte::PlasmaExtended::PanelBackground::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PanelBackground *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->paddingsChanged(); break;
        case 1: _t->roundnessChanged(); break;
        case 2: _t->shadowColorChanged(); break;
        case 3: _t->shadowSizeChanged(); break;
        case 4: _t->maxOpacityChanged(); break;
        case 5: _t->update(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PanelBackground::*)()>(_a, &PanelBackground::paddingsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelBackground::*)()>(_a, &PanelBackground::roundnessChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelBackground::*)()>(_a, &PanelBackground::shadowColorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelBackground::*)()>(_a, &PanelBackground::shadowSizeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelBackground::*)()>(_a, &PanelBackground::maxOpacityChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->paddingTop(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->paddingLeft(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->paddingBottom(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->paddingRight(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->shadowSize(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->roundness(); break;
        case 6: *reinterpret_cast<float*>(_v) = _t->maxOpacity(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->shadowColor(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::PlasmaExtended::PanelBackground::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::PlasmaExtended::PanelBackground::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended15PanelBackgroundE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::PlasmaExtended::PanelBackground::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Latte::PlasmaExtended::PanelBackground::paddingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::PlasmaExtended::PanelBackground::roundnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::PlasmaExtended::PanelBackground::shadowColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::PlasmaExtended::PanelBackground::shadowSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::PlasmaExtended::PanelBackground::maxOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
