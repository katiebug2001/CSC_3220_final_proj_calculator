#include "calculator.h"
#include "ui_calculator.h"

void Calculator::on_actionPastelWinter_Blues_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(186,214,227); border: 1px solid rgb(207,238,253)";
    QString buttonText = "color: rgb(0,0,0)";
    QString displayBackground = "background-color: rgb(221,254,255); border: 1px solid rgb(207,238,253)";
    QString displayText = "color: rgb(0,0,0)";
    QString menuBackground = "background-color: rgb(186,214,227)";
    QString menuText = "color: rgb(0,0,0)";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;

    palWin.setColor(QPalette::Window,QColor::fromRgb(207,238,253));
    palWin.setColor(QPalette::Button,QColor::fromRgb(207,238,253));

    applyTheme(palWin, buttonColors,buttonColors,displayColors,menuColors);

}

void Calculator::on_actionDarkening_Storm_3_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(9,52,63); border: 1px solid rgb(53,99,124)";
    QString buttonText = "color: rgb(243,255,255)";
    QString displayBackground = "background-color: rgb(106,155,164); border: 1px solid rgb(53,99,124)";
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

    applyTheme(palWin,buttonColors,buttonColors,displayColors,menuColors);
}

void Calculator::on_actionSteampunk_d_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(174,135,42);"
                               "border: 1px solid rgb(120,97,40);";
    QString buttonText = "color: rgb(39,17,5);"
                         "font: italic 14pt 'Monotype Corsiva'";
    QString displayBackground = "background-color: rgb(174,135,42)";
    QString displayText = "color: rgb(39,17,5);"
                          "font: italic 14pt 'Monotype Corsiva'";
    QString menuBackground = "background-color: rgb(69,22,6)";
    QString menuText = "color: rgb(174,135,42);"
                       "font: 12pt 'Monotype Corsiva'";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(101,26,18));
    palWin.setColor(QPalette::Button,QColor::fromRgb(9,52,63));
    palWin.setColor(QPalette::Text,QColor::fromRgb(39,17,5));
    palWin.setColor(QPalette::ButtonText,QColor::fromRgb(39,17,5));

    applyTheme(palWin,buttonColors,buttonColors,displayColors,menuColors);
}

void Calculator::on_actionNeon_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(41,40,40); border: 1px solid rgb(18,17,17)";
    QString buttonText = "color: rgb(42,243,62);";
    QString buttonOpBackground = "background-color: rgb(41,40,40); border: 1px solid rgb(18,17,17)";
    QString buttonOpText = "color: rgb(255,0,147);";
    QString displayBackground = "background-color: rgb(41,40,40); border: 1px solid rgb(0,241,255)";
    QString displayText = "color: rgb(0,241,255);";
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

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionPastel_Galaxy_Purple_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(188,150,201); border: 1px solid rgb(169,145,195)";
    QString buttonText = "color: rgb(0,0,0)";
    QString displayBackground = "background-color: rgb(203,157,212); border: 1px solid rgb(169,145,195)";
    QString displayText = "color: rgb(0,0,0)";
    QString menuBackground = "background-color: rgb(152,130,175)";
    QString menuText = "color: rgb(0,0,0)";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;

    palWin.setColor(QPalette::Window,QColor::fromRgb(169,145,195));
    //palWin.setColor(QPalette::Button,QColor::fromRgb(186,214,227));

    applyTheme(palWin,buttonColors,buttonColors,displayColors,menuColors);
}

void Calculator::on_actionGold_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(179,151,104); border: 1px solid rgb(162,133,91)";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(138,119,89); border: 1px solid rgb(162,133,91)";
    QString buttonOpText = "color: rgb(255,255,255);";
    QString displayBackground = "background-color: rgb(193,162,115);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(138,119,89)";
    QString menuText = "color: rgb(255,255,255);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(162,133,91));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionCopper_Rose_Gold_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(187,120,91); border: 1px solid rgb(169,97,72)";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(169,97,72); border: 1px solid rgb(178,120,98)";
    QString buttonOpText = "color: rgb(255,255,255);";
    QString displayBackground = "background-color: rgb(191,129,106); border: 1px solid rgb(169,97,72)";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(169,97,72)";
    QString menuText = "color: rgb(255,255,255);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(178,120,98));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionBronze_Copper_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(166,129,100); border: 1px solid rgb(131,100,72)";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(131,100,72); border: 1px solid rgb(153,118,88)";
    QString buttonOpText = "color: rgb(255,255,255);";
    QString displayBackground = "background-color: rgb(169,133,101);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(131,100,72)";
    QString menuText = "color: rgb(0,0,0);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(153,118,88));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionVibrant_and_Elegant_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(36,48,94); border: 1px solid rgb(55,71,133)";
    QString buttonText = "color: rgb(248,233,161);";
    QString buttonOpBackground = "background-color: rgb(36,48,94); border: 1px solid rgb(55,71,133)";
    QString buttonOpText = "color: rgb(248,233,161);";
    QString displayBackground = "background-color: rgb(168,208,230);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(36,48,94)";
    QString menuText = "color: rgb(248,233,161);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(55,71,133));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionUnderwater_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(0,194,199); border: 1px solid rgb(0,134,173)";
    QString buttonText = "color: rgb(218,248,227); font: bold;";
    QString buttonOpBackground = "background-color: rgb(0,85,130); border: 1px solid rgb(0,134,173)";
    QString buttonOpText = "color: rgb(218,248,227);";
    QString displayBackground = "background-color: rgb(151,235,219);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(0,85,130)";
    QString menuText = "color: rgb(218,248,227);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(0,134,173));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionUnicorn_Candy_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(238,213,255);";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(255,192,215);";
    QString buttonOpText = "color: rgb(0,0,0);";
    QString displayBackground = "background-color: rgb(255,249,193);";
    QString displayText = "color: rgb(0,0,0);";
    QString menuBackground = "background-color: rgb(207,235,210)";
    QString menuText = "color: rgb(0,0,0);";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(208,244,244));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionNighttime_Forest_Mysteries_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(0,53,86); border: 1px solid rgb(0,61,118)";
    QString buttonText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString buttonOpBackground = "background-color: rgb(51,0,86); border: 1px solid rgb(0,61,118)";
    QString buttonOpText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString displayBackground = "background-color: rgb(50,97,119);";
    QString displayText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString menuBackground = "background-color: rgb(16,0,86)";
    QString menuText = "color: rgb(255,255,255); font: 10pt 'Baskerville Old Face'";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(0,61,118));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);


}

