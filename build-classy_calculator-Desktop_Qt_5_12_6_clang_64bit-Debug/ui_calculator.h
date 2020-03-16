/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *actionSteampunk;
    QAction *actionPastelWinter_Blues;
    QAction *actionDarkening_Storm_3;
    QAction *actionSteampunk_d;
    QAction *actionNeon;
    QAction *actionPastel_Galaxy_Purple;
    QAction *actionCopper_Rose_Gold;
    QAction *actionGold;
    QAction *actionBronze_Copper;
    QAction *actionUnicorn_Candy;
    QAction *actionUnderwater;
    QAction *actionVibrant_and_Elegant;
    QAction *actionNighttime_Forest_Mysteries;
    QAction *actionFantasy_Forest;
    QWidget *centralwidget;
    QPushButton *one_button;
    QPushButton *two_button;
    QPushButton *three_button;
    QPushButton *four_button;
    QPushButton *five_button;
    QPushButton *seven_button;
    QPushButton *six_button;
    QPushButton *eight_button;
    QPushButton *zero_button;
    QPushButton *nine_button;
    QPushButton *decimal_button;
    QPushButton *changesign_button;
    QPushButton *enter_button;
    QPushButton *mult_button;
    QPushButton *div_button;
    QPushButton *minu_button;
    QPushButton *plus_button;
    QPushButton *clear_button;
    QPushButton *delete_button;
    QLabel *calc_input;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuTheme;
    QMenu *menuLight;
    QMenu *menuDark;
    QMenu *menuVibrant;
    QMenu *menuMetallic;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(292, 405);
        Calculator->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:1px solid #000000;\n"
