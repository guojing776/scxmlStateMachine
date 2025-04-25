#include "widget.h"
#include "./ui_widget.h"
#include "stateChart.h"

const QString COLOR = ("border-radius: 50%;background-color: %1;min-width: 100px;min-height: 100px;");

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , mMachine_(new stateChart(this))
{
    ui->setupUi(this);


    stateMachineInit();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::stateMachineInit()
{
    connect(mMachine_, &QScxmlStateMachine::reachedStableState, [=](){
        qDebug() << "Current state: " << mMachine_->activeStateNames();
        switchLed(mMachine_->activeStateNames().value(0));
    });

    // 启动状态机
    mMachine_->start();

    // 点击按钮，执行槽函数
    connect(ui->switchBtn, &QAbstractButton::clicked, [=](){
        // 向状态机发送转换条件(事件)
        mMachine_->submitEvent("button.clicked");
    });
}

void Widget::switchLed(QString aStep)
{
    ui->S1Frame->setStyleSheet(COLOR.arg("white"));
    ui->S2Frame->setStyleSheet(COLOR.arg("white"));
    ui->S3Frame->setStyleSheet(COLOR.arg("white"));

    if ("S1" == aStep)
    {
        ui->S1Frame->setStyleSheet(COLOR.arg("green"));
    }
    else if ("S2" == aStep)
    {
        ui->S2Frame->setStyleSheet(COLOR.arg("yellow"));
    }
    else if ("S3" == aStep)
    {
        ui->S3Frame->setStyleSheet(COLOR.arg("red"));
    }
}
