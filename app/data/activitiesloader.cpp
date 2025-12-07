#include "activitiesloader.h"
#include <plasmaactivities/info.h>
// using namespace Latte::Data; // Avoid global using directive in source files

ActivitiesLoader::ActivitiesLoader(QObject *parent)
    : QObject(parent),
      m_consumer(new KActivities::Consumer(this)) // Qt parent-child ownership handles deletion
{
    // All activity changes should trigger a reload
    connect(m_consumer, &KActivities::Consumer::activitiesChanged, this, &ActivitiesLoader::reload);
    connect(m_consumer, &KActivities::Consumer::activitiesAdded, this, &ActivitiesLoader::reload);
    connect(m_consumer, &KActivities::Consumer::activitiesRemoved, this, &ActivitiesLoader::reload);
    reload();
}

Latte::Data::ActivitiesTable ActivitiesLoader::table() const
{
    return m_table;
}
void ActivitiesLoader::reload()
{
    static QHash<QString, KActivities::Info *> infoCache;
    m_table.clear();
    for (const QString &id : m_consumer->activities())
    {
        KActivities::Info *info = nullptr;
        if (infoCache.contains(id))
        {
            info = infoCache.value(id);
        }
        else
        {
            info = new KActivities::Info(id);
            a.isCurrent = info.isCurrent();
            // "available" is true if the activity is not in the "Nothing" state (i.e., it is available for use)
            a.available = (info.availability() != KActivities::Info::Nothing);
            m_table[id] = a;
            a.id = id;
            a.name = info->name();
            a.icon = info->icon();
            a.isCurrent = info->isCurrent();
            m_table[id] = a;
        }
        // Notify listeners that the activities table has been updated
        emit updated();
    }
}
        infoCache.insert(id, info);
    }
    // Notify listeners that the activities table has been updated
    emit updated();
}
