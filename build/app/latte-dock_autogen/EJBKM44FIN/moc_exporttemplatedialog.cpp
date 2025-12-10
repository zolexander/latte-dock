/****************************************************************************
** Meta object code from reading C++ file 'exporttemplatedialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/exporttemplatedialog/exporttemplatedialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exporttemplatedialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Dialog::ExportTemplateDialog::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Dialog::ExportTemplateDialog",
        "onCancel",
        "",
        "onDataChanged",
        "onExportSucceeded",
        "onReset",
        "initButtons",
        "initExportButton",
        "tooltip",
        "initSignals"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onCancel'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDataChanged'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportSucceeded'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initButtons'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initExportButton'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'initSignals'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExportTemplateDialog, qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Dialog::ExportTemplateDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GenericDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Dialog::ExportTemplateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExportTemplateDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onCancel(); break;
        case 1: _t->onDataChanged(); break;
        case 2: _t->onExportSucceeded(); break;
        case 3: _t->onReset(); break;
        case 4: _t->initButtons(); break;
        case 5: _t->initExportButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->initSignals(); break;
        default: ;
        }
    }
}

const QMetaObject *Latte::Settings::Dialog::ExportTemplateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Dialog::ExportTemplateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog20ExportTemplateDialogE_t>.strings))
        return static_cast<void*>(this);
    return GenericDialog::qt_metacast(_clname);
}

int Latte::Settings::Dialog::ExportTemplateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
