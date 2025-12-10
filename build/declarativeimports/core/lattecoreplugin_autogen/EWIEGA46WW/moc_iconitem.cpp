/****************************************************************************
** Meta object code from reading C++ file 'iconitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../declarativeimports/core/iconitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iconitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8IconItemE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::IconItem::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8IconItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::IconItem",
        "activeChanged",
        "",
        "backgroundColorChanged",
        "colorSetChanged",
        "glowColorChanged",
        "lastValidSourceNameChanged",
        "overlaysChanged",
        "paintedSizeChanged",
        "providesColorsChanged",
        "smoothChanged",
        "sourceChanged",
        "usesPlasmaThemeChanged",
        "validChanged",
        "schedulePixmapUpdate",
        "enabledChanged",
        "source",
        "QVariant",
        "colorSet",
        "KSvg::Svg::ColorSet",
        "overlays",
        "smooth",
        "active",
        "valid",
        "paintedWidth",
        "paintedHeight",
        "usesPlasmaTheme",
        "providesColors",
        "lastValidSourceName",
        "backgroundColor",
        "QColor",
        "glowColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundColorChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorSetChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'glowColorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastValidSourceNameChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overlaysChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paintedSizeChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'providesColorsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'smoothChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'usesPlasmaThemeChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'validChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'schedulePixmapUpdate'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enabledChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'source'
        QtMocHelpers::PropertyData<QVariant>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'colorSet'
        QtMocHelpers::PropertyData<KSvg::Svg::ColorSet>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'overlays'
        QtMocHelpers::PropertyData<QStringList>(20, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'smooth'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'active'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'valid'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 11),
        // property 'paintedWidth'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'paintedHeight'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'usesPlasmaTheme'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'providesColors'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'lastValidSourceName'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'glowColor'
        QtMocHelpers::PropertyData<QColor>(31, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IconItem, qt_meta_tag_ZN5Latte8IconItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte8IconItemE[] = {
    QMetaObject::SuperData::link<KSvg::Svg::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::IconItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8IconItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8IconItemE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte8IconItemE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8IconItemE_t>.metaTypes,
    nullptr
} };

void Latte::IconItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IconItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeChanged(); break;
        case 1: _t->backgroundColorChanged(); break;
        case 2: _t->colorSetChanged(); break;
        case 3: _t->glowColorChanged(); break;
        case 4: _t->lastValidSourceNameChanged(); break;
        case 5: _t->overlaysChanged(); break;
        case 6: _t->paintedSizeChanged(); break;
        case 7: _t->providesColorsChanged(); break;
        case 8: _t->smoothChanged(); break;
        case 9: _t->sourceChanged(); break;
        case 10: _t->usesPlasmaThemeChanged(); break;
        case 11: _t->validChanged(); break;
        case 12: _t->schedulePixmapUpdate(); break;
        case 13: _t->enabledChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::activeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::backgroundColorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::colorSetChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::glowColorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::lastValidSourceNameChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::overlaysChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::paintedSizeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::providesColorsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::smoothChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::sourceChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::usesPlasmaThemeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (IconItem::*)()>(_a, &IconItem::validChanged, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariant*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast<KSvg::Svg::ColorSet*>(_v) = _t->colorSet(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->overlays(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->smooth(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->paintedWidth(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->paintedHeight(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->usesPlasmaTheme(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->providesColors(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->lastValidSourceName(); break;
        case 11: *reinterpret_cast<QColor*>(_v) = _t->backgroundColor(); break;
        case 12: *reinterpret_cast<QColor*>(_v) = _t->glowColor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast<QVariant*>(_v)); break;
        case 1: _t->setColorSet(*reinterpret_cast<KSvg::Svg::ColorSet*>(_v)); break;
        case 2: _t->setOverlays(*reinterpret_cast<QStringList*>(_v)); break;
        case 3: _t->setSmooth(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setUsesPlasmaTheme(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setProvidesColors(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::IconItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::IconItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8IconItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Latte::IconItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Latte::IconItem::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::IconItem::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::IconItem::colorSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::IconItem::glowColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::IconItem::lastValidSourceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::IconItem::overlaysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::IconItem::paintedSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::IconItem::providesColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::IconItem::smoothChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::IconItem::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::IconItem::usesPlasmaThemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::IconItem::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
