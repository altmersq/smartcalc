/********************************************************************************
** Form generated from reading UI file 'creditcalcwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
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

    void setupUi(QWidget *creditcalcWindow)
    {
        if (creditcalcWindow->objectName().isEmpty())
            creditcalcWindow->setObjectName("creditcalcWindow");
        creditcalcWindow->resize(490, 467);
        creditcalcWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 38, 51);"));
        label_type = new QLabel(creditcalcWindow);
        label_type->setObjectName("label_type");
        label_type->setGeometry(QRect(80, 210, 101, 20));
        label_amount = new QLabel(creditcalcWindow);
        label_amount->setObjectName("label_amount");
        label_amount->setGeometry(QRect(80, 90, 101, 20));
        comboMonths = new QComboBox(creditcalcWindow);
        comboMonths->addItem(QString());
        comboMonths->addItem(QString());
        comboMonths->setObjectName("comboMonths");
        comboMonths->setGeometry(QRect(330, 130, 81, 21));
        comboType = new QComboBox(creditcalcWindow);
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->setObjectName("comboType");
        comboType->setGeometry(QRect(190, 210, 131, 25));
        inputInterest = new QLineEdit(creditcalcWindow);
        inputInterest->setObjectName("inputInterest");
        inputInterest->setGeometry(QRect(190, 170, 131, 21));
        inputTerm = new QLineEdit(creditcalcWindow);
        inputTerm->setObjectName("inputTerm");
        inputTerm->setGeometry(QRect(190, 130, 131, 21));
        label_interest = new QLabel(creditcalcWindow);
        label_interest->setObjectName("label_interest");
        label_interest->setGeometry(QRect(80, 170, 101, 21));
        inputAmount = new QLineEdit(creditcalcWindow);
        inputAmount->setObjectName("inputAmount");
        inputAmount->setGeometry(QRect(190, 90, 131, 21));
        label_term = new QLabel(creditcalcWindow);
        label_term->setObjectName("label_term");
        label_term->setGeometry(QRect(80, 130, 101, 20));
        button_calculateLoan = new QPushButton(creditcalcWindow);
        button_calculateLoan->setObjectName("button_calculateLoan");
        button_calculateLoan->setGeometry(QRect(190, 270, 111, 41));
        textBrowser = new QTextBrowser(creditcalcWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 320, 331, 121));
        button_goToCalc = new QPushButton(creditcalcWindow);
        button_goToCalc->setObjectName("button_goToCalc");
        button_goToCalc->setGeometry(QRect(30, 20, 91, 41));
        button_goToDeposit = new QPushButton(creditcalcWindow);
        button_goToDeposit->setObjectName("button_goToDeposit");
        button_goToDeposit->setGeometry(QRect(370, 20, 91, 41));

        retranslateUi(creditcalcWindow);

        QMetaObject::connectSlotsByName(creditcalcWindow);
    } // setupUi

    void retranslateUi(QWidget *creditcalcWindow)
    {
        creditcalcWindow->setWindowTitle(QCoreApplication::translate("creditcalcWindow", "Form", nullptr));
        label_type->setText(QCoreApplication::translate("creditcalcWindow", "credit type:", nullptr));
        label_amount->setText(QCoreApplication::translate("creditcalcWindow", "credit amount:", nullptr));
        comboMonths->setItemText(0, QCoreApplication::translate("creditcalcWindow", "Months", nullptr));
        comboMonths->setItemText(1, QCoreApplication::translate("creditcalcWindow", "Years", nullptr));

        comboType->setItemText(0, QCoreApplication::translate("creditcalcWindow", "Annuity", nullptr));
        comboType->setItemText(1, QCoreApplication::translate("creditcalcWindow", "Differentiated", nullptr));

        label_interest->setText(QCoreApplication::translate("creditcalcWindow", "interest rate:", nullptr));
        label_term->setText(QCoreApplication::translate("creditcalcWindow", "credit term:", nullptr));
        button_calculateLoan->setText(QCoreApplication::translate("creditcalcWindow", "calculate loan", nullptr));
        button_goToCalc->setText(QCoreApplication::translate("creditcalcWindow", "PushButton", nullptr));
        button_goToDeposit->setText(QCoreApplication::translate("creditcalcWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditcalcWindow: public Ui_creditcalcWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALCWINDOW_H
