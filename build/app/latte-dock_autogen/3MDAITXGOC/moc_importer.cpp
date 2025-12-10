/****************************************************************************
** Meta object code from reading C++ file 'importer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/layouts/importer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte7Layouts8ImporterE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::Layouts::Importer::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::Layouts::Importer",
        "newLayoutAdded",
        "",
        "path",
        "LatteFileVersion",
        "UnknownFileType",
        "LayoutVersion1",
        "ConfigVersion1",
        "LayoutVersion2",
        "ConfigVersion2"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newLayoutAdded'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'LatteFileVersion'
        QtMocHelpers::EnumData<enum LatteFileVersion>(4, 4, QMC::EnumFlags{}).add({
            {    5, LatteFileVersion::UnknownFileType },
            {    6, LatteFileVersion::LayoutVersion1 },
            {    7, LatteFileVersion::ConfigVersion1 },
            {    8, LatteFileVersion::LayoutVersion2 },
            {    9, LatteFileVersion::ConfigVersion2 },
        }),
    };
    return QtMocHelpers::metaObjectData<Importer, qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::Layouts::Importer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>.metaTypes,
    nullptr
} };

void Latte::Layouts::Importer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Importer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newLayoutAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Importer::*)(const QString & )>(_a, &Importer::newLayoutAdded, 0))
            return;
    }
}

const QMetaObject *Latte::Layouts::Importer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::Importer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte7Layouts8ImporterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::Importer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Latte::Layouts::Importer::newLayoutAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