void Calculator::on_actionFantasy_Forest_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(14,86,5); border: 1px solid rgb(19,66,33)";
    QString buttonText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString buttonOpBackground = "background-color: rgb(63,43,61); border: 1px solid rgb(19,66,33)";
    QString buttonOpText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString displayBackground = "background-color: rgb(46,86,82);";
    QString displayText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString menuBackground = "background-color: rgb(19,66,33)";
    QString menuText = "color: rgb(255,255,255); font: 10pt 'Baskerville Old Face'";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(10,80,54));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionDefault_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(187,187,187); border: 1px solid rgb(204,204,204)";
    QString buttonText = "color: rgb(0,0,0);";
    QString buttonOpBackground = "background-color: rgb(187,187,187); border: 1px solid rgb(204,204,204)";
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

void Calculator::on_actionSerenity_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(187,187,187); border: 1px solid rgb(0,0,0)";
    QString buttonText = "color: #1b1924;";
    QString buttonOpBackground = "background-color: rgb(187,187,187); border: 1px solid rgb(0,0,0)";
    QString buttonOpText = "color: #3f3232;";
    QString displayBackground = "background-color: #dcd9c6;";
    QString displayText = "color: #000000;";
    QString menuBackground = "background-color: rgb(170,170,170)";
    QString menuText = "color: #1b1924;";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(181,193,180));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionPier_Blues_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: #c2d3da; border: 1px solid rgb(129,163,167)";
    QString buttonText = "color: #272424;";
    QString buttonOpBackground = "background-color: #c2d3da; border: 1px solid rgb(129,163,167)";
    QString buttonOpText = "color: #272424;";
    QString displayBackground = "background-color: #f1f3f2;";
    QString displayText = "color: #272424;";
    QString menuBackground = "background-color: #585a56";
    QString menuText = "color: #f1f3f2;";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(129,163,167));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionUnderwater_Greens_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: #55d9c0; border: 1px solid #107050";
    QString buttonText = "color: #02231c;";
    QString buttonOpBackground = "background-color: #55d9c0; border: 1px solid #107050";
    QString buttonOpText = "color: #02231c;";
    QString displayBackground = "background-color: #c7f6ec; border: 1px solid #107050";
    QString displayText = "color: #02231c;";
    QString menuBackground = "background-color: #107050";
    QString menuText = "color: #c7f6ec;";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(77,216,173));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionCalming_Sea_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: #99bfaa; border: 1px solid rgb(200,214,202)";
    QString buttonText = "color: #e7f5de;";
    QString buttonOpBackground = "background-color: #5c868d; border: 1px solid rgb(200,214,202)";
    QString buttonOpText = "color: #e7f5de;";
    QString displayBackground = "background-color: #e7f5de;";
    QString displayText = "color: #5c3d46;";
    QString menuBackground = "background-color: #5c3d46";
    QString menuText = "color: #e7f5de;";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(200,214,202));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionNatural_Vibrancy_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: #1ecfd6; border: 1px solid rgb(7,120,164)";
    QString buttonText = "color: #003d73;";
    QString buttonOpBackground = "background-color: #c05640; border: 1px solid rgb(7,120,164)";
    QString buttonOpText = "color: #ffffff;";
    QString displayBackground = "background-color: #1ecfd6;";
    QString displayText = "color: #003d73;";
    QString menuBackground = "background-color: #003d73";
    QString menuText = "color: #ffffff;";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(7,120,164));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}

void Calculator::on_actionGothic_Architecture_triggered()
{
    QPalette palWin = palette();
    QString buttonBackground = "background-color: rgb(145,153,190); border: 1px solid rgb(46,48,62)";
    QString buttonText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString buttonOpBackground = "background-color: rgb(84,103,143); border: 1px solid rgb(46,48,62)";
    QString buttonOpText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString displayBackground = "background-color: rgb(108,107,116);";
    QString displayText = "color: rgb(255,255,255); font: 14pt 'Baskerville Old Face'";
    QString menuBackground = "background-color: rgb(33,38,36)";
    QString menuText = "color: rgb(255,255,255); font: 10pt 'Baskerville Old Face'";

    QString displayColors = displayBackground + ";" + displayText;
    QString buttonColors = buttonBackground +";" + buttonText;
    QString menuColors = menuBackground + ";" + menuText;
    QString buttonOpColors = buttonOpBackground +";" + buttonOpText;


    palWin.setColor(QPalette::Window,QColor::fromRgb(46,48,62));

    applyTheme(palWin,buttonColors,buttonOpColors,displayColors,menuColors);
}