"	font-size: 20px;\n"
"}"));
        actionSteampunk = new QAction(Calculator);
        actionSteampunk->setObjectName(QString::fromUtf8("actionSteampunk"));
        actionPastelWinter_Blues = new QAction(Calculator);
        actionPastelWinter_Blues->setObjectName(QString::fromUtf8("actionPastelWinter_Blues"));
        actionDarkening_Storm_3 = new QAction(Calculator);
        actionDarkening_Storm_3->setObjectName(QString::fromUtf8("actionDarkening_Storm_3"));
        actionSteampunk_d = new QAction(Calculator);
        actionSteampunk_d->setObjectName(QString::fromUtf8("actionSteampunk_d"));
        actionNeon = new QAction(Calculator);
        actionNeon->setObjectName(QString::fromUtf8("actionNeon"));
        actionPastel_Galaxy_Purple = new QAction(Calculator);
        actionPastel_Galaxy_Purple->setObjectName(QString::fromUtf8("actionPastel_Galaxy_Purple"));
        actionCopper_Rose_Gold = new QAction(Calculator);
        actionCopper_Rose_Gold->setObjectName(QString::fromUtf8("actionCopper_Rose_Gold"));
        actionGold = new QAction(Calculator);
        actionGold->setObjectName(QString::fromUtf8("actionGold"));
        actionBronze_Copper = new QAction(Calculator);
        actionBronze_Copper->setObjectName(QString::fromUtf8("actionBronze_Copper"));
        actionUnicorn_Candy = new QAction(Calculator);
        actionUnicorn_Candy->setObjectName(QString::fromUtf8("actionUnicorn_Candy"));
        actionUnderwater = new QAction(Calculator);
        actionUnderwater->setObjectName(QString::fromUtf8("actionUnderwater"));
        actionVibrant_and_Elegant = new QAction(Calculator);
        actionVibrant_and_Elegant->setObjectName(QString::fromUtf8("actionVibrant_and_Elegant"));
        actionNighttime_Forest_Mysteries = new QAction(Calculator);
        actionNighttime_Forest_Mysteries->setObjectName(QString::fromUtf8("actionNighttime_Forest_Mysteries"));
        actionFantasy_Forest = new QAction(Calculator);
        actionFantasy_Forest->setObjectName(QString::fromUtf8("actionFantasy_Forest"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        one_button = new QPushButton(centralwidget);
        one_button->setObjectName(QString::fromUtf8("one_button"));
        one_button->setGeometry(QRect(20, 90, 61, 51));
        QFont font;
        font.setFamily(QString::fromUtf8(".AppleSystemUIFont"));
        one_button->setFont(font);
        one_button->setAutoFillBackground(false);
        one_button->setFlat(true);
        two_button = new QPushButton(centralwidget);
        two_button->setObjectName(QString::fromUtf8("two_button"));
        two_button->setGeometry(QRect(80, 90, 61, 51));
        two_button->setFont(font);
        two_button->setAutoFillBackground(false);
        two_button->setFlat(true);
        three_button = new QPushButton(centralwidget);
        three_button->setObjectName(QString::fromUtf8("three_button"));
        three_button->setGeometry(QRect(140, 90, 61, 51));
        three_button->setFont(font);
        three_button->setAutoFillBackground(false);
        three_button->setFlat(true);
        four_button = new QPushButton(centralwidget);
        four_button->setObjectName(QString::fromUtf8("four_button"));
        four_button->setGeometry(QRect(20, 140, 61, 51));
        four_button->setFont(font);
        four_button->setAutoFillBackground(false);
        four_button->setFlat(true);
        five_button = new QPushButton(centralwidget);
        five_button->setObjectName(QString::fromUtf8("five_button"));
        five_button->setGeometry(QRect(80, 140, 61, 51));
        five_button->setFont(font);
        five_button->setAutoFillBackground(false);
        five_button->setFlat(true);
        seven_button = new QPushButton(centralwidget);
        seven_button->setObjectName(QString::fromUtf8("seven_button"));
        seven_button->setGeometry(QRect(20, 190, 61, 51));
        seven_button->setFont(font);
        seven_button->setAutoFillBackground(false);
        seven_button->setFlat(true);
        six_button = new QPushButton(centralwidget);
        six_button->setObjectName(QString::fromUtf8("six_button"));
        six_button->setGeometry(QRect(140, 140, 61, 51));
        six_button->setFont(font);
        six_button->setAutoFillBackground(false);
        six_button->setFlat(true);
        eight_button = new QPushButton(centralwidget);
        eight_button->setObjectName(QString::fromUtf8("eight_button"));
        eight_button->setGeometry(QRect(80, 190, 61, 51));
        eight_button->setFont(font);
        eight_button->setAutoFillBackground(false);
        eight_button->setFlat(true);
        zero_button = new QPushButton(centralwidget);
        zero_button->setObjectName(QString::fromUtf8("zero_button"));
        zero_button->setGeometry(QRect(20, 240, 61, 51));
        zero_button->setFont(font);
        zero_button->setAutoFillBackground(false);
        zero_button->setFlat(true);
        nine_button = new QPushButton(centralwidget);
        nine_button->setObjectName(QString::fromUtf8("nine_button"));
        nine_button->setGeometry(QRect(140, 190, 61, 51));
        nine_button->setFont(font);
        nine_button->setAutoFillBackground(false);
        nine_button->setFlat(true);
        decimal_button = new QPushButton(centralwidget);
        decimal_button->setObjectName(QString::fromUtf8("decimal_button"));
        decimal_button->setGeometry(QRect(80, 240, 61, 51));
        decimal_button->setFont(font);
        decimal_button->setAutoFillBackground(false);
        decimal_button->setFlat(true);
        changesign_button = new QPushButton(centralwidget);
        changesign_button->setObjectName(QString::fromUtf8("changesign_button"));
        changesign_button->setGeometry(QRect(140, 240, 61, 51));
        changesign_button->setFont(font);
        changesign_button->setAutoFillBackground(false);
        changesign_button->setFlat(true);
        enter_button = new QPushButton(centralwidget);
        enter_button->setObjectName(QString::fromUtf8("enter_button"));
        enter_button->setGeometry(QRect(220, 300, 61, 51));
        enter_button->setFont(font);
        enter_button->setAutoFillBackground(false);
        enter_button->setFlat(true);
        mult_button = new QPushButton(centralwidget);
        mult_button->setObjectName(QString::fromUtf8("mult_button"));
        mult_button->setGeometry(QRect(220, 190, 61, 51));
        mult_button->setFont(font);
        mult_button->setAutoFillBackground(false);
        mult_button->setFlat(true);
        div_button = new QPushButton(centralwidget);
        div_button->setObjectName(QString::fromUtf8("div_button"));
        div_button->setGeometry(QRect(220, 240, 61, 51));
        div_button->setFont(font);
        div_button->setAutoFillBackground(false);
        div_button->setFlat(true);
        minu_button = new QPushButton(centralwidget);
        minu_button->setObjectName(QString::fromUtf8("minu_button"));
        minu_button->setGeometry(QRect(220, 140, 61, 51));
        minu_button->setFont(font);
        minu_button->setAutoFillBackground(false);
        minu_button->setFlat(true);
        plus_button = new QPushButton(centralwidget);
        plus_button->setObjectName(QString::fromUtf8("plus_button"));
        plus_button->setGeometry(QRect(220, 90, 61, 51));
        plus_button->setFont(font);
        plus_button->setAutoFillBackground(false);
        plus_button->setFlat(true);
        clear_button = new QPushButton(centralwidget);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setGeometry(QRect(20, 300, 61, 51));
        clear_button->setFont(font);
        clear_button->setAutoFillBackground(false);
        clear_button->setFlat(true);
        delete_button = new QPushButton(centralwidget);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(80, 300, 61, 51));
        delete_button->setFont(font);
        delete_button->setAutoFillBackground(false);
        delete_button->setFlat(true);
        calc_input = new QLabel(centralwidget);
        calc_input->setObjectName(QString::fromUtf8("calc_input"));
        calc_input->setGeometry(QRect(20, 20, 261, 41));
        QFont font1;
        font1.setPointSize(12);
        calc_input->setFont(font1);
        calc_input->setFrameShape(QFrame::Box);
        calc_input->setFrameShadow(QFrame::Plain);
        calc_input->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Calculator->setCentralWidget(centralwidget);
        calc_input->raise();
        one_button->raise();
        two_button->raise();
        three_button->raise();
        four_button->raise();
        five_button->raise();
        seven_button->raise();
        six_button->raise();
        eight_button->raise();
        zero_button->raise();
        nine_button->raise();
        decimal_button->raise();
        changesign_button->raise();
        enter_button->raise();
        mult_button->raise();
        div_button->raise();
        minu_button->raise();
        plus_button->raise();
        clear_button->raise();
        delete_button->raise();
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 292, 22));
        menuTheme = new QMenu(menubar);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuLight = new QMenu(menuTheme);
        menuLight->setObjectName(QString::fromUtf8("menuLight"));
        menuDark = new QMenu(menuTheme);
        menuDark->setObjectName(QString::fromUtf8("menuDark"));
        menuVibrant = new QMenu(menuTheme);
        menuVibrant->setObjectName(QString::fromUtf8("menuVibrant"));
        menuMetallic = new QMenu(menuTheme);
        menuMetallic->setObjectName(QString::fromUtf8("menuMetallic"));
        Calculator->setMenuBar(menubar);

        menubar->addAction(menuTheme->menuAction());
        menuTheme->addAction(menuLight->menuAction());
        menuTheme->addAction(menuDark->menuAction());
        menuTheme->addAction(menuVibrant->menuAction());
        menuTheme->addAction(menuMetallic->menuAction());
        menuLight->addAction(actionPastelWinter_Blues);
        menuLight->addAction(actionPastel_Galaxy_Purple);
        menuLight->addAction(actionUnicorn_Candy);
        menuDark->addAction(actionDarkening_Storm_3);
        menuDark->addAction(actionSteampunk_d);
        menuDark->addAction(actionNighttime_Forest_Mysteries);
        menuDark->addAction(actionFantasy_Forest);
        menuVibrant->addAction(actionNeon);
        menuVibrant->addAction(actionUnderwater);
        menuVibrant->addAction(actionVibrant_and_Elegant);
        menuMetallic->addAction(actionCopper_Rose_Gold);
        menuMetallic->addAction(actionGold);
        menuMetallic->addAction(actionBronze_Copper);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        actionSteampunk->setText(QApplication::translate("Calculator", "Steampunk", nullptr));
        actionPastelWinter_Blues->setText(QApplication::translate("Calculator", "Pastel Winter Blues", nullptr));
        actionDarkening_Storm_3->setText(QApplication::translate("Calculator", "Darkening Storm", nullptr));
        actionSteampunk_d->setText(QApplication::translate("Calculator", "Steampunk'd", nullptr));
        actionNeon->setText(QApplication::translate("Calculator", "Neon", nullptr));
        actionPastel_Galaxy_Purple->setText(QApplication::translate("Calculator", "Pastel Galaxy Purple", nullptr));
        actionCopper_Rose_Gold->setText(QApplication::translate("Calculator", "Copper / Rose Gold", nullptr));
        actionGold->setText(QApplication::translate("Calculator", "Gold", nullptr));
        actionBronze_Copper->setText(QApplication::translate("Calculator", "Bronze", nullptr));
        actionUnicorn_Candy->setText(QApplication::translate("Calculator", "Unicorn Candy", nullptr));
        actionUnderwater->setText(QApplication::translate("Calculator", "Underwater", nullptr));
        actionVibrant_and_Elegant->setText(QApplication::translate("Calculator", "Vibrant and Elegant", nullptr));
        actionNighttime_Forest_Mysteries->setText(QApplication::translate("Calculator", "Nighttime Forest Mysteries", nullptr));
        actionFantasy_Forest->setText(QApplication::translate("Calculator", "Fantasy Forest", nullptr));
        one_button->setText(QApplication::translate("Calculator", "1", nullptr));
        two_button->setText(QApplication::translate("Calculator", "2", nullptr));
        three_button->setText(QApplication::translate("Calculator", "3", nullptr));
        four_button->setText(QApplication::translate("Calculator", "4", nullptr));
        five_button->setText(QApplication::translate("Calculator", "5", nullptr));
        seven_button->setText(QApplication::translate("Calculator", "7", nullptr));
        six_button->setText(QApplication::translate("Calculator", "6", nullptr));
        eight_button->setText(QApplication::translate("Calculator", "8", nullptr));
        zero_button->setText(QApplication::translate("Calculator", "0", nullptr));
        nine_button->setText(QApplication::translate("Calculator", "9", nullptr));
        decimal_button->setText(QApplication::translate("Calculator", ".", nullptr));
        changesign_button->setText(QApplication::translate("Calculator", "(-)", nullptr));
        enter_button->setText(QApplication::translate("Calculator", "=", nullptr));
        mult_button->setText(QApplication::translate("Calculator", "x", nullptr));
        div_button->setText(QApplication::translate("Calculator", "\303\267", nullptr));
        minu_button->setText(QApplication::translate("Calculator", "-", nullptr));
        plus_button->setText(QApplication::translate("Calculator", "+", nullptr));
        clear_button->setText(QApplication::translate("Calculator", "AC", nullptr));
        delete_button->setText(QApplication::translate("Calculator", "\342\214\253", nullptr));
        calc_input->setText(QString());
        menuTheme->setTitle(QApplication::translate("Calculator", "Theme", nullptr));
        menuLight->setTitle(QApplication::translate("Calculator", "Light", nullptr));
        menuDark->setTitle(QApplication::translate("Calculator", "Dark", nullptr));
        menuVibrant->setTitle(QApplication::translate("Calculator", "Vibrant", nullptr));
        menuMetallic->setTitle(QApplication::translate("Calculator", "Metallic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
