#include "calculator.h"
#include "ui_calculator.h"
#include <iostream>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    foobar();
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::foobar()
{
    std::cout << "hello world" << std::endl;
}

void Calculator::foo()
{
    std::cout << "goodbye world" << std::endl;
}


