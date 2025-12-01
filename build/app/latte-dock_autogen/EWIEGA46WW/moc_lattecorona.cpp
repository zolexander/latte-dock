/****************************************************************************
** Meta object code from reading C++ file 'lattecorona.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/lattecorona.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lattecorona.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte6CoronaE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Corona::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte6CoronaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Corona",
        "D-Bus Interface",
        "org.kde.LatteDock",
        "configurationShown",
        "",
        "PlasmaQuick::ConfigView*",
        "configView",
        "viewLocationChanged",
        "raiseViewsTemporaryChanged",
        "availableScreenRectChangedFrom",
        "Latte::View*",
        "origin",
        "availableScreenRegionChangedFrom",
        "verticalUnityViewHasFocus",
        "aboutApplication",
        "activateLauncherMenu",
        "loadDefaultLayout",
        "setAutostart",
        "enabled",
        "addView",
        "containmentId",
        "templateId",
        "duplicateView",
        "exportViewTemplate",
        "moveViewToLayout",
        "layoutName",
        "removeView",
        "setBackgroundFromBroadcast",
        "activity",
        "screenName",
        "filename",
        "setBroadcastedBackgroundsEnabled",
        "showAlternativesForApplet",
        "Plasma::Applet*",
        "applet",
        "toggleHiddenState",
        "viewName",
        "screenEdge",
        "windowColorScheme",
        "windowIdAndScheme",
        "updateDockItemBadge",
        "identifier",
        "value",
        "unload",
        "alternativesVisibilityChanged",
        "visible",
        "load",
        "onAboutToQuit",
        "onScreenAdded",
        "QScreen*",
        "screen",
        "onScreenRemoved",
        "onScreenCountChanged",
        "onScreenGeometryChanged",
        "QRect",
        "geometry",
        "onAvailableScreenRegionChangedFrom",
        "view",
        "onAvailableScreenRectChangedFrom",
        "syncLatteViewsToScreens"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configurationShown'
        QtMocHelpers::SignalData<void(PlasmaQuick::ConfigView *)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'viewLocationChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'raiseViewsTemporaryChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'availableScreenRectChangedFrom'
        QtMocHelpers::SignalData<void(Latte::View *)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'availableScreenRegionChangedFrom'
        QtMocHelpers::SignalData<void(Latte::View *)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'verticalUnityViewHasFocus'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'aboutApplication'
        QtMocHelpers::SlotData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'activateLauncherMenu'
        QtMocHelpers::SlotData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadDefaultLayout'
        QtMocHelpers::SlotData<void()>(16, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAutostart'
        QtMocHelpers::SlotData<void(const bool &)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'addView'
        QtMocHelpers::SlotData<void(const uint &, const QString &)>(19, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'duplicateView'
        QtMocHelpers::SlotData<void(const uint &)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 },
        }}),
        // Slot 'exportViewTemplate'
        QtMocHelpers::SlotData<void(const uint &)>(23, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 },
        }}),
        // Slot 'moveViewToLayout'
        QtMocHelpers::SlotData<void(const uint &, const QString &)>(24, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'removeView'
        QtMocHelpers::SlotData<void(const uint &)>(26, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 },
        }}),
        // Slot 'setBackgroundFromBroadcast'
        QtMocHelpers::SlotData<void(QString, QString, QString)>(27, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 28 }, { QMetaType::QString, 29 }, { QMetaType::QString, 30 },
        }}),
        // Slot 'setBroadcastedBackgroundsEnabled'
        QtMocHelpers::SlotData<void(QString, QString, bool)>(31, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 28 }, { QMetaType::QString, 29 }, { QMetaType::Bool, 18 },
        }}),
        // Slot 'showAlternativesForApplet'
        QtMocHelpers::SlotData<void(Plasma::Applet *)>(32, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'toggleHiddenState'
        QtMocHelpers::SlotData<void(QString, QString, QString, int)>(35, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 }, { QMetaType::QString, 36 }, { QMetaType::QString, 29 }, { QMetaType::Int, 37 },
        }}),
        // Slot 'windowColorScheme'
        QtMocHelpers::SlotData<void(QString)>(38, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 39 },
        }}),
        // Slot 'updateDockItemBadge'
        QtMocHelpers::SlotData<void(QString, QString)>(40, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 41 }, { QMetaType::QString, 42 },
        }}),
        // Slot 'unload'
        QtMocHelpers::SlotData<void()>(43, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'alternativesVisibilityChanged'
        QtMocHelpers::SlotData<void(bool)>(44, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(46, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAboutToQuit'
        QtMocHelpers::SlotData<void()>(47, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScreenAdded'
        QtMocHelpers::SlotData<void(QScreen *)>(48, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 49, 50 },
        }}),
        // Slot 'onScreenRemoved'
        QtMocHelpers::SlotData<void(QScreen *)>(51, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 49, 50 },
        }}),
        // Slot 'onScreenCountChanged'
        QtMocHelpers::SlotData<void()>(52, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScreenGeometryChanged'
        QtMocHelpers::SlotData<void(const QRect &)>(53, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Slot 'onAvailableScreenRegionChangedFrom'
        QtMocHelpers::SlotData<void(Latte::View *)>(56, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 57 },
        }}),
        // Slot 'onAvailableScreenRectChangedFrom'
        QtMocHelpers::SlotData<void(Latte::View *)>(58, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 57 },
        }}),
        // Slot 'syncLatteViewsToScreens'
        QtMocHelpers::SlotData<void()>(59, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Corona, qt_meta_tag_ZN5Latte6CoronaE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Latte::Corona::staticMetaObject = { {
    QMetaObject::SuperData::link<Plasma::Corona::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6CoronaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6CoronaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte6CoronaE_t>.metaTypes,
    nullptr
} };

void Latte::Corona::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Corona *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configurationShown((*reinterpret_cast<std::add_pointer_t<PlasmaQuick::ConfigView*>>(_a[1]))); break;
        case 1: _t->viewLocationChanged(); break;
        case 2: _t->raiseViewsTemporaryChanged(); break;
        case 3: _t->availableScreenRectChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 4: _t->availableScreenRegionChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 5: _t->verticalUnityViewHasFocus(); break;
        case 6: _t->aboutApplication(); break;
        case 7: _t->activateLauncherMenu(); break;
        case 8: _t->loadDefaultLayout(); break;
        case 9: _t->setAutostart((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->addView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->duplicateView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 12: _t->exportViewTemplate((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 13: _t->moveViewToLayout((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->removeView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 15: _t->setBackgroundFromBroadcast((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->setBroadcastedBackgroundsEnabled((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 17: _t->showAlternativesForApplet((*reinterpret_cast<std::add_pointer_t<Plasma::Applet*>>(_a[1]))); break;
        case 18: _t->toggleHiddenState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 19: _t->windowColorScheme((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->updateDockItemBadge((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 21: _t->unload(); break;
        case 22: _t->alternativesVisibilityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->load(); break;
        case 24: _t->onAboutToQuit(); break;
        case 25: _t->onScreenAdded((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 26: _t->onScreenRemoved((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 27: _t->onScreenCountChanged(); break;
        case 28: _t->onScreenGeometryChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 29: _t->onAvailableScreenRegionChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 30: _t->onAvailableScreenRectChangedFrom((*reinterpret_cast<std::add_pointer_t<Latte::View*>>(_a[1]))); break;
        case 31: _t->syncLatteViewsToScreens(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlasmaQuick::ConfigView* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Plasma::Applet* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Corona::*)(PlasmaQuick::ConfigView * )>(_a, &Corona::configurationShown, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Corona::*)()>(_a, &Corona::viewLocationChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Corona::*)()>(_a, &Corona::raiseViewsTemporaryChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Corona::*)(Latte::View * )>(_a, &Corona::availableScreenRectChangedFrom, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Corona::*)(Latte::View * )>(_a, &Corona::availableScreenRegionChangedFrom, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Corona::*)()>(_a, &Corona::verticalUnityViewHasFocus, 5))
            return;
    }
}

const QMetaObject *Latte::Corona::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Corona::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte6CoronaE_t>.strings))
        return static_cast<void*>(this);
    return Plasma::Corona::qt_metacast(_clname);
}

int Latte::Corona::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Plasma::Corona::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void Latte::Corona::configurationShown(PlasmaQuick::ConfigView * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::Corona::viewLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Corona::raiseViewsTemporaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Corona::availableScreenRectChangedFrom(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Latte::Corona::availableScreenRegionChangedFrom(Latte::View * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Latte::Corona::verticalUnityViewHasFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
