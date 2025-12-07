#include "activitydata.h"

namespace Latte {
namespace Data {

Activity::Activity()
    : Generic()
{
}

Activity::Activity(Activity &&o) noexcept
    : Generic(o),
      iconName(o.iconName),
      isCurrent(o.isCurrent),
      available(o.available)
{
}

Activity::Activity(const Activity &o)
    : Generic(o),
      iconName(o.iconName),
      isCurrent(o.isCurrent),
      available(o.available)
{
}

Activity &Activity::operator=(const Activity &rhs)
{
    id = rhs.id;
    name = rhs.name;
    iconName = rhs.iconName;
    isCurrent = rhs.isCurrent;
    available = rhs.available;

    return (*this);
}

Activity &Activity::operator=(Activity &&rhs)
{
    id = rhs.id;
    name = rhs.name;
    iconName = rhs.iconName;
    isCurrent = rhs.isCurrent;
    available = rhs.available;

    return (*this);
}

bool Activity::isValid() const
{
    return available;
}

bool Activity::isRunning() const
{
    // KF6: “running” Zustand gibt es nicht mehr – wenn verfügbar, dann nutzbar
    return available;
}

}
}
