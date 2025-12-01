/****************************************************************************
** Meta object code from reading C++ file 'clonedview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/view/clonedview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clonedview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Latte10ClonedViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Latte::ClonedView::qt_create_metaobjectdata<qt_meta_tag_ZN5Latte10ClonedViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Latte::ClonedView",
        "initSync",
        "",
        "onOriginalAppletConfigPropertyChanged",
        "id",
        "key",
        "QVariant",
        "value",
        "onOriginalAppletInScheduledDestructionChanged",
        "enabled",
        "onOriginalAppletRemoved",
        "onOriginalAppletsOrderChanged",
        "onOriginalAppletsInLockedZoomChanged",
        "QList<int>",
        "originalapplets",
        "onOriginalAppletsDisabledColoringChanged",
        "updateContainmentConfigProperty",
        "updateOriginalAppletConfigProperty",
        "clonedid",
        "updateAppletIdsHash"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initSync'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOriginalAppletConfigPropertyChanged'
        QtMocHelpers::SlotData<void(const int &, const QString &, const QVariant &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::QString, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onOriginalAppletInScheduledDestructionChanged'
        QtMocHelpers::SlotData<void(const int &, const bool &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Bool, 9 },
        }}),
        // Slot 'onOriginalAppletRemoved'
        QtMocHelpers::SlotData<void(const int &)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'onOriginalAppletsOrderChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOriginalAppletsInLockedZoomChanged'
        QtMocHelpers::SlotData<void(const QList<int> &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'onOriginalAppletsDisabledColoringChanged'
        QtMocHelpers::SlotData<void(const QList<int> &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'updateContainmentConfigProperty'
        QtMocHelpers::SlotData<void(const QString &, const QVariant &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateOriginalAppletConfigProperty'
        QtMocHelpers::SlotData<void(const int &, const QString &, const QVariant &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 18 }, { QMetaType::QString, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateAppletIdsHash'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ClonedView, qt_meta_tag_ZN5Latte10ClonedViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Latte::ClonedView::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ClonedViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ClonedViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Latte10ClonedViewE_t>.metaTypes,
    nullptr
} };

void Latte::ClonedView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClonedView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initSync(); break;
        case 1: _t->onOriginalAppletConfigPropertyChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 2: _t->onOriginalAppletInScheduledDestructionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->onOriginalAppletRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onOriginalAppletsOrderChanged(); break;
        case 5: _t->onOriginalAppletsInLockedZoomChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 6: _t->onOriginalAppletsDisabledColoringChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 7: _t->updateContainmentConfigProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 8: _t->updateOriginalAppletConfigProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 9: _t->updateAppletIdsHash(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Latte::ClonedView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ClonedView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Latte10ClonedViewE_t>.strings))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int Latte::ClonedView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
