#include "calculator.h"
#include "ui_calculator.h"
#include <iostream>

#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    reset_and_setup();
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::reset_and_setup()
{
    first_num = 0;
    first_op = Operation::none;
    second_num = 0;
    second_op = Operation::none;
    third_num = 0;

    display_num = "";
    set_display();
    current_state = State::enter_num1;
}


// sets display to display_num
void Calculator::set_display()
{
    qDebug() << "setting display " << display_num;
    ui->calc_input->setText( display_num );
}

void Calculator::handle_operation( Calculator::Operation this_op )
{
    // initialize variable to hold result in case
    // we want to do an intermediate evaluation to handle
    // a op b op c op d, because we only have 3 spaces
    // so we can clear state variables cleanly
    int result;
    switch ( current_state )
    {
    case 0: // enter_num1
        first_num = display_num.toInt();
        display_num = "";
        first_op = this_op;
        current_state = State::enter_num2;
        break;
    case 1: // enter_num2
        second_num = display_num.toInt();
        display_num = "";
        second_op = this_op;
        current_state = State::enter_num3;
        break;
    case 2: // enter_num3
        third_num = display_num.toInt();
        display_num = "";
        // save result so we can clear
        result = eval_with_order_of_ops();
        reset_and_setup();
        first_num = result;
        first_op = this_op;
        current_state = State::enter_num2;
        break;
    case 3: // display_results
        first_num = display_num.toInt();
        display_num = "";
        first_op = this_op;
        current_state = enter_num2;
        break;
    }
    set_display();
    show_state();
}


void Calculator::eval_current_input()
{
    switch ( current_state )
    {
    case 0: // enter_num1
        // don't do any operations if asked to eval a single number
        // note: the state is still changed ( at the end of the fct)
        break;
    case 1: // enter_num2
        qDebug() << "it's an x op y ";
        second_num = display_num.toInt();
        display_num = QString::number( eval_with_order_of_ops() );
    case 2: // enter_num3
        third_num = display_num.toInt();
        // evaluate order of operations
        display_num = QString::number( eval_with_order_of_ops() );
        break;
    case 3: // display_num
        // do nothing if asked to eval multiple times in a row
        // with no added inputs
        break;
    }
    current_state = State::display_result;
    set_display();
    show_state();
}


// evaluate "a op b op c", taking order of operations "PEMDAS" into account
int Calculator::eval_with_order_of_ops()
{
    qDebug() << "doing order of ops eval";
    show_state();
    bool first_is_add = ( first_op == plus ) | ( first_op == minus );
    bool second_is_mult = ( first_op == mult ) | ( first_op == div );

    // put the expression in the form of a*b + c
    // we reorder the expression here so we only need
    // one switch statement for each operation later
    int result = 0;
    int a;
    int b;
    int c;
    Operation temp_first_op;
    Operation temp_second_op;

    if ( first_is_add && second_is_mult ) // if the expression is currently x + y*z
    {
        // turn ( z + x*y ) into ( x*y + z )
        qDebug() << "reordering expression";
        a = second_num;
        b = third_num;
        c = first_num;
        temp_first_op = second_op;
        temp_second_op = first_op;
    }
    else
        // the expression is already in the form a*b + c
        // OR a*b*c
        // OR a + b + c
        // OR a op b
    {
        a = first_num;
        b = second_num;
        c = third_num;
        temp_first_op = first_op;
        temp_second_op = second_op;
    }

    // find (a op b)
    switch( temp_first_op )
    {

    case 0: // none
        break;
    case 1: // plus
        result = a + b;
        break;
    case 2: // minus
        result = a - b;
        break;
    case 3: // mult
        result = a * b;
        break;
    case 4: // div
        result = a / b;
        break;
    }

    // find (a op b) op c
    switch ( temp_second_op )
    {
    case 0: // none
        // note: this will trigger on expressions that are ONLY (a op b)
        break;
    case 1: // plus
        result += c;
        break;
    case 2: // minus
        result -= c;
        break;
    case 3: // mult
        result *= c;
        break;
    case 4: // div
        result /= c;
        break;
    }
    qDebug() << "result: " << result;
    return result;
}


void Calculator::show_state()
{
    qDebug() << "\nCURRENT STATE"
             << "\nnum 1: " << first_num
             << "\nop 1: " << first_op
             << "\nnum 2: " << second_num
             << "\nop 2: " << second_op
             << "\nnum 3: " << third_num
             << "\nstate: " << current_state << "\n";
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
    if(digits <= 20)
    {
        display_num.append("0");
        digits += 1;
        set_display();
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
    reset_and_setup();
}


void Calculator::on_delete_button_clicked()
{
    display_num.remove(digits,1);
    digits -= 1;
    set_display();
}


void Calculator::on_plus_button_clicked()
{
    handle_operation( Operation::plus );
}


void Calculator::on_minu_button_clicked()
{
    handle_operation( Operation::minus );
}


void Calculator::on_mult_button_clicked()
{
    handle_operation( Operation::mult );
}


void Calculator::on_div_button_clicked()
{
    handle_operation( Operation::div );
}


void Calculator::on_enter_button_clicked()
{
    qDebug() << "evaluating";
    eval_current_input();
}
