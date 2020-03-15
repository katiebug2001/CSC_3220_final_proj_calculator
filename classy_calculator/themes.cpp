#include "calculator.h"
#include "ui_calculator.h"

void Calculator::on_actionPastelWinter_Blues_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(186,214,227)";
    QString displayBackground = "background-color: rgb(221,254,255)";
    QString menuBackground = "background-color: rgb(186,214,227)";

    palWin.setColor(QPalette::Window,QColor::fromRgb(207,238,253));
    palWin.setColor(QPalette::Button,QColor::fromRgb(186,214,227));

    ui->centralwidget->setAutoFillBackground(true);
    ui->centralwidget->setPalette(palWin);

    ui->calc_input->setAutoFillBackground(true);
    ui->calc_input->setStyleSheet(displayBackground);

    ui->menubar->setAutoFillBackground(true);
    ui->menubar->setStyleSheet(menuBackground);

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

    ui->div_button->setStyleSheet(buttonBackground);
    ui->one_button->setStyleSheet(buttonBackground);
    ui->two_button->setStyleSheet(buttonBackground);
    ui->three_button->setStyleSheet(buttonBackground);
    ui->four_button->setStyleSheet(buttonBackground);
    ui->five_button->setStyleSheet(buttonBackground);
    ui->six_button->setStyleSheet(buttonBackground);
    ui->seven_button->setStyleSheet(buttonBackground);
    ui->eight_button->setStyleSheet(buttonBackground);
    ui->nine_button->setStyleSheet(buttonBackground);
    ui->zero_button->setStyleSheet(buttonBackground);
    ui->changesign_button->setStyleSheet(buttonBackground);
    ui->clear_button->setStyleSheet(buttonBackground);
    ui->decimal_button->setStyleSheet(buttonBackground);
    ui->delete_button->setStyleSheet(buttonBackground);
    ui->div_button->setStyleSheet(buttonBackground);
    ui->mult_button->setStyleSheet(buttonBackground);
    ui->plus_button->setStyleSheet(buttonBackground);
    ui->minu_button->setStyleSheet(buttonBackground);
    ui->enter_button->setStyleSheet(buttonBackground);

}
