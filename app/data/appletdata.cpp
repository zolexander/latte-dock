/*
SPDX-FileCopyrightText: 2020 Michail Vourlakos <mvourlakos@gmail.com>
SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "appletdata.h"

namespace Latte {
namespace Data {

Applet::Applet()
    : Generic()
{
}

Applet::Applet(Applet &&o)
    : Generic(std::move(o)),
      isSelected(o.isSelected),
      description(o.description),
      icon(o.icon),
      storageId(o.storageId),
      subcontainmentId(o.subcontainmentId)
{
}

Applet::Applet(const Applet &o)
    : Generic(o),
      isSelected(o.isSelected),
      description(o.description),
      icon(o.icon),
      storageId(o.storageId),
      subcontainmentId(o.subcontainmentId)
{
}

Applet &Applet::operator=(const Applet &rhs)
{
    if (this == &rhs) {
        return *this;
    }

    id = rhs.id;
    name = rhs.name;
    description = rhs.description;
    isSelected = rhs.isSelected;
    icon = rhs.icon;
    storageId = rhs.storageId;
    subcontainmentId = rhs.subcontainmentId;

    return (*this);
}

Applet &Applet::operator=(Applet &&rhs)
{
    if (this == &rhs) {
        return *this;
    }

    id = std::move(rhs.id);
    name = std::move(rhs.name);
    description = std::move(rhs.description);
    isSelected = rhs.isSelected;
    icon = std::move(rhs.icon);
    storageId = std::move(rhs.storageId);
    subcontainmentId = std::move(rhs.subcontainmentId);

    return (*this);
}

bool Applet::operator==(const Applet &rhs) const
{
    return (id == rhs.id)
            && (name == rhs.name)
            && (description == rhs.description)
            && (icon == rhs.icon)
            && (isSelected == rhs.isSelected)
            && (storageId == rhs.storageId)
            && (subcontainmentId == rhs.subcontainmentId);
}

bool Applet::operator!=(const Applet &rhs) const
{
    return !(*this == rhs);
}

bool Applet::isInstalled() const
{
    return isValid() && id != name;
}

bool Applet::isValid() const
{
    return !id.isEmpty();
}

QString Applet::visibleName() const
{
    return name.isEmpty() ? id : name;
}

}
}
