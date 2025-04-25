//
// Statemachine code from reading SCXML file 'stateChart.scxml'
// Created by: The Qt SCXML Compiler version 2 (Qt 6.3.0)
// WARNING! All changes made in this file will be lost!
//

#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <QScxmlStateMachine>
#include <QString>
#include <QVariant>

class stateChart: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool S1)
    Q_PROPERTY(bool S2)
    Q_PROPERTY(bool S3)


public:
    Q_INVOKABLE stateChart(QObject *parent = 0);
    ~stateChart();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

Q_DECLARE_METATYPE(::stateChart*)

#endif // STATEMACHINE_H
