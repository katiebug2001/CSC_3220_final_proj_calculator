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

    void on_actionPastelWinter_Blues_triggered();

//    void on_actionDarkening_Storm_2_triggered();

    void on_actionDarkening_Storm_3_triggered();

    void on_actionSteampunk_d_triggered();

    void on_actionNeon_triggered();

    void on_actionPastel_Galaxy_Purple_triggered();

    void on_actionBronze_Copper_triggered();

    void on_actionGold_triggered();

    void on_actionCopper_Rose_Gold_triggered();

    void on_actionUnderwater_triggered();

    void on_actionUnicorn_Candy_triggered();

    void on_actionVibrant_and_Elegant_triggered();

    void on_actionNighttime_Forest_Mysteries_triggered();

    void on_actionFantasy_Forest_triggered();

private:
    Ui::Calculator *ui;
    // state machine elements:
    enum Operation { none, plus, minus, mult, div};
    enum State { enter_num1, enter_num2, enter_num3, display_result };

    // state machine attributes
    float first_num = 0;
    Operation first_op = none;
    float second_num = 0;
    Operation second_op;
    float third_num = 0;
    State current_state = enter_num1;

    // other
//    int digits;
    QString display_num = "";
    bool has_decimal = false;

    const int max_display_len = 20;


// member functions
    void reset_and_setup();
    void reset_display_num();
    void set_display();

    void handle_digit_input( QString digit );
    void handle_operation( Calculator::Operation this_op );
    void eval_current_input();
    void do_operation( float a, float b, Operation op, float& result);

    // for evaluating an "a op b op c" format expression
    float eval_with_order_of_ops();

    void show_state();
};
#endif // CALCULATOR_H
