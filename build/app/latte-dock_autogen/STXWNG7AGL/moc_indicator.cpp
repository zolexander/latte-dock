/****************************************************************************
** Meta object code from reading C++ file 'indicator.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/indicator/indicator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicator.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::Indicator::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::Indicator",
        "customPluginsChanged",
        "",
        "enabledChanged",
        "enabledForAppletsChanged",
        "configurationChanged",
        "customPluginChanged",
        "infoChanged",
        "latteTasksArePresentChanged",
        "plasmaComponentChanged",
        "pluginChanged",
        "pluginIsReadyChanged",
        "resourcesChanged",
        "enabled",
        "enabledForApplets",
        "latteTasksArePresent",
        "pluginIsReady",
        "type",
        "customType",
        "customPluginsCount",
        "customPluginIds",
        "customPluginNames",
        "customLocalPluginIds",
        "configuration",
        "component",
        "QQmlComponent*",
        "plasmaComponent",
        "info",
        "Latte::ViewPart::IndicatorPart::Info*",
        "resources",
        "Latte::ViewPart::IndicatorPart::Resources*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'customPluginsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledForAppletsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configurationChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'customPluginChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'infoChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'latteTasksArePresentChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'plasmaComponentChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pluginChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pluginIsReadyChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resourcesChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'enabledForApplets'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'latteTasksArePresent'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'pluginIsReady'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags, 9),
        // property 'type'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'customType'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'customPluginsCount'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'customPluginIds'
        QtMocHelpers::PropertyData<QStringList>(20, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'customPluginNames'
        QtMocHelpers::PropertyData<QStringList>(21, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'customLocalPluginIds'
        QtMocHelpers::PropertyData<QStringList>(22, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'configuration'
        QtMocHelpers::PropertyData<QObject*>(23, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 3),
        // property 'component'
        QtMocHelpers::PropertyData<QQmlComponent*>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 8),
        // property 'plasmaComponent'
        QtMocHelpers::PropertyData<QQmlComponent*>(26, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 7),
        // property 'info'
        QtMocHelpers::PropertyData<Latte::ViewPart::IndicatorPart::Info*>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'resources'
        QtMocHelpers::PropertyData<Latte::ViewPart::IndicatorPart::Resources*>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 10),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Indicator, qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::Indicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::Indicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Indicator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->customPluginsChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->enabledForAppletsChanged(); break;
        case 3: _t->configurationChanged(); break;
        case 4: _t->customPluginChanged(); break;
        case 5: _t->infoChanged(); break;
        case 6: _t->latteTasksArePresentChanged(); break;
        case 7: _t->plasmaComponentChanged(); break;
        case 8: _t->pluginChanged(); break;
        case 9: _t->pluginIsReadyChanged(); break;
        case 10: _t->resourcesChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::customPluginsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::enabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::enabledForAppletsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::configurationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::customPluginChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::infoChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::latteTasksArePresentChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::plasmaComponentChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::pluginChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::pluginIsReadyChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Indicator::*)()>(_a, &Indicator::resourcesChanged, 10))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::IndicatorPart::Info* >(); break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::IndicatorPart::Resources* >(); break;
        case 12:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->enabledForApplets(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->latteTasksArePresent(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->pluginIsReady(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->type(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->customType(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->customPluginsCount(); break;
        case 7: *reinterpret_cast<QStringList*>(_v) = _t->customPluginIds(); break;
        case 8: *reinterpret_cast<QStringList*>(_v) = _t->customPluginNames(); break;
        case 9: *reinterpret_cast<QStringList*>(_v) = _t->customLocalPluginIds(); break;
        case 10: *reinterpret_cast<QObject**>(_v) = _t->configuration(); break;
        case 11: *reinterpret_cast<QQmlComponent**>(_v) = _t->component(); break;
        case 12: *reinterpret_cast<QQmlComponent**>(_v) = _t->plasmaComponent(); break;
        case 13: *reinterpret_cast<Latte::ViewPart::IndicatorPart::Info**>(_v) = _t->info(); break;
        case 14: *reinterpret_cast<Latte::ViewPart::IndicatorPart::Resources**>(_v) = _t->resources(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setEnabledForApplets(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setType(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::ViewPart::Indicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::Indicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart9IndicatorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::Indicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
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
void Latte::ViewPart::Indicator::customPluginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::Indicator::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::Indicator::enabledForAppletsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::Indicator::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::Indicator::customPluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::Indicator::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::Indicator::latteTasksArePresentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::Indicator::plasmaComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::Indicator::pluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::ViewPart::Indicator::pluginIsReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::ViewPart::Indicator::resourcesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
