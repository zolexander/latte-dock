/****************************************************************************
** Meta object code from reading C++ file 'lattedockadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lattedockadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lattedockadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16LatteDockAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto LatteDockAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN16LatteDockAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LatteDockAdaptor",
        "D-Bus Interface",
        "org.kde.LatteDock",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.LatteDock\">\n    <method name=\"activ"
        "ateLauncherMenu\"/>\n    <method name=\"quitApplication\"/>\n    <"
        "method name=\"setAutostart\">\n      <arg direction=\"in\" type=\""
        "b\" name=\"enabled\"/>\n    </method>\n    <method name=\"updateDo"
        "ckItemBadge\">\n      <arg direction=\"in\" type=\"s\" name=\"iden"
        "tifier\"/>\n      <arg direction=\"in\" type=\"s\" name=\"value\"/"
        ">\n    </method>\n    <method name=\"windowColorScheme\">\n      <"
        "arg direction=\"in\" type=\"s\" name=\"windowIdAndScheme\"/>\n    "
        "</method>\n    <method name=\"switchToLayout\">\n      <arg direct"
        "ion=\"in\" type=\"s\" name=\"layout\"/>\n    </method>\n    <metho"
        "d name=\"importLayoutFile\">\n      <arg direction=\"in\" type=\"s"
        "\" name=\"filepath\"/>\n      <arg direction=\"in\" type=\"s\" nam"
        "e=\"suggestedLayoutName\"/>\n    </method>\n    <method name=\"exp"
        "ortViewTemplate\">\n      <arg direction=\"in\" type=\"u\" name=\""
        "containmentId\"/>\n    </method>\n    <method name=\"addView\">\n "
        "     <arg direction=\"in\" type=\"u\" name=\"containmentId\"/>\n  "
        "    <arg direction=\"in\" type=\"s\" name=\"templateId\"/>\n    </"
        "method>\n    <method name=\"duplicateView\">\n      <arg direction"
        "=\"in\" type=\"u\" name=\"containmentId\"/>\n    </method>\n    <m"
        "ethod name=\"moveViewToLayout\">\n      <arg direction=\"in\" type"
        "=\"u\" name=\"containmentId\"/>\n      <arg direction=\"in\" type="
        "\"s\" name=\"layoutName\"/>\n    </method>\n    <method name=\"rem"
        "oveView\">\n      <arg direction=\"in\" type=\"u\" name=\"containm"
        "entId\"/>\n    </method>\n    <method name=\"showSettingsWindow\">"
        "\n      <arg direction=\"in\" type=\"i\" name=\"page\"/>\n    </me"
        "thod>\n    <method name=\"contextMenuData\">\n      <arg direction"
        "=\"out\" type=\"as\" name=\"data\"/>\n      <arg direction=\"in\" "
        "type=\"u\" name=\"containmentId\"/>\n    </method>\n    <method na"
        "me=\"viewTemplatesData\">\n      <arg direction=\"out\" type=\"as\""
        " name=\"data\"/>\n    </method>\n    <method name=\"setBackgroundF"
        "romBroadcast\">\n      <arg direction=\"in\" type=\"s\" name=\"act"
        "ivity\"/>\n      <arg direction=\"in\" type=\"s\" name=\"screenNam"
        "e\"/>\n      <arg direction=\"in\" type=\"s\" name=\"filename\"/>\n"
        "    </method>\n    <method name=\"setBroadcastedBackgroundsEnabled"
        "\">\n      <arg direction=\"in\" type=\"s\" name=\"activity\"/>\n "
        "     <arg direction=\"in\" type=\"s\" name=\"screenName\"/>\n     "
        " <arg direction=\"in\" type=\"b\" name=\"enabled\"/>\n    </method"
        ">\n    <method name=\"toggleHiddenState\">\n      <arg direction=\""
        "in\" type=\"s\" name=\"layoutName\"/>\n      <arg direction=\"in\""
        " type=\"s\" name=\"viewName\"/>\n      <arg direction=\"in\" type="
        "\"s\" name=\"screenName\"/>\n      <arg direction=\"in\" type=\"i\""
        " name=\"screenEdge\"/>\n    </method>\n  </interface>\n",
        "activateLauncherMenu",
        "",
        "addView",
        "containmentId",
        "templateId",
        "contextMenuData",
        "duplicateView",
        "exportViewTemplate",
        "importLayoutFile",
        "filepath",
        "suggestedLayoutName",
        "moveViewToLayout",
        "layoutName",
        "quitApplication",
        "removeView",
        "setAutostart",
        "enabled",
        "setBackgroundFromBroadcast",
        "activity",
        "screenName",
        "filename",
        "setBroadcastedBackgroundsEnabled",
        "showSettingsWindow",
        "page",
        "switchToLayout",
        "layout",
        "toggleHiddenState",
        "viewName",
        "screenEdge",
        "updateDockItemBadge",
        "identifier",
        "value",
        "viewTemplatesData",
        "windowColorScheme",
        "windowIdAndScheme"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'activateLauncherMenu'
        QtMocHelpers::SlotData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addView'
        QtMocHelpers::SlotData<void(uint, const QString &)>(7, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'contextMenuData'
        QtMocHelpers::SlotData<QStringList(uint)>(10, 6, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'duplicateView'
        QtMocHelpers::SlotData<void(uint)>(11, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'exportViewTemplate'
        QtMocHelpers::SlotData<void(uint)>(12, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'importLayoutFile'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(13, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
        }}),
        // Slot 'moveViewToLayout'
        QtMocHelpers::SlotData<void(uint, const QString &)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'quitApplication'
        QtMocHelpers::SlotData<void()>(18, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeView'
        QtMocHelpers::SlotData<void(uint)>(19, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'setAutostart'
        QtMocHelpers::SlotData<void(bool)>(20, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'setBackgroundFromBroadcast'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(22, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 }, { QMetaType::QString, 24 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'setBroadcastedBackgroundsEnabled'
        QtMocHelpers::SlotData<void(const QString &, const QString &, bool)>(26, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 }, { QMetaType::QString, 24 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'showSettingsWindow'
        QtMocHelpers::SlotData<void(int)>(27, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Slot 'switchToLayout'
        QtMocHelpers::SlotData<void(const QString &)>(29, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Slot 'toggleHiddenState'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, int)>(31, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QString, 32 }, { QMetaType::QString, 24 }, { QMetaType::Int, 33 },
        }}),
        // Slot 'updateDockItemBadge'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(34, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 },
        }}),
        // Slot 'viewTemplatesData'
        QtMocHelpers::SlotData<QStringList()>(37, 6, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'windowColorScheme'
        QtMocHelpers::SlotData<void(const QString &)>(38, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 39 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<LatteDockAdaptor, qt_meta_tag_ZN16LatteDockAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject LatteDockAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16LatteDockAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16LatteDockAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16LatteDockAdaptorE_t>.metaTypes,
    nullptr
} };

void LatteDockAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LatteDockAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activateLauncherMenu(); break;
        case 1: _t->addView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: { QStringList _r = _t->contextMenuData((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->duplicateView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->exportViewTemplate((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->importLayoutFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->moveViewToLayout((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->quitApplication(); break;
        case 8: _t->removeView((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 9: _t->setAutostart((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setBackgroundFromBroadcast((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->setBroadcastedBackgroundsEnabled((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 12: _t->showSettingsWindow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->switchToLayout((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->toggleHiddenState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 15: _t->updateDockItemBadge((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: { QStringList _r = _t->viewTemplatesData();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->windowColorScheme((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LatteDockAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatteDockAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16LatteDockAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int LatteDockAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
