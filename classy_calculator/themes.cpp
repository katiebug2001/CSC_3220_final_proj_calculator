#include "calculator.h"
#include "ui_calculator.h"

void Calculator::on_actionPastelWinter_Blues_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(186,214,227)";
    QString buttonText = "color: rgb(0,0,0)";
    QString displayBackground = "background-color: rgb(221,254,255)";
    QString displayText = "color: rgb(0,0,0)";
    QString menuBackground = "background-color: rgb(186,214,227)";
    QString menuText = "color: rgb(0,0,0)";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;

    palWin.setColor(QPalette::Window,QColor::fromRgb(207,238,253));
    palWin.setColor(QPalette::Button,QColor::fromRgb(186,214,227));

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

    ui->div_button->setStyleSheet(buttonColors);
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
    ui->clear_button->setStyleSheet(buttonColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonColors);
    ui->div_button->setStyleSheet(buttonColors);
    ui->mult_button->setStyleSheet(buttonColors);
    ui->plus_button->setStyleSheet(buttonColors);
    ui->minu_button->setStyleSheet(buttonColors);
    ui->enter_button->setStyleSheet(buttonColors);

}

void Calculator::on_actionDarkening_Storm_3_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(9,52,63)";
    QString buttonText = "color: rgb(243,255,255)";
    QString displayBackground = "background-color: rgb(106,155,164)";
    QString displayText = "color: rgb(0,0,0)";
    QString menuBackground = "background-color: rgb(9,52,63)";
    QString menuText = "color: rgb(243,255,255)";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(53,99,124));
    palWin.setColor(QPalette::Button,QColor::fromRgb(9,52,63));
    palWin.setColor(QPalette::Text,QColor::fromRgb(243,255,255));
    palWin.setColor(QPalette::ButtonText,QColor::fromRgb(243,255,255));

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

    ui->div_button->setStyleSheet(buttonColors);
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
    ui->clear_button->setStyleSheet(buttonColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonColors);
    ui->div_button->setStyleSheet(buttonColors);
    ui->mult_button->setStyleSheet(buttonColors);
    ui->plus_button->setStyleSheet(buttonColors);
    ui->minu_button->setStyleSheet(buttonColors);
    ui->enter_button->setStyleSheet(buttonColors);
}

void Calculator::on_actionSteampunk_d_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(174,135,42);"
                               "border-color: rgb(120,97,40);";
    QString buttonText = "color: rgb(39,17,5);"
                         "font: italic 14pt 'Monotype Corsiva'";
    QString displayBackground = "background-color: rgb(174,135,42)";
    QString displayText = "color: rgb(39,17,5);"
                          "font: italic 14pt 'Monotype Corsiva'";
    QString menuBackground = "background-color: rgb(69,22,6)";
    QString menuText = "color: rgb(174,135,42);"
                       "font: 14pt 'Monotype Corsiva'";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(101,26,18));
    palWin.setColor(QPalette::Button,QColor::fromRgb(9,52,63));
    palWin.setColor(QPalette::Text,QColor::fromRgb(39,17,5));
    palWin.setColor(QPalette::ButtonText,QColor::fromRgb(39,17,5));

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

    ui->div_button->setStyleSheet(buttonColors);
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
    ui->clear_button->setStyleSheet(buttonColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonColors);
    ui->div_button->setStyleSheet(buttonColors);
    ui->mult_button->setStyleSheet(buttonColors);
    ui->plus_button->setStyleSheet(buttonColors);
    ui->minu_button->setStyleSheet(buttonColors);
    ui->enter_button->setStyleSheet(buttonColors);
}

void Calculator::on_actionNeon_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(41,40,40); border-color: rgb(42,243,62)";
    QString buttonText = "color: rgb(42,243,62);";
    QString buttonOpBackground = "background-color: rgb(41,40,40); border-color: rgb(255,0,147)";
    QString buttonOpText = "color: rgb(255,0,147);";
    QString displayBackground = "background-color: rgb(41,40,40); border-color: rgb(41,40,40)";
    QString displayText = "color: rgb(0,241,255); font: bold";
    QString menuBackground = "background-color: rgb(41,40,40)";
    QString menuText = "color: rgb(255,0,147);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(18,17,17));
    palWin.setColor(QPalette::Button,QColor::fromRgb(9,52,63));
    palWin.setColor(QPalette::Text,QColor::fromRgb(39,17,5));
    palWin.setColor(QPalette::ButtonText,QColor::fromRgb(39,17,5));

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

    ui->div_button->setStyleSheet(buttonColors);
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
    ui->clear_button->setStyleSheet(buttonOpColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonOpColors);
    ui->div_button->setStyleSheet(buttonOpColors);
    ui->mult_button->setStyleSheet(buttonOpColors);
    ui->plus_button->setStyleSheet(buttonOpColors);
    ui->minu_button->setStyleSheet(buttonOpColors);
    ui->enter_button->setStyleSheet(buttonOpColors);
}

void Calculator::on_actionPastel_Galaxy_Purple_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(188,150,201)";
    QString buttonText = "color: rgb(0,0,0)";
    QString displayBackground = "background-color: rgb(203,157,212)";
    QString displayText = "color: rgb(0,0,0)";
    QString menuBackground = "background-color: rgb(152,130,175)";
    QString menuText = "color: rgb(0,0,0)";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;

    palWin.setColor(QPalette::Window,QColor::fromRgb(169,145,195));
    //palWin.setColor(QPalette::Button,QColor::fromRgb(186,214,227));

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

    ui->div_button->setStyleSheet(buttonColors);
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
    ui->clear_button->setStyleSheet(buttonColors);
    ui->decimal_button->setStyleSheet(buttonColors);
    ui->delete_button->setStyleSheet(buttonColors);
    ui->div_button->setStyleSheet(buttonColors);
    ui->mult_button->setStyleSheet(buttonColors);
    ui->plus_button->setStyleSheet(buttonColors);
    ui->minu_button->setStyleSheet(buttonColors);
    ui->enter_button->setStyleSheet(buttonColors);
}
