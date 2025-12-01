/****************************************************************************
** Meta object code from reading C++ file 'originalview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/originalview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'originalview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte12OriginalViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::OriginalView::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte12OriginalViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::OriginalView",
        "screensGroupChanged",
        "",
        "cleanClones",
        "syncClonesToScreens",
        "restoreConfig",
        "saveConfig",
        "screensGroup",
        "Latte::Types::ScreensGroup"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'screensGroupChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cleanClones'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'syncClonesToScreens'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreConfig'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'screensGroup'
        QtMocHelpers::PropertyData<Latte::Types::ScreensGroup>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OriginalView, qt_meta_tag_ZN5Latte12OriginalViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Latte12OriginalViewE[] = {
    QMetaObject::SuperData::link<Latte::Types::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Latte::OriginalView::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12OriginalViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12OriginalViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Latte12OriginalViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte12OriginalViewE_t>.metaTypes,
    nullptr
} };

void Latte::OriginalView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OriginalView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->screensGroupChanged(); break;
        case 1: _t->cleanClones(); break;
        case 2: _t->syncClonesToScreens(); break;
        case 3: _t->restoreConfig(); break;
        case 4: _t->saveConfig(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OriginalView::*)()>(_a, &OriginalView::screensGroupChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Latte::Types::ScreensGroup*>(_v) = _t->screensGroup(); break;
        default: break;
        }
    }
}

const QMetaObject *Latte::OriginalView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::OriginalView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte12OriginalViewE_t>.strings))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int Latte::OriginalView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Latte::OriginalView::screensGroupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
