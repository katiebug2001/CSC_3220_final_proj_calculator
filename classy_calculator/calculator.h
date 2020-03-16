#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    void set_to_base_state();
    void set_display();

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

    void on_actionPastelWinter_Blues_triggered();

    void on_actionDarkening_Storm_2_triggered();

    void on_actionDarkening_Storm_3_triggered();

    void on_actionSteampunk_d_triggered();

    void on_actionNeon_triggered();

private:
    Ui::Calculator *ui;
    // state machine elements:
    enum Operation { plus, minus, mult, div };
    enum State { initial, transition_from_initial, transition, transition_from_transition,
                 trailing, transition_from_trailing, equal};

    int first_num = 0;
    Operation first_op;
    int second_num = 0;
    Operation second_op;
    int trailing_num = 0;
    State current_state;

    int digits;
    QString display_num = " ";
    double val;
    int sign = 1;
    bool decimal = 0;


};
#endif // CALCULATOR_H
