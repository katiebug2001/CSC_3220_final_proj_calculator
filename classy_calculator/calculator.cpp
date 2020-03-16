#include "calculator.h"
#include "ui_calculator.h"
#include <iostream>

#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    set_to_base_state();
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::set_to_base_state()
{
    /*
    this.__FIRST = "0";
    this.__OP1 = Calc.OP.PLUS;
    this.__SECOND = "0";
    this.__OP2 = Calc.OP.PLUS;
    this.__TRAILING = "0";
    this.__DISPLAY = Calc.DISP.FIRST;
    this.__STATE = Calc.STATE.INITIAL;*/
    first_num = 0;
    first_op = Operation::plus;
    second_num = 0;
    second_op = Operation::plus;
    trailing_num = 0;

    display_num = QString::number( first_num );
    qDebug() << "first num is " << first_num;
    qDebug() << "disp num should be " << display_num;
    set_display();
    current_state = State::initial;
}


// sets display to display_num
void Calculator::set_display()
{
    qDebug() << "setting display";
    ui->calc_input->setText( display_num );
}


// slots
void Calculator::on_one_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("1");
        digits += 1;
        set_display();
    }
}

void Calculator::on_two_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("2");
        digits += 1;
        set_display();
    }
}

void Calculator::on_three_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("3");
        digits += 1;
        set_display();
    }
}

void Calculator::on_four_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("4");
        digits += 1;
        set_display();
    }
}

void Calculator::on_five_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("5");
        digits += 1;
        set_display();
    }
}

void Calculator::on_six_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("6");
        digits += 1;
        set_display();
    }
}

void Calculator::on_seven_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("7");
        digits += 1;
        set_display();
    }
}

void Calculator::on_eight_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("8");
        digits += 1;
        set_display();
    }
}

void Calculator::on_nine_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("9");
        digits += 1;
        set_display();
    }
}

void Calculator::on_zero_button_clicked()
{
//TODO make it so 0's don't keep appearing if the only thing on the screen is 0
    if(digits <= 20)
    {
        display_num.append("0");
        digits += 1;
        set_display();
    }
}

void Calculator::on_decimal_button_clicked()
{
// TODO we can input 2 decimals in a row if they're the only thing on scree
    if(decimal == 0)
    {
        if(digits == 0)
        {
            display_num.append("0.");
            digits += 2;
        }
        else
        {
            display_num.append(".");
            digits += 1;
        }
        decimal = 1;
    }
    ui->calc_input->setText(display_num);
    if(decimal == 0 && digits <= 20)
    {
        display_num.append(".");
        digits += 1;
        set_display();
    }
}

void Calculator::on_changesign_button_clicked()
{
    if(display_num.at(0) == " ")
    {
        display_num.replace(0,1,"-");
        sign = -1;
        set_display();
    }
    else
    {
        display_num.replace(0,1," ");
        sign = 1;
        set_display();
    }
}

void Calculator::on_clear_button_clicked()
{
    display_num = " ";
    digits = 0;
    sign = 1;
    decimal = 0;
    ui->calc_input->setText(display_num);
    set_display();
}

void Calculator::on_delete_button_clicked()
{
    if(display_num.at(digits) == ".")
    {
        decimal = 0;
    }
    display_num.remove(digits,1);
    digits -= 1;
    if(digits == 1 && display_num.at(digits) == "0")
    {
        display_num = " ";
        digits = 0;
    }
    ui->calc_input->setText(display_num);
    set_display();
}


