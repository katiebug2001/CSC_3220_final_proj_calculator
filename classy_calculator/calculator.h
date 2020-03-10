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

private:
    Ui::Calculator *ui;
    void foobar();

    void foo();

    void testmeee();

    int digits;
    QString display_num = " ";
    double val;
    int sign = 1;

};
#endif // CALCULATOR_H
