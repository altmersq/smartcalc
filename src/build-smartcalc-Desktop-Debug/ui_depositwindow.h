/********************************************************************************
** Form generated from reading UI file 'depositwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITWINDOW_H
#define UI_DEPOSITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositwindow
{
public:
    QPushButton *button_goToCredit;
    QPushButton *button_goToCalc;
    QWidget *widget;
    QLabel *label;
    QLabel *label_term;
    QLabel *label_amount;
    QLabel *label_interest;
    QCheckBox *checkCap;
    QDateEdit *dateStart;
    QPushButton *button_calculateDeposit;
    QTextBrowser *textAccured;
    QLabel *label_2;
    QTextBrowser *textTax;
    QLabel *label_3;
    QTextBrowser *textFinal;
    QLabel *label_4;
    QLabel *label_payoutFreq;
    QLineEdit *inputInterest;
    QLineEdit *inputTerm;
    QLineEdit *inputAmount;
    QComboBox *comboMonths;
    QComboBox *comboPayout;
    QLabel *label_tax;
    QLineEdit *inputTax;

    void setupUi(QWidget *depositwindow)
    {
        if (depositwindow->objectName().isEmpty())
            depositwindow->setObjectName(QString::fromUtf8("depositwindow"));
        depositwindow->setEnabled(true);
        depositwindow->resize(748, 504);
        depositwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 107, 128);"));
        button_goToCredit = new QPushButton(depositwindow);
        button_goToCredit->setObjectName(QString::fromUtf8("button_goToCredit"));
        button_goToCredit->setEnabled(true);
        button_goToCredit->setGeometry(QRect(20, 20, 61, 51));
        button_goToCredit->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"image: url(:/new/prefix1/img/monetki.png);\n"
"background-color: rgb(48, 83, 129);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);\n"
""));
        button_goToCredit->setIconSize(QSize(48, 48));
        button_goToCredit->setCheckable(false);
        button_goToCredit->setAutoDefault(false);
        button_goToCredit->setFlat(false);
        button_goToCalc = new QPushButton(depositwindow);
        button_goToCalc->setObjectName(QString::fromUtf8("button_goToCalc"));
        button_goToCalc->setGeometry(QRect(650, 20, 61, 51));
        button_goToCalc->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"image: url(:/new/prefix1/img/calc_icon.png);\n"
"background-color: rgb(48, 83, 129);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_goToCalc->setIconSize(QSize(48, 48));
        button_goToCalc->setAutoDefault(false);
        button_goToCalc->setFlat(false);
        widget = new QWidget(depositwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 90, 751, 551));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"background-color: rgb(91, 107, 128);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 126, 121, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);"));
        label_term = new QLabel(widget);
        label_term->setObjectName(QString::fromUtf8("label_term"));
        label_term->setGeometry(QRect(50, 90, 101, 20));
        label_term->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);\n"
""));
        label_amount = new QLabel(widget);
        label_amount->setObjectName(QString::fromUtf8("label_amount"));
        label_amount->setGeometry(QRect(50, 50, 121, 20));
        label_amount->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);\n"
""));
        label_interest = new QLabel(widget);
        label_interest->setObjectName(QString::fromUtf8("label_interest"));
        label_interest->setGeometry(QRect(50, 170, 101, 21));
        label_interest->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);"));
        checkCap = new QCheckBox(widget);
        checkCap->setObjectName(QString::fromUtf8("checkCap"));
        checkCap->setGeometry(QRect(170, 280, 131, 23));
        checkCap->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);\n"
""));
        dateStart = new QDateEdit(widget);
        dateStart->setObjectName(QString::fromUtf8("dateStart"));
        dateStart->setGeometry(QRect(180, 130, 131, 26));
        dateStart->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);\n"
""));
        button_calculateDeposit = new QPushButton(widget);
        button_calculateDeposit->setObjectName(QString::fromUtf8("button_calculateDeposit"));
        button_calculateDeposit->setGeometry(QRect(310, 340, 131, 41));
        button_calculateDeposit->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"color: rgb(216, 220, 234);\n"
"background-color: rgb(69, 122, 192);\n"
"font: 500 16pt \"Ubuntu\";\n"
""));
        textAccured = new QTextBrowser(widget);
        textAccured->setObjectName(QString::fromUtf8("textAccured"));
        textAccured->setGeometry(QRect(560, 50, 151, 31));
        textAccured->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 50, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: rgb(216, 220, 234);"));
        textTax = new QTextBrowser(widget);
        textTax->setObjectName(QString::fromUtf8("textTax"));
        textTax->setGeometry(QRect(560, 110, 151, 31));
        textTax->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 110, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: rgb(216, 220, 234);"));
        textFinal = new QTextBrowser(widget);
        textFinal->setObjectName(QString::fromUtf8("textFinal"));
        textFinal->setGeometry(QRect(560, 170, 151, 31));
        textFinal->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 170, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: rgb(216, 220, 234);"));
        label_payoutFreq = new QLabel(widget);
        label_payoutFreq->setObjectName(QString::fromUtf8("label_payoutFreq"));
        label_payoutFreq->setGeometry(QRect(50, 250, 131, 21));
        label_payoutFreq->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);"));
        inputInterest = new QLineEdit(widget);
        inputInterest->setObjectName(QString::fromUtf8("inputInterest"));
        inputInterest->setGeometry(QRect(180, 170, 131, 21));
        inputInterest->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputInterest->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputTerm = new QLineEdit(widget);
        inputTerm->setObjectName(QString::fromUtf8("inputTerm"));
        inputTerm->setGeometry(QRect(180, 90, 131, 21));
        inputTerm->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputTerm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputAmount = new QLineEdit(widget);
        inputAmount->setObjectName(QString::fromUtf8("inputAmount"));
        inputAmount->setGeometry(QRect(180, 50, 131, 21));
        inputAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboMonths = new QComboBox(widget);
        comboMonths->addItem(QString());
        comboMonths->addItem(QString());
        comboMonths->addItem(QString());
        comboMonths->setObjectName(QString::fromUtf8("comboMonths"));
        comboMonths->setGeometry(QRect(330, 90, 81, 21));
        comboMonths->setStyleSheet(QString::fromUtf8("\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(216, 220, 234);\n"
""));
        comboPayout = new QComboBox(widget);
        comboPayout->addItem(QString());
        comboPayout->addItem(QString());
        comboPayout->addItem(QString());
        comboPayout->addItem(QString());
        comboPayout->addItem(QString());
        comboPayout->addItem(QString());
        comboPayout->setObjectName(QString::fromUtf8("comboPayout"));
        comboPayout->setGeometry(QRect(180, 250, 131, 21));
        comboPayout->setStyleSheet(QString::fromUtf8("\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(216, 220, 234);"));
        label_tax = new QLabel(widget);
        label_tax->setObjectName(QString::fromUtf8("label_tax"));
        label_tax->setGeometry(QRect(50, 210, 101, 21));
        label_tax->setStyleSheet(QString::fromUtf8("color: rgb(216, 220, 234);"));
        inputTax = new QLineEdit(widget);
        inputTax->setObjectName(QString::fromUtf8("inputTax"));
        inputTax->setGeometry(QRect(180, 210, 131, 21));
        inputTax->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputTax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget->raise();
        button_goToCredit->raise();
        button_goToCalc->raise();

        retranslateUi(depositwindow);

        button_goToCredit->setDefault(false);
        button_goToCalc->setDefault(false);


        QMetaObject::connectSlotsByName(depositwindow);
    } // setupUi

    void retranslateUi(QWidget *depositwindow)
    {
        depositwindow->setWindowTitle(QCoreApplication::translate("depositwindow", "Form", nullptr));
        button_goToCredit->setText(QString());
        button_goToCalc->setText(QString());
        label->setText(QCoreApplication::translate("depositwindow", "start of term:", nullptr));
        label_term->setText(QCoreApplication::translate("depositwindow", "deposit term:", nullptr));
        label_amount->setText(QCoreApplication::translate("depositwindow", "deposit amount:", nullptr));
        label_interest->setText(QCoreApplication::translate("depositwindow", "interest rate:", nullptr));
        checkCap->setText(QCoreApplication::translate("depositwindow", "Capitalization", nullptr));
        button_calculateDeposit->setText(QCoreApplication::translate("depositwindow", "calculate", nullptr));
        label_2->setText(QCoreApplication::translate("depositwindow", "accured interest:", nullptr));
        label_3->setText(QCoreApplication::translate("depositwindow", "tax amount:", nullptr));
        label_4->setText(QCoreApplication::translate("depositwindow", "final amount:", nullptr));
        label_payoutFreq->setText(QCoreApplication::translate("depositwindow", "payout frequency:", nullptr));
        inputAmount->setText(QString());
        comboMonths->setItemText(0, QCoreApplication::translate("depositwindow", "Days", nullptr));
        comboMonths->setItemText(1, QCoreApplication::translate("depositwindow", "Months", nullptr));
        comboMonths->setItemText(2, QCoreApplication::translate("depositwindow", "Years", nullptr));

        comboPayout->setItemText(0, QCoreApplication::translate("depositwindow", "daily", nullptr));
        comboPayout->setItemText(1, QCoreApplication::translate("depositwindow", "weekly", nullptr));
        comboPayout->setItemText(2, QCoreApplication::translate("depositwindow", "monthly", nullptr));
        comboPayout->setItemText(3, QCoreApplication::translate("depositwindow", "quarterly", nullptr));
        comboPayout->setItemText(4, QCoreApplication::translate("depositwindow", "semi-annualy", nullptr));
        comboPayout->setItemText(5, QCoreApplication::translate("depositwindow", "yearly", nullptr));

        label_tax->setText(QCoreApplication::translate("depositwindow", "tax rate:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositwindow: public Ui_depositwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITWINDOW_H
