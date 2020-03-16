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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *calc_input;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(292, 405);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calc_input = new QLineEdit(centralwidget);
        calc_input->setObjectName(QString::fromUtf8("calc_input"));
        calc_input->setGeometry(QRect(20, 20, 221, 41));
        QFont font;
        font.setPointSize(14);
        calc_input->setFont(font);
        calc_input->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        one_button = new QPushButton(centralwidget);
        one_button->setObjectName(QString::fromUtf8("one_button"));
        one_button->setGeometry(QRect(20, 90, 61, 51));
        two_button = new QPushButton(centralwidget);
        two_button->setObjectName(QString::fromUtf8("two_button"));
        two_button->setGeometry(QRect(80, 90, 61, 51));
        three_button = new QPushButton(centralwidget);
        three_button->setObjectName(QString::fromUtf8("three_button"));
        three_button->setGeometry(QRect(140, 90, 61, 51));
        four_button = new QPushButton(centralwidget);
        four_button->setObjectName(QString::fromUtf8("four_button"));
        four_button->setGeometry(QRect(20, 140, 61, 51));
        five_button = new QPushButton(centralwidget);
        five_button->setObjectName(QString::fromUtf8("five_button"));
        five_button->setGeometry(QRect(80, 140, 61, 51));
        seven_button = new QPushButton(centralwidget);
        seven_button->setObjectName(QString::fromUtf8("seven_button"));
        seven_button->setGeometry(QRect(20, 190, 61, 51));
        six_button = new QPushButton(centralwidget);
        six_button->setObjectName(QString::fromUtf8("six_button"));
        six_button->setGeometry(QRect(140, 140, 61, 51));
        eight_button = new QPushButton(centralwidget);
        eight_button->setObjectName(QString::fromUtf8("eight_button"));
        eight_button->setGeometry(QRect(80, 190, 61, 51));
        zero_button = new QPushButton(centralwidget);
        zero_button->setObjectName(QString::fromUtf8("zero_button"));
        zero_button->setGeometry(QRect(20, 240, 61, 51));
        nine_button = new QPushButton(centralwidget);
        nine_button->setObjectName(QString::fromUtf8("nine_button"));
        nine_button->setGeometry(QRect(140, 190, 61, 51));
        decimal_button = new QPushButton(centralwidget);
        decimal_button->setObjectName(QString::fromUtf8("decimal_button"));
        decimal_button->setGeometry(QRect(80, 240, 61, 51));
        changesign_button = new QPushButton(centralwidget);
        changesign_button->setObjectName(QString::fromUtf8("changesign_button"));
        changesign_button->setGeometry(QRect(140, 240, 61, 51));
        enter_button = new QPushButton(centralwidget);
        enter_button->setObjectName(QString::fromUtf8("enter_button"));
        enter_button->setGeometry(QRect(220, 300, 61, 51));
        mult_button = new QPushButton(centralwidget);
        mult_button->setObjectName(QString::fromUtf8("mult_button"));
        mult_button->setGeometry(QRect(220, 190, 61, 51));
        div_button = new QPushButton(centralwidget);
        div_button->setObjectName(QString::fromUtf8("div_button"));
        div_button->setGeometry(QRect(220, 240, 61, 51));
        minu_button = new QPushButton(centralwidget);
        minu_button->setObjectName(QString::fromUtf8("minu_button"));
        minu_button->setGeometry(QRect(220, 140, 61, 51));
        plus_button = new QPushButton(centralwidget);
        plus_button->setObjectName(QString::fromUtf8("plus_button"));
        plus_button->setGeometry(QRect(220, 90, 61, 51));
        clear_button = new QPushButton(centralwidget);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setGeometry(QRect(20, 300, 61, 51));
        delete_button = new QPushButton(centralwidget);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(80, 300, 61, 51));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 292, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        calc_input->setText(QString());
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
        enter_button->setText(QApplication::translate("Calculator", "enter", nullptr));
        mult_button->setText(QApplication::translate("Calculator", "x", nullptr));
        div_button->setText(QApplication::translate("Calculator", "\303\267", nullptr));
        minu_button->setText(QApplication::translate("Calculator", "-", nullptr));
        plus_button->setText(QApplication::translate("Calculator", "+", nullptr));
        clear_button->setText(QApplication::translate("Calculator", "AC", nullptr));
        delete_button->setText(QApplication::translate("Calculator", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
