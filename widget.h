#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE
class stateChart;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    void stateMachineInit();

private:
    Ui::Widget *ui;
    stateChart *mMachine_;
    void switchLed(QString aStep);
};
#endif // WIDGET_H
