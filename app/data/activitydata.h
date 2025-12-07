/*
    Modernized Plasma-6 version
*/

#ifndef ACTIVITYDATA_H
#define ACTIVITYDATA_H

//! local
#include "genericdata.h"
#include "generictable.h"

//! Qt
#include <QMetaType>
#include <QString>
#include <QIcon>

//! Plasma Activities (KF6)
#include <plasmaactivities/consumer.h>
#include <plasmaactivities/info.h>

namespace Latte {
namespace Data {

class Activity : public Generic
{
public:
    Activity();
    Activity(Activity &&o) noexcept;
    Activity(const Activity &other);

    //! Activity data
    QString iconName;
    bool isCurrent{false};
    bool available{false};

    //! Checks
    bool isValid() const;     // availability != Nothing
    bool isRunning() const;   // KF6: Activities are "running" if available

    //! Operators
    Activity &operator=(const Activity &rhs);
    Activity &operator=(Activity &&rhs);
};

//! Activities table
typedef GenericTable<Data::Activity> ActivitiesTable;

}
}

Q_DECLARE_METATYPE(Latte::Data::Activity)
Q_DECLARE_METATYPE(Latte::Data::ActivitiesTable)

#endif
