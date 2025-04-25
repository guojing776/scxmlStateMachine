#include "thedatamodel.h"

#include <QtScxml/qscxmlevent.h>


TheDataModel::TheDataModel()
{

}

bool TheDataModel::isValid() const
{
    QString event = eventData().value(QStringLiteral("myData")).toString();
    return event.size() > 0;
}

QVariantMap TheDataModel::eventData() const
{
    return scxmlEvent().data().value<QVariantMap>();
}
