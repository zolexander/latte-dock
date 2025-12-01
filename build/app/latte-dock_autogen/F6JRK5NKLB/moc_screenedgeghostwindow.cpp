/****************************************************************************
** Meta object code from reading C++ file 'screenedgeghostwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/helpers/screenedgeghostwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenedgeghostwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ViewPart::ScreenEdgeGhostWindow::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ViewPart::ScreenEdgeGhostWindow",
        "containsMouseChanged",
        "",
        "contains",
        "dragEntered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'containsMouseChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'dragEntered'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenEdgeGhostWindow, qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ViewPart::ScreenEdgeGhostWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<SubWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>.metaTypes,
    nullptr
} };

void Latte::ViewPart::ScreenEdgeGhostWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenEdgeGhostWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->containsMouseChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->dragEntered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeGhostWindow::*)(bool )>(_a, &ScreenEdgeGhostWindow::containsMouseChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeGhostWindow::*)()>(_a, &ScreenEdgeGhostWindow::dragEntered, 1))
            return;
    }
}

const QMetaObject *Latte::ViewPart::ScreenEdgeGhostWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::ScreenEdgeGhostWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte8ViewPart21ScreenEdgeGhostWindowE_t>.strings))
        return static_cast<void*>(this);
    return SubWindow::qt_metacast(_clname);
}

int Latte::ViewPart::ScreenEdgeGhostWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::ScreenEdgeGhostWindow::containsMouseChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Latte::ViewPart::ScreenEdgeGhostWindow::dragEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
