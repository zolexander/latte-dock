/****************************************************************************
** Meta object code from reading C++ file 'syncedlaunchers.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layouts/syncedlaunchers.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncedlaunchers.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layouts::SyncedLaunchers::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layouts::SyncedLaunchers",
        "addAbilityClient",
        "",
        "QQuickItem*",
        "client",
        "removeAbilityClient",
        "addLauncher",
        "layoutName",
        "senderId",
        "launcherGroup",
        "launcherGroupId",
        "launcher",
        "removeLauncher",
        "addLauncherToActivity",
        "activity",
        "removeLauncherFromActivity",
        "urlsDropped",
        "urls",
        "validateLaunchersOrder",
        "launchers",
        "removeClientObject",
        "obj"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'addAbilityClient'
        QtMocHelpers::SlotData<void(QQuickItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'removeAbilityClient'
        QtMocHelpers::SlotData<void(QQuickItem *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'addLauncher'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QString, 11 },
        }}),
        // Slot 'removeLauncher'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QString, 11 },
        }}),
        // Slot 'addLauncherToActivity'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QString, QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QString, 11 }, { QMetaType::QString, 14 },
        }}),
        // Slot 'removeLauncherFromActivity'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QString, QString)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QString, 11 }, { QMetaType::QString, 14 },
        }}),
        // Slot 'urlsDropped'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QStringList)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QStringList, 17 },
        }}),
        // Slot 'validateLaunchersOrder'
        QtMocHelpers::SlotData<void(QString, uint, int, QString, QStringList)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::UInt, 8 }, { QMetaType::Int, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QStringList, 19 },
        }}),
        // Slot 'removeClientObject'
        QtMocHelpers::SlotData<void(QObject *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SyncedLaunchers, qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Layouts::SyncedLaunchers::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>.metaTypes,
    nullptr
} };

void Latte::Layouts::SyncedLaunchers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SyncedLaunchers *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addAbilityClient((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 1: _t->removeAbilityClient((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 2: _t->addLauncher((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5]))); break;
        case 3: _t->removeLauncher((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5]))); break;
        case 4: _t->addLauncherToActivity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6]))); break;
        case 5: _t->removeLauncherFromActivity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6]))); break;
        case 6: _t->urlsDropped((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[5]))); break;
        case 7: _t->validateLaunchersOrder((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[5]))); break;
        case 8: _t->removeClientObject((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Latte::Layouts::SyncedLaunchers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::SyncedLaunchers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts15SyncedLaunchersE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::SyncedLaunchers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
