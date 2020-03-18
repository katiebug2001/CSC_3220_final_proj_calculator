#include "calculator.h"
#include "ui_calculator.h"
#include <iostream>
#include <cmath>

#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    reset_and_setup();

    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(187,187,187);";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(187,187,187);";
    QString buttonOpText = "color: rgb(0,0,0);";
    QString displayBackground = "background-color: rgb(238,238,238);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(170,170,170)";
    QString menuText = "color: rgb(0,0,0);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(204,204,204));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
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

    reset_display_num();
    display_num = "0";
    set_display();
    current_state = State::enter_num1;
}

void Calculator::reset_display_num()
{
    has_decimal = false;
    display_num = "";
    set_display();
}


// sets display to display_num
void Calculator::set_display()
{
    ui->calc_input->setText( display_num );
}


void Calculator::handle_digit_input( QString digit)
{
    if ( current_state != display_result )
    {
        // if the display is 0 and NOT '0.'
        if ( display_num.toInt() == 0 && !(display_num.contains( '.' ) ) )
        {
            display_num = digit;
        }
        else if( digit.size() <= max_display_len )
        {
            display_num.append( digit );
        }
        set_display();
    }
    else
    {
        reset_and_setup();
        handle_digit_input( digit );
    }
}

void Calculator::handle_operation( Calculator::Operation this_op )
{
    // initialize variable to hold result in case
    // we want to clear state but save the current result
    float result;
    switch ( current_state )
    {
    case 0: // enter_num1
        first_num = display_num.toFloat();
        reset_display_num();
        first_op = this_op;
        current_state = State::enter_num2;
        break;
    case 1: // enter_num2
        second_num = display_num.toFloat();
        reset_display_num();
        second_op = this_op;
        current_state = State::enter_num3;
        break;
    case 2: // enter_num3
        third_num = display_num.toFloat();
        reset_display_num();
        // save result so we can clear
        result = eval_with_order_of_ops();
        reset_and_setup();
        first_num = result;
        first_op = this_op;
        current_state = State::enter_num2;
        break;
    case 3: // display_results
        result = display_num.toFloat();
        reset_and_setup();
        first_op = this_op;
        first_num = result;
        current_state = enter_num2;
        break;
    }
    set_display();
//    show_state();
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
        second_num = display_num.toFloat();
        display_num = QString::number( eval_with_order_of_ops() );
        break;
    case 2: // enter_num3
        third_num = display_num.toFloat();
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
//    show_state();
}

void Calculator::do_operation(float a, float b, Calculator::Operation op, float &result)
{
    switch( op )
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
}


// evaluate "a op b op c", taking order of operations "PEMDAS" into account
float Calculator::eval_with_order_of_ops()
{
//    show_state();
    bool first_is_add = ( first_op == plus ) || ( first_op == minus );
    bool first_is_mult = ( first_op == mult ) || ( first_op == div );
    bool second_is_add = ( second_op == plus ) || ( second_op == minus );
    bool second_is_mult = ( second_op == mult ) || ( second_op == div );

    float result;

    if ( first_is_add && second_is_mult ) // x + y*z
    {
        do_operation( second_num, third_num, second_op, result ); // y * z
        do_operation( first_num, result, first_op, result ); // x + ( y * z )
    }
    else if ( first_is_mult && second_is_add ) // x*y + z
    {
        do_operation( first_num, second_num, first_op, result ); // x * y
        do_operation( result, third_num, second_op, result ); // (x*y) + z
    }
    else // x op y OR x*y*z OR x + y + z
    {
        do_operation( first_num, second_num, first_op, result); // x op y
        do_operation(result, third_num, second_op, result); // (x op y) op z
    }
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
    handle_digit_input( "1" );
}


void Calculator::on_two_button_clicked()
{
    handle_digit_input( "2" );
}

void Calculator::on_three_button_clicked()
{
    handle_digit_input( "3" );
}

void Calculator::on_four_button_clicked()
{
    handle_digit_input( "4" );
}

void Calculator::on_five_button_clicked()
{
    handle_digit_input( "5" );
}

void Calculator::on_six_button_clicked()
{
    handle_digit_input( "6" );
}

void Calculator::on_seven_button_clicked()
{
    handle_digit_input( "7" );
}

void Calculator::on_eight_button_clicked()
{
    handle_digit_input( "8" );
}

void Calculator::on_nine_button_clicked()
{
    handle_digit_input( "9" );
}


void Calculator::on_zero_button_clicked()
{
    handle_digit_input( "0" );
}


