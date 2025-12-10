/****************************************************************************
** Meta object code from reading C++ file 'theme.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/plasma/extended/theme.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'theme.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::PlasmaExtended::Theme::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::PlasmaExtended::Theme",
        "backgroundsChanged",
        "",
        "compositingChanged",
        "hasShadowChanged",
        "outlineWidthChanged",
        "marginsAreaChanged",
        "themeChanged",
        "loadConfig",
        "saveConfig",
        "loadThemeLightness",
        "hasShadow",
        "isLightTheme",
        "isDarkTheme",
        "outlineWidth",
        "marginsAreaTop",
        "marginsAreaLeft",
        "marginsAreaBottom",
        "marginsAreaRight",
        "backgroundTopEdge",
        "Latte::PlasmaExtended::PanelBackground*",
        "backgroundLeftEdge",
        "backgroundBottomEdge",
        "backgroundRightEdge",
        "defaultTheme",
        "Latte::WindowSystem::SchemeColors*",
        "lightTheme",
        "darkTheme"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'backgroundsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'compositingChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasShadowChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outlineWidthChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'marginsAreaChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadThemeLightness'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'hasShadow'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'isLightTheme'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'isDarkTheme'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'outlineWidth'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'marginsAreaTop'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'marginsAreaLeft'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'marginsAreaBottom'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'marginsAreaRight'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'backgroundTopEdge'
        QtMocHelpers::PropertyData<Latte::PlasmaExtended::PanelBackground*>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'backgroundLeftEdge'
        QtMocHelpers::PropertyData<Latte::PlasmaExtended::PanelBackground*>(21, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'backgroundBottomEdge'
        QtMocHelpers::PropertyData<Latte::PlasmaExtended::PanelBackground*>(22, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'backgroundRightEdge'
        QtMocHelpers::PropertyData<Latte::PlasmaExtended::PanelBackground*>(23, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'defaultTheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'lightTheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(26, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'darkTheme'
        QtMocHelpers::PropertyData<Latte::WindowSystem::SchemeColors*>(27, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Theme, qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::PlasmaExtended::Theme::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>.metaTypes,
    nullptr
} };

void Latte::PlasmaExtended::Theme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Theme *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->backgroundsChanged(); break;
        case 1: _t->compositingChanged(); break;
        case 2: _t->hasShadowChanged(); break;
        case 3: _t->outlineWidthChanged(); break;
        case 4: _t->marginsAreaChanged(); break;
        case 5: _t->themeChanged(); break;
        case 6: _t->loadConfig(); break;
        case 7: _t->saveConfig(); break;
        case 8: _t->loadThemeLightness(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::backgroundsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::compositingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::hasShadowChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::outlineWidthChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::marginsAreaChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Theme::*)()>(_a, &Theme::themeChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->hasShadow(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isLightTheme(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isDarkTheme(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->outlineWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->marginsAreaTop(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->marginsAreaLeft(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->marginsAreaBottom(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->marginsAreaRight(); break;
        case 8: *reinterpret_cast<Latte::PlasmaExtended::PanelBackground**>(_v) = _t->backgroundTopEdge(); break;
        case 9: *reinterpret_cast<Latte::PlasmaExtended::PanelBackground**>(_v) = _t->backgroundLeftEdge(); break;
        case 10: *reinterpret_cast<Latte::PlasmaExtended::PanelBackground**>(_v) = _t->backgroundBottomEdge(); break;
        case 11: *reinterpret_cast<Latte::PlasmaExtended::PanelBackground**>(_v) = _t->backgroundRightEdge(); break;
        case 12: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->defaultTheme(); break;
        case 13: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->lightTheme(); break;
        case 14: *reinterpret_cast<Latte::WindowSystem::SchemeColors**>(_v) = _t->darkTheme(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::PlasmaExtended::Theme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::PlasmaExtended::Theme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte14PlasmaExtended5ThemeE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::PlasmaExtended::Theme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Latte::PlasmaExtended::Theme::backgroundsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::PlasmaExtended::Theme::compositingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::PlasmaExtended::Theme::hasShadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::PlasmaExtended::Theme::outlineWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::PlasmaExtended::Theme::marginsAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::PlasmaExtended::Theme::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
