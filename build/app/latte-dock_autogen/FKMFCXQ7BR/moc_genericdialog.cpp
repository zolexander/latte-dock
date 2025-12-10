/****************************************************************************
** Meta object code from reading C++ file 'genericdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/settings/generic/genericdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Settings::Dialog::GenericDialog::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Settings::Dialog::GenericDialog",
        "initMessageWidget",
        "KMessageWidget*",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initMessageWidget'
        QtMocHelpers::SlotData<KMessageWidget *()>(1, 3, QMC::AccessPrivate, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericDialog, qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Settings::Dialog::GenericDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>.metaTypes,
    nullptr
} };

void Latte::Settings::Dialog::GenericDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { KMessageWidget* _r = _t->initMessageWidget();
            if (_a[0]) *reinterpret_cast<KMessageWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Latte::Settings::Dialog::GenericDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Settings::Dialog::GenericDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8Settings6Dialog13GenericDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Latte::Settings::Dialog::GenericDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
