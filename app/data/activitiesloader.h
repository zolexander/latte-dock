#pragma once
#include <QObject>
#include <plasmaactivities/consumer.h>
#include "activitydata.h"

namespace Latte { namespace Data {

class ActivitiesLoader : public QObject {
    Q_OBJECT
public:
    explicit ActivitiesLoader(QObject *parent = nullptr);
    ActivitiesTable table() const;

public Q_SLOTS:
    void reload();

Q_SIGNALS:
    void updated();

private:
    std::unique_ptr<KActivities::Consumer> m_consumer;
    ActivitiesTable m_table;
};

}} // namespace Latte::Data
