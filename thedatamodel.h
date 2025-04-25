#ifndef THEDATAMODEL_H
#define THEDATAMODEL_H

#include <QScxmlCppDataModel>

class TheDataModel : public QScxmlCppDataModel
{
    Q_OBJECT
    Q_SCXML_DATAMODEL

public:
    TheDataModel();

private:
    bool isValid() const;
    QVariantMap eventData() const;

    QString media;
};

#endif // THEDATAMODEL_H
