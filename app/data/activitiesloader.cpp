#include "activitiesloader.h"
#include <plasmaactivities/info.h>
using namespace Latte::Data;

ActivitiesLoader::ActivitiesLoader(QObject *parent)
    : QObject(parent),
      m_consumer(new KActivities::Consumer(this))
{
    connect(m_consumer, &KActivities::Consumer::activitiesChanged, this, &ActivitiesLoader::reload);
    connect(m_consumer, &KActivities::Consumer::activitiesAdded, this, &ActivitiesLoader::reload);
    connect(m_consumer, &KActivities::Consumer::activitiesRemoved, this, &ActivitiesLoader::reload);
    reload();
}

ActivitiesTable ActivitiesLoader::table() const
{
    return m_table;
}

void ActivitiesLoader::reload()
{
    m_table.clear();
    for (const QString &id : m_consumer->activities()) {
        KActivities::Info info(id);
        Activity a;
        a.id = id;
        a.name = info.name();
        a.icon = info.icon();
        a.isCurrent = info.isCurrent();
        a.available = (info.availability() != KActivities::Info::Nothing);
        m_table[id] = a;
    }
    emit updated();
}
