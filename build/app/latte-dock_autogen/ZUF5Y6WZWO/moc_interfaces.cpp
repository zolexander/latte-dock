/****************************************************************************
** Meta object code from reading C++ file 'interfaces.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/declarativeimports/interfaces.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfaces.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte10InterfacesE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Interfaces::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte10InterfacesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Interfaces",
        "interfaceChanged",
        "",
        "globalShortcutsChanged",
        "layoutsManagerChanged",
        "themeExtendedChanged",
        "universalSettingsChanged",
        "viewChanged",
        "updateView",
        "plasmoidInterface",
        "globalShortcuts",
        "layoutsManager",
        "themeExtended",
        "universalSettings",
        "view"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'interfaceChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'globalShortcutsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutsManagerChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeExtendedChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'universalSettingsChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateView'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'plasmoidInterface'
        QtMocHelpers::PropertyData<QObject*>(9, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'globalShortcuts'
        QtMocHelpers::PropertyData<QObject*>(10, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 1),
        // property 'layoutsManager'
        QtMocHelpers::PropertyData<QObject*>(11, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 2),
        // property 'themeExtended'
        QtMocHelpers::PropertyData<QObject*>(12, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 3),
        // property 'universalSettings'
        QtMocHelpers::PropertyData<QObject*>(13, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 4),
        // property 'view'
        QtMocHelpers::PropertyData<QObject*>(14, QMetaType::QObjectStar, QMC::DefaultPropertyFlags, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Interfaces, qt_meta_tag_ZN5Latte10InterfacesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Interfaces::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10InterfacesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10InterfacesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte10InterfacesE_t>.metaTypes,
    nullptr
} };

void Latte::Interfaces::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Interfaces *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->interfaceChanged(); break;
        case 1: _t->globalShortcutsChanged(); break;
        case 2: _t->layoutsManagerChanged(); break;
        case 3: _t->themeExtendedChanged(); break;
        case 4: _t->universalSettingsChanged(); break;
        case 5: _t->viewChanged(); break;
        case 6: _t->updateView(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::interfaceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::globalShortcutsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::layoutsManagerChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::themeExtendedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::universalSettingsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Interfaces::*)()>(_a, &Interfaces::viewChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QObject**>(_v) = _t->plasmoidInterface(); break;
        case 1: *reinterpret_cast<QObject**>(_v) = _t->globalShortcuts(); break;
        case 2: *reinterpret_cast<QObject**>(_v) = _t->layoutsManager(); break;
        case 3: *reinterpret_cast<QObject**>(_v) = _t->themeExtended(); break;
        case 4: *reinterpret_cast<QObject**>(_v) = _t->universalSettings(); break;
        case 5: *reinterpret_cast<QObject**>(_v) = _t->view(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlasmoidInterface(*reinterpret_cast<QObject**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::Interfaces::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Interfaces::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10InterfacesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Interfaces::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Latte::Interfaces::interfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Interfaces::globalShortcutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Interfaces::layoutsManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Interfaces::themeExtendedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Interfaces::universalSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Interfaces::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
