#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <set>


QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();



private slots:
    void on_one_button_clicked();

    void on_two_button_clicked();

    void on_three_button_clicked();

    void on_four_button_clicked();

    void on_five_button_clicked();

    void on_six_button_clicked();

    void on_seven_button_clicked();

    void on_eight_button_clicked();

    void on_nine_button_clicked();

    void on_zero_button_clicked();

    void on_decimal_button_clicked();

    void on_changesign_button_clicked();

    void on_clear_button_clicked();

    void on_delete_button_clicked();

    void on_plus_button_clicked();

    void on_minu_button_clicked();

    void on_mult_button_clicked();

    void on_div_button_clicked();

    void on_enter_button_clicked();

private:
    Ui::Calculator *ui;
    // state machine elements:
    enum Operation { none, plus, minus, mult, div};
    enum State { enter_num1, enter_num2, enter_num3, display_result };

    int first_num = 0;
    Operation first_op = none;
    int second_num = 0;
    Operation second_op;
    int third_num = 0;
    State current_state = enter_num1;

    int digits;
    QString display_num = " ";
    double val;
    int sign = 1;

// member functions
    void reset_and_setup();
    void set_display();

    void handle_operation( Calculator::Operation this_op );
    void eval_current_input();

    // for evaluating an "a op b op c" format expression
    int eval_with_order_of_ops();

    void show_state();
};
#endif // CALCULATOR_H
