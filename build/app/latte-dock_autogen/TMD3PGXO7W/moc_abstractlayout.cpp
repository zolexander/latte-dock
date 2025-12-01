/****************************************************************************
** Meta object code from reading C++ file 'abstractlayout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layout/abstractlayout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractlayout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layout::AbstractLayout::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layout::AbstractLayout",
        "backgroundChanged",
        "",
        "backgroundStyleChanged",
        "customBackgroundChanged",
        "customTextColorChanged",
        "colorChanged",
        "fileChanged",
        "iconChanged",
        "lastUsedActivityChanged",
        "launchersChanged",
        "nameChanged",
        "popUpMarginChanged",
        "preferredForShortcutsTouchedChanged",
        "schemeFileChanged",
        "textColorChanged",
        "versionChanged",
        "loadConfig",
        "saveConfig",
        "name",
        "preferredForShortcutsTouched",
        "popUpMargin",
        "icon",
        "background",
        "textColor",
        "schemeFile",
        "launchers",
        "lastUsedActivity"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'backgroundChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundStyleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'customBackgroundChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'customTextColorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastUsedActivityChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'launchersChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'popUpMarginChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferredForShortcutsTouchedChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'schemeFileChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textColorChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'versionChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 9),
        // property 'preferredForShortcutsTouched'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'popUpMargin'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'icon'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'background'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'textColor'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags, 13),
        // property 'schemeFile'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'launchers'
        QtMocHelpers::PropertyData<QStringList>(26, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'lastUsedActivity'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractLayout, qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Layout::AbstractLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>.metaTypes,
    nullptr
} };

void Latte::Layout::AbstractLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->backgroundChanged(); break;
        case 1: _t->backgroundStyleChanged(); break;
        case 2: _t->customBackgroundChanged(); break;
        case 3: _t->customTextColorChanged(); break;
        case 4: _t->colorChanged(); break;
        case 5: _t->fileChanged(); break;
        case 6: _t->iconChanged(); break;
        case 7: _t->lastUsedActivityChanged(); break;
        case 8: _t->launchersChanged(); break;
        case 9: _t->nameChanged(); break;
        case 10: _t->popUpMarginChanged(); break;
        case 11: _t->preferredForShortcutsTouchedChanged(); break;
        case 12: _t->schemeFileChanged(); break;
        case 13: _t->textColorChanged(); break;
        case 14: _t->versionChanged(); break;
        case 15: _t->loadConfig(); break;
        case 16: _t->saveConfig(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::backgroundChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::backgroundStyleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::customBackgroundChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::customTextColorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::colorChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::fileChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::iconChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::lastUsedActivityChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::launchersChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::nameChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::popUpMarginChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::preferredForShortcutsTouchedChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::schemeFileChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::textColorChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractLayout::*)()>(_a, &AbstractLayout::versionChanged, 14))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->preferredForShortcutsTouched(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->popUpMargin(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->icon(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->background(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->textColor(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->schemeFile(); break;
        case 7: *reinterpret_cast<QStringList*>(_v) = _t->launchers(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->lastUsedActivity(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPreferredForShortcutsTouched(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setPopUpMargin(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setSchemeFile(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setLaunchers(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Layout::AbstractLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layout::AbstractLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6Layout14AbstractLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layout::AbstractLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Latte::Layout::AbstractLayout::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layout::AbstractLayout::backgroundStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layout::AbstractLayout::customBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layout::AbstractLayout::customTextColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Layout::AbstractLayout::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Layout::AbstractLayout::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::Layout::AbstractLayout::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::Layout::AbstractLayout::lastUsedActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::Layout::AbstractLayout::launchersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::Layout::AbstractLayout::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::Layout::AbstractLayout::popUpMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::Layout::AbstractLayout::preferredForShortcutsTouchedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::Layout::AbstractLayout::schemeFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::Layout::AbstractLayout::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::Layout::AbstractLayout::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
namespace {
struct qt_meta_tag_ZN5Latte6LayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layout::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte6LayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layout",
        "Type",
        "Abstract",
        "Generic",
        "Central",
        "Shared",
        "BackgroundStyle",
        "ColorBackgroundStyle",
        "PatternBackgroundStyle"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Type'
        QtMocHelpers::EnumData<Type>(1, 1, QMC::EnumFlags{}).add({
            {    2, Type::Abstract },
            {    3, Type::Generic },
            {    4, Type::Central },
            {    5, Type::Shared },
        }),
        // enum 'BackgroundStyle'
        QtMocHelpers::EnumData<BackgroundStyle>(6, 6, QMC::EnumFlags{}).add({
            {    7, BackgroundStyle::ColorBackgroundStyle },
            {    8, BackgroundStyle::PatternBackgroundStyle },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Latte6LayoutE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Latte6LayoutE =
    Latte::Layout::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte6LayoutE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Latte6LayoutE =
    qt_staticMetaObjectContent_ZN5Latte6LayoutE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Latte6LayoutE =
    qt_staticMetaObjectContent_ZN5Latte6LayoutE.relocatingData;

Q_CONSTINIT const QMetaObject Latte::Layout::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Latte6LayoutE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Latte6LayoutE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Latte6LayoutE.metaTypes,
    nullptr
} };

QT_WARNING_POP