void Calculator::on_decimal_button_clicked()
{
    if( has_decimal == 0 )
    {
        if( display_num.size() == 0)
        {
            display_num.append("0.");
        }
        else
        {
            display_num.append(".");
        }
        has_decimal = true;
    }
    set_display();
}


void Calculator::on_changesign_button_clicked()
{
    if( display_num.contains('-') )
    {
        display_num.remove(0, 1);
    }
    else
    {
        display_num.push_front( '-' );
    }
    set_display();
}


void Calculator::on_clear_button_clicked()
{
    reset_and_setup();
}


void Calculator::on_delete_button_clicked()
{
    int digits = display_num.size();
    if ( digits != 0 && current_state != display_result )
    {
        if(display_num.at( digits - 1 ) == ".")
        {
            has_decimal = false;
        }
        display_num.remove( ( digits - 1 ), 1 );
        set_display();
    }
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
    eval_current_input();
}

void Calculator::applyTheme(QPalette pal, QString nums, QString ops, QString displ, QString menu)
{
    QPalette palWin = pal;
    QString displayColors = displ;
    QString menuColors = menu;
    QString buttonColors = nums;
    QString buttonOpColors = ops;
    ui->centralwidget->setAutoFillBackground(true);
    ui->centralwidget->setPalette(palWin);


    ui->calc_input->setAutoFillBackground(true);
    ui->calc_input->setStyleSheet(displayColors);

    ui->menubar->setAutoFillBackground(true);
    ui->menubar->setStyleSheet(menuColors);

    ui->div_button->setAutoFillBackground(true);
    ui->one_button->setAutoFillBackground(true);
    ui->two_button->setAutoFillBackground(true);
    ui->three_button->setAutoFillBackground(true);
    ui->four_button->setAutoFillBackground(true);
    ui->five_button->setAutoFillBackground(true);
    ui->six_button->setAutoFillBackground(true);
    ui->seven_button->setAutoFillBackground(true);
    ui->eight_button->setAutoFillBackground(true);
    ui->nine_button->setAutoFillBackground(true);
    ui->zero_button->setAutoFillBackground(true);
    ui->changesign_button->setAutoFillBackground(true);
    ui->clear_button->setAutoFillBackground(true);
    ui->decimal_button->setAutoFillBackground(true);
    ui->delete_button->setAutoFillBackground(true);
    ui->div_button->setAutoFillBackground(true);
    ui->mult_button->setAutoFillBackground(true);
    ui->plus_button->setAutoFillBackground(true);
    ui->minu_button->setAutoFillBackground(true);
    ui->enter_button->setAutoFillBackground(true);

//    ui->centralwidget->setStyleSheet( "QPushButton: { buttonColors }");
      ui->div_button->setStyleSheet( buttonColors );
//      ui->div_button->setStyleSheet( "hover: { background-color: yellow; }" );
    ui->one_button->setStyleSheet(buttonColors);
    ui->two_button->setStyleSheet(buttonColors);
    ui->three_button->setStyleSheet(buttonColors);
    ui->four_button->setStyleSheet(buttonColors);
    ui->five_button->setStyleSheet(buttonColors);
    ui->six_button->setStyleSheet(buttonColors);
    ui->seven_button->setStyleSheet(buttonColors);
    ui->eight_button->setStyleSheet(buttonColors);
    ui->nine_button->setStyleSheet(buttonColors);
    ui->zero_button->setStyleSheet(buttonColors);
    ui->changesign_button->setStyleSheet(buttonColors);
    ui->pi_button->setStyleSheet(buttonColors);
    ui->e_button->setStyleSheet(buttonColors);
    ui->clear_button->setStyleSheet(buttonOpColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonOpColors);
    ui->div_button->setStyleSheet(buttonOpColors);
    ui->mult_button->setStyleSheet(buttonOpColors);
    ui->plus_button->setStyleSheet(buttonOpColors);
    ui->minu_button->setStyleSheet(buttonOpColors);
    ui->enter_button->setStyleSheet(buttonOpColors);

}

void Calculator::on_pi_button_clicked()
{
    // note: pi will erase whatever is currently on display
    reset_display_num();
    display_num = QString::number( M_PI );
    has_decimal = true;
    set_display();
}

void Calculator::on_e_button_clicked()
{
    // note: e will erase whatever is currenty on display
    reset_display_num();
    display_num = QString::number( std::exp( 1 ) );
    has_decimal = true;
    set_display();
}
