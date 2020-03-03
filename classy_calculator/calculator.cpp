#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

QString Calculator::testFunc()
{
    qDebug() << "It works!";
    return "It works!";
}

