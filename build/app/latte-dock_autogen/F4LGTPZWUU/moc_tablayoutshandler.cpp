/****************************************************************************
** Meta object code from reading C++ file 'tablayoutshandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/settingsdialog/tablayoutshandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablayoutshandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Handler::TabLayouts::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Handler::TabLayouts",
        "currentPageChanged",
        "",
        "onDragEnterEvent",
        "QDragEnterEvent*",
        "event",
        "onDragLeaveEvent",
        "QDragLeaveEvent*",
        "onDragMoveEvent",
        "QDragMoveEvent*",
        "onDropEvent",
        "QDropEvent*",
        "showViewsDialog",
        "reset",
        "resetDefaults",
        "save",
        "initUi",
        "initLayoutMenu",
        "loadConfig",
        "saveConfig",
        "downloadLayout",
        "duplicateLayout",
        "switchLayout",
        "importLayout",
        "exportLayoutForBackup",
        "exportLayoutAsTemplate",
        "lockLayout",
        "removeLayout",
        "toggleActivitiesManager",
        "toggleEnabledLayout",
        "showDetailsDialog",
        "onCurrentPageChanged",
        "onLayoutFilesDropped",
        "paths",
        "onRawLayoutDropped",
        "rawLayout",
        "updatePerLayoutButtonsState",
        "newLayout",
        "templateName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentPageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDragEnterEvent'
        QtMocHelpers::SlotData<void(QDragEnterEvent *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onDragLeaveEvent'
        QtMocHelpers::SlotData<void(QDragLeaveEvent *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 5 },
        }}),
        // Slot 'onDragMoveEvent'
        QtMocHelpers::SlotData<void(QDragMoveEvent *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 5 },
        }}),
        // Slot 'onDropEvent'
        QtMocHelpers::SlotData<void(QDropEvent *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 5 },
        }}),
        // Slot 'showViewsDialog'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetDefaults'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initUi'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initLayoutMenu'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'downloadLayout'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'duplicateLayout'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchLayout'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'importLayout'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportLayoutForBackup'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportLayoutAsTemplate'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'lockLayout'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeLayout'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleActivitiesManager'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleEnabledLayout'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showDetailsDialog'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCurrentPageChanged'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLayoutFilesDropped'
        QtMocHelpers::SlotData<void(const QStringList &)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 33 },
        }}),
        // Slot 'onRawLayoutDropped'
        QtMocHelpers::SlotData<void(const QString &)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'updatePerLayoutButtonsState'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newLayout'
        QtMocHelpers::SlotData<void(const QString &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabLayouts, qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Handler::TabLayouts::staticMetaObject = { {
    QMetaObject::SuperData::link<Generic::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Handler::TabLayouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabLayouts *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentPageChanged(); break;
        case 1: _t->onDragEnterEvent((*reinterpret_cast<std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 2: _t->onDragLeaveEvent((*reinterpret_cast<std::add_pointer_t<QDragLeaveEvent*>>(_a[1]))); break;
        case 3: _t->onDragMoveEvent((*reinterpret_cast<std::add_pointer_t<QDragMoveEvent*>>(_a[1]))); break;
        case 4: _t->onDropEvent((*reinterpret_cast<std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 5: _t->showViewsDialog(); break;
        case 6: _t->reset(); break;
        case 7: _t->resetDefaults(); break;
        case 8: _t->save(); break;
        case 9: _t->initUi(); break;
        case 10: _t->initLayoutMenu(); break;
        case 11: _t->loadConfig(); break;
        case 12: _t->saveConfig(); break;
        case 13: _t->downloadLayout(); break;
        case 14: _t->duplicateLayout(); break;
        case 15: _t->switchLayout(); break;
        case 16: _t->importLayout(); break;
        case 17: _t->exportLayoutForBackup(); break;
        case 18: _t->exportLayoutAsTemplate(); break;
        case 19: _t->lockLayout(); break;
        case 20: _t->removeLayout(); break;
        case 21: _t->toggleActivitiesManager(); break;
        case 22: _t->toggleEnabledLayout(); break;
        case 23: _t->showDetailsDialog(); break;
        case 24: _t->onCurrentPageChanged(); break;
        case 25: _t->onLayoutFilesDropped((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 26: _t->onRawLayoutDropped((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->updatePerLayoutButtonsState(); break;
        case 28: _t->newLayout((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabLayouts::*)()>(_a, &TabLayouts::currentPageChanged, 0))
            return;
    }
}

const QMetaObject *Latte::Settings::Handler::TabLayouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Handler::TabLayouts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings7Handler10TabLayoutsE_t>.strings))
        return static_cast<void*>(this);
    return Generic::qt_metacast(_clname);
}

int Latte::Settings::Handler::TabLayouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Generic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Latte::Settings::Handler::TabLayouts::currentPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
