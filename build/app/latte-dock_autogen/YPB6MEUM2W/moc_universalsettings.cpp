/****************************************************************************
** Meta object code from reading C++ file 'universalsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/universalsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'universalsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte17UniversalSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::UniversalSettings::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte17UniversalSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::UniversalSettings",
        "actionsChanged",
        "",
        "autostartChanged",
        "badges3DStyleChanged",
        "canDisableBordersChanged",
        "colorsScriptIsPresentChanged",
        "downloadWindowSizeChanged",
        "inAdvancedModeForEditSettingsChanged",
        "inConfigureAppletsModeChanged",
        "layoutsColumnWidthsChanged",
        "layoutsWindowSizeChanged",
        "launchersChanged",
        "layoutsMemoryUsageChanged",
        "isAvailableGeometryBroadcastedToPlasmaChanged",
        "metaPressAndHoldEnabledChanged",
        "parabolicSpreadChanged",
        "sensitivityChanged",
        "screensCountChanged",
        "screenScalesChanged",
        "screenTrackerIntervalChanged",
        "showInfoWindowChanged",
        "singleModeLayoutNameChanged",
        "thicknessMarginInfluenceChanged",
        "versionChanged",
        "splitterIconPath",
        "trademarkPath",
        "trademarkIconPath",
        "screenWidthScale",
        "screenName",
        "screenHeightScale",
        "setScreenScales",
        "widthScale",
        "heightScale",
        "syncSettings",
        "loadConfig",
        "loadScalesConfig",
        "saveConfig",
        "saveScalesConfig",
        "recoverKWinOptions",
        "updateColorsScriptIsPresent",
        "trackedFileChanged",
        "file",
        "upgrade_v010",
        "autostart",
        "badges3DStyle",
        "inAdvancedModeForEditSettings",
        "inConfigureAppletsMode",
        "colorsScriptIsPresent",
        "showInfoWindow",
        "parabolicSpread",
        "thicknessMarginInfluence",
        "singleModeLayoutName",
        "launchers",
        "contextMenuActionsAlwaysShown",
        "sensitivity",
        "Latte::Settings::MouseSensitivity",
        "screens",
        "QQmlListProperty<QScreen>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'actionsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autostartChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'badges3DStyleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canDisableBordersChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorsScriptIsPresentChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'downloadWindowSizeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inAdvancedModeForEditSettingsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inConfigureAppletsModeChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutsColumnWidthsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutsWindowSizeChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'launchersChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutsMemoryUsageChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isAvailableGeometryBroadcastedToPlasmaChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'metaPressAndHoldEnabledChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'parabolicSpreadChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sensitivityChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screensCountChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenScalesChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenTrackerIntervalChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showInfoWindowChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'singleModeLayoutNameChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'thicknessMarginInfluenceChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'versionChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'splitterIconPath'
        QtMocHelpers::SlotData<QString()>(25, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'trademarkPath'
        QtMocHelpers::SlotData<QString()>(26, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'trademarkIconPath'
        QtMocHelpers::SlotData<QString()>(27, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'screenWidthScale'
        QtMocHelpers::SlotData<float(QString) const>(28, 2, QMC::AccessPublic, QMetaType::Float, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'screenHeightScale'
        QtMocHelpers::SlotData<float(QString) const>(30, 2, QMC::AccessPublic, QMetaType::Float, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'setScreenScales'
        QtMocHelpers::SlotData<void(QString, float, float)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 }, { QMetaType::Float, 32 }, { QMetaType::Float, 33 },
        }}),
        // Slot 'syncSettings'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadScalesConfig'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveScalesConfig'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'recoverKWinOptions'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateColorsScriptIsPresent'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trackedFileChanged'
        QtMocHelpers::SlotData<void(const QString &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'upgrade_v010'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'autostart'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'badges3DStyle'
        QtMocHelpers::PropertyData<bool>(45, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'inAdvancedModeForEditSettings'
        QtMocHelpers::PropertyData<bool>(46, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'inConfigureAppletsMode'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'colorsScriptIsPresent'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'showInfoWindow'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'parabolicSpread'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'thicknessMarginInfluence'
        QtMocHelpers::PropertyData<float>(51, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'singleModeLayoutName'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'launchers'
        QtMocHelpers::PropertyData<QStringList>(53, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'contextMenuActionsAlwaysShown'
        QtMocHelpers::PropertyData<QStringList>(54, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'sensitivity'
        QtMocHelpers::PropertyData<Latte::Settings::MouseSensitivity>(55, 0x80000000 | 56, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 15),
        // property 'screens'
        QtMocHelpers::PropertyData<QQmlListProperty<QScreen>>(57, 0x80000000 | 58, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UniversalSettings, qt_meta_tag_ZN5Latte17UniversalSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte17UniversalSettingsE[] = {
    QMetaObject::SuperData::link<Latte::Settings::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::UniversalSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte17UniversalSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte17UniversalSettingsE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte17UniversalSettingsE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte17UniversalSettingsE_t>.metaTypes,
    nullptr
} };

void Latte::UniversalSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UniversalSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->actionsChanged(); break;
        case 1: _t->autostartChanged(); break;
        case 2: _t->badges3DStyleChanged(); break;
        case 3: _t->canDisableBordersChanged(); break;
        case 4: _t->colorsScriptIsPresentChanged(); break;
        case 5: _t->downloadWindowSizeChanged(); break;
        case 6: _t->inAdvancedModeForEditSettingsChanged(); break;
        case 7: _t->inConfigureAppletsModeChanged(); break;
        case 8: _t->layoutsColumnWidthsChanged(); break;
        case 9: _t->layoutsWindowSizeChanged(); break;
        case 10: _t->launchersChanged(); break;
        case 11: _t->layoutsMemoryUsageChanged(); break;
        case 12: _t->isAvailableGeometryBroadcastedToPlasmaChanged(); break;
        case 13: _t->metaPressAndHoldEnabledChanged(); break;
        case 14: _t->parabolicSpreadChanged(); break;
        case 15: _t->sensitivityChanged(); break;
        case 16: _t->screensCountChanged(); break;
        case 17: _t->screenScalesChanged(); break;
        case 18: _t->screenTrackerIntervalChanged(); break;
        case 19: _t->showInfoWindowChanged(); break;
        case 20: _t->singleModeLayoutNameChanged(); break;
        case 21: _t->thicknessMarginInfluenceChanged(); break;
        case 22: _t->versionChanged(); break;
        case 23: { QString _r = _t->splitterIconPath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->trademarkPath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->trademarkIconPath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { float _r = _t->screenWidthScale((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 27: { float _r = _t->screenHeightScale((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->setScreenScales((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[3]))); break;
        case 29: _t->syncSettings(); break;
        case 30: _t->loadConfig(); break;
        case 31: _t->loadScalesConfig(); break;
        case 32: _t->saveConfig(); break;
        case 33: _t->saveScalesConfig(); break;
        case 34: _t->recoverKWinOptions(); break;
        case 35: _t->updateColorsScriptIsPresent(); break;
        case 36: _t->trackedFileChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 37: _t->upgrade_v010(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::actionsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::autostartChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::badges3DStyleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::canDisableBordersChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::colorsScriptIsPresentChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::downloadWindowSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::inAdvancedModeForEditSettingsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::inConfigureAppletsModeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::layoutsColumnWidthsChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::layoutsWindowSizeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::launchersChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::layoutsMemoryUsageChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::isAvailableGeometryBroadcastedToPlasmaChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::metaPressAndHoldEnabledChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::parabolicSpreadChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::sensitivityChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::screensCountChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::screenScalesChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::screenTrackerIntervalChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::showInfoWindowChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::singleModeLayoutNameChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::thicknessMarginInfluenceChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (UniversalSettings::*)()>(_a, &UniversalSettings::versionChanged, 22))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->autostart(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->badges3DStyle(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->inAdvancedModeForEditSettings(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->inConfigureAppletsMode(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->colorsScriptIsPresent(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->showInfoWindow(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->parabolicSpread(); break;
        case 7: *reinterpret_cast<float*>(_v) = _t->thicknessMarginInfluence(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->singleModeLayoutName(); break;
        case 9: *reinterpret_cast<QStringList*>(_v) = _t->launchers(); break;
        case 10: *reinterpret_cast<QStringList*>(_v) = _t->contextMenuActionsAlwaysShown(); break;
        case 11: *reinterpret_cast<Latte::Settings::MouseSensitivity*>(_v) = _t->sensitivity(); break;
        case 12: *reinterpret_cast<QQmlListProperty<QScreen>*>(_v) = _t->screens(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutostart(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setBadges3DStyle(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setInAdvancedModeForEditSettings(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setInConfigureAppletsMode(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setShowInfoWindow(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setParabolicSpread(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setThicknessMarginInfluence(*reinterpret_cast<float*>(_v)); break;
        case 8: _t->setSingleModeLayoutName(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setLaunchers(*reinterpret_cast<QStringList*>(_v)); break;
        case 10: _t->setContextMenuActionsAlwaysShown(*reinterpret_cast<QStringList*>(_v)); break;
        case 11: _t->setSensitivity(*reinterpret_cast<Latte::Settings::MouseSensitivity*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::UniversalSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::UniversalSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte17UniversalSettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::UniversalSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
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
void Latte::UniversalSettings::actionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::UniversalSettings::autostartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::UniversalSettings::badges3DStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::UniversalSettings::canDisableBordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::UniversalSettings::colorsScriptIsPresentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::UniversalSettings::downloadWindowSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::UniversalSettings::inAdvancedModeForEditSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::UniversalSettings::inConfigureAppletsModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::UniversalSettings::layoutsColumnWidthsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::UniversalSettings::layoutsWindowSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::UniversalSettings::launchersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::UniversalSettings::layoutsMemoryUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::UniversalSettings::isAvailableGeometryBroadcastedToPlasmaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::UniversalSettings::metaPressAndHoldEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::UniversalSettings::parabolicSpreadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::UniversalSettings::sensitivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::UniversalSettings::screensCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::UniversalSettings::screenScalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::UniversalSettings::screenTrackerIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Latte::UniversalSettings::showInfoWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Latte::UniversalSettings::singleModeLayoutNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Latte::UniversalSettings::thicknessMarginInfluenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Latte::UniversalSettings::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
