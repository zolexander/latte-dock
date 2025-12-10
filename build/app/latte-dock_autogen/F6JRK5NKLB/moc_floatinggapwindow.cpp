/****************************************************************************
** Meta object code from reading C++ file 'floatinggapwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/helpers/floatinggapwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'floatinggapwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::FloatingGapWindow::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::FloatingGapWindow",
        "asyncContainsMouseChanged",
        "",
        "contains"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'asyncContainsMouseChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FloatingGapWindow, qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::FloatingGapWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<SubWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::FloatingGapWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FloatingGapWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->asyncContainsMouseChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FloatingGapWindow::*)(bool )>(_a, &FloatingGapWindow::asyncContainsMouseChanged, 0))
            return;
    }
}

const QMetaObject *Latte::ViewPart::FloatingGapWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::FloatingGapWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart17FloatingGapWindowE_t>.strings))
        return static_cast<void*>(this);
    return SubWindow::qt_metacast(_clname);
}

int Latte::ViewPart::FloatingGapWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubWindow::qt_metacall(_c, _id, _a);
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
void Latte::ViewPart::FloatingGapWindow::asyncContainsMouseChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
