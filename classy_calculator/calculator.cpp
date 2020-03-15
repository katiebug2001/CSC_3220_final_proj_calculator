#include "calculator.h"
#include "ui_calculator.h"
#include <iostream>

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

void Calculator::on_one_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("1");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_two_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("2");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_three_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("3");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_four_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("4");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_five_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("5");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_six_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("6");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_seven_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("7");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_eight_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("8");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_nine_button_clicked()
{
    if(digits <= 20)
    {
        display_num.append("9");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_zero_button_clicked()
{
//TODO make it so 0's don't keep appearing if the only thing on the screen is 0
    if(digits <= 20)
    {
        display_num.append("0");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_decimal_button_clicked()
{
// TODO we can input 2 decimals in a row if they're the only thing on screen
    bool decimal = 0;
    for(int i = 0; i < digits; i++)
    {
        if(display_num.at(i) == ".")
        {
            decimal = 1;
        }
    }
    if(decimal == 0 && digits <= 20)
    {
        display_num.append(".");
        digits += 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_changesign_button_clicked()
{
    if(display_num.at(0) == " ")
    {
        display_num.replace(0,1,"-");
        sign = -1;
        ui->calc_input->setText(display_num);
    }
    else
    {
        display_num.replace(0,1," ");
        sign = 1;
        ui->calc_input->setText(display_num);
    }
}

void Calculator::on_clear_button_clicked()
{
    display_num = " ";
    digits = 0;
    sign = 1;
    ui->calc_input->setText(display_num);
}

void Calculator::on_delete_button_clicked()
{
    display_num.remove(digits,1);
    digits -= 1;
    ui->calc_input->setText(display_num);
}
