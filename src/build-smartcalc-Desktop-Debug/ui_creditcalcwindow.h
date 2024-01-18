/********************************************************************************
** Form generated from reading UI file 'creditcalcwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALCWINDOW_H
#define UI_CREDITCALCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditcalcWindow
{
public:
    QLabel *label_type;
    QLabel *label_amount;
    QComboBox *comboMonths;
    QComboBox *comboType;
    QLineEdit *inputInterest;
    QLineEdit *inputTerm;
    QLabel *label_interest;
    QLineEdit *inputAmount;
    QLabel *label_term;
    QPushButton *button_calculateLoan;
    QTextBrowser *textBrowser;
    QPushButton *button_goToCalc;
    QPushButton *button_goToDeposit;
    QWidget *widget;
    QWidget *widget_2;

    void setupUi(QWidget *creditcalcWindow)
    {
        if (creditcalcWindow->objectName().isEmpty())
            creditcalcWindow->setObjectName(QString::fromUtf8("creditcalcWindow"));
        creditcalcWindow->resize(490, 467);
        creditcalcWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 38, 51);"));
        label_type = new QLabel(creditcalcWindow);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setGeometry(QRect(80, 210, 341, 20));
        label_type->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);"));
        label_amount = new QLabel(creditcalcWindow);
        label_amount->setObjectName(QString::fromUtf8("label_amount"));
        label_amount->setGeometry(QRect(70, 90, 341, 21));
        label_amount->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);"));
        comboMonths = new QComboBox(creditcalcWindow);
        comboMonths->addItem(QString());
        comboMonths->addItem(QString());
        comboMonths->setObjectName(QString::fromUtf8("comboMonths"));
        comboMonths->setGeometry(QRect(340, 130, 81, 21));
        comboMonths->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        comboType = new QComboBox(creditcalcWindow);
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->setObjectName(QString::fromUtf8("comboType"));
        comboType->setGeometry(QRect(190, 210, 131, 25));
        comboType->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        inputInterest = new QLineEdit(creditcalcWindow);
        inputInterest->setObjectName(QString::fromUtf8("inputInterest"));
        inputInterest->setGeometry(QRect(190, 170, 131, 21));
        inputInterest->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputInterest->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputTerm = new QLineEdit(creditcalcWindow);
        inputTerm->setObjectName(QString::fromUtf8("inputTerm"));
        inputTerm->setGeometry(QRect(190, 130, 131, 21));
        inputTerm->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);\n"
""));
        inputTerm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_interest = new QLabel(creditcalcWindow);
        label_interest->setObjectName(QString::fromUtf8("label_interest"));
        label_interest->setGeometry(QRect(80, 170, 341, 21));
        label_interest->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);"));
        inputAmount = new QLineEdit(creditcalcWindow);
        inputAmount->setObjectName(QString::fromUtf8("inputAmount"));
        inputAmount->setGeometry(QRect(190, 90, 131, 21));
        inputAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);"));
        inputAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_term = new QLabel(creditcalcWindow);
        label_term->setObjectName(QString::fromUtf8("label_term"));
        label_term->setGeometry(QRect(80, 130, 341, 20));
        label_term->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);"));
        button_calculateLoan = new QPushButton(creditcalcWindow);
        button_calculateLoan->setObjectName(QString::fromUtf8("button_calculateLoan"));
        button_calculateLoan->setGeometry(QRect(190, 260, 131, 41));
        button_calculateLoan->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);\n"
""));
        textBrowser = new QTextBrowser(creditcalcWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 320, 341, 121));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
"color: rgb(216, 220, 234);\n"
""));
        button_goToCalc = new QPushButton(creditcalcWindow);
        button_goToCalc->setObjectName(QString::fromUtf8("button_goToCalc"));
        button_goToCalc->setGeometry(QRect(20, 10, 51, 51));
        button_goToCalc->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"image: url(:/new/prefix1/img/calc_icon.png);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_goToCalc->setIconSize(QSize(32, 32));
        button_goToCalc->setAutoDefault(false);
        button_goToCalc->setFlat(false);
        button_goToDeposit = new QPushButton(creditcalcWindow);
        button_goToDeposit->setObjectName(QString::fromUtf8("button_goToDeposit"));
        button_goToDeposit->setGeometry(QRect(420, 10, 51, 51));
        button_goToDeposit->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"image: url(:/new/prefix1/img/svinka.png);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);\n"
""));
        widget = new QWidget(creditcalcWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 250, 491, 221));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 40, 56);"));
        widget_2 = new QWidget(creditcalcWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(70, 70, 361, 181));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);"));
        widget_2->raise();
        label_interest->raise();
        label_type->raise();
        label_term->raise();
        widget->raise();
        label_amount->raise();
        comboMonths->raise();
        comboType->raise();
        inputInterest->raise();
        inputTerm->raise();
        inputAmount->raise();
        button_calculateLoan->raise();
        textBrowser->raise();
        button_goToDeposit->raise();
        button_goToCalc->raise();

        retranslateUi(creditcalcWindow);

        button_goToCalc->setDefault(false);


        QMetaObject::connectSlotsByName(creditcalcWindow);
    } // setupUi

    void retranslateUi(QWidget *creditcalcWindow)
    {
        creditcalcWindow->setWindowTitle(QCoreApplication::translate("creditcalcWindow", "Form", nullptr));
        label_type->setText(QCoreApplication::translate("creditcalcWindow", "credit type:", nullptr));
        label_amount->setText(QCoreApplication::translate("creditcalcWindow", "  credit amount:", nullptr));
        comboMonths->setItemText(0, QCoreApplication::translate("creditcalcWindow", "Months", nullptr));
        comboMonths->setItemText(1, QCoreApplication::translate("creditcalcWindow", "Years", nullptr));

        comboType->setItemText(0, QCoreApplication::translate("creditcalcWindow", "Annuity", nullptr));
        comboType->setItemText(1, QCoreApplication::translate("creditcalcWindow", "Differentiated", nullptr));

        label_interest->setText(QCoreApplication::translate("creditcalcWindow", "interest rate:", nullptr));
        label_term->setText(QCoreApplication::translate("creditcalcWindow", "credit term:", nullptr));
        button_calculateLoan->setText(QCoreApplication::translate("creditcalcWindow", "calculate loan", nullptr));
        button_goToCalc->setText(QString());
        button_goToDeposit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class creditcalcWindow: public Ui_creditcalcWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALCWINDOW_H
