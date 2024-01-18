/********************************************************************************
** Form generated from reading UI file 'CreditCalculatorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALCULATORFORM_H
#define UI_CREDITCALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *inputSum;
    QLabel *label_sum;
    QLineEdit *inputCreditTerm;
    QLabel *label_term;
    QLineEdit *inputPercent;
    QLabel *label_percent;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(893, 524);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 37, 59);"));
        inputSum = new QLineEdit(centralwidget);
        inputSum->setObjectName(QString::fromUtf8("inputSum"));
        inputSum->setGeometry(QRect(130, 70, 113, 31));
        label_sum = new QLabel(centralwidget);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));
        label_sum->setGeometry(QRect(40, 80, 81, 17));
        inputCreditTerm = new QLineEdit(centralwidget);
        inputCreditTerm->setObjectName(QString::fromUtf8("inputCreditTerm"));
        inputCreditTerm->setGeometry(QRect(130, 120, 113, 31));
        label_term = new QLabel(centralwidget);
        label_term->setObjectName(QString::fromUtf8("label_term"));
        label_term->setGeometry(QRect(40, 130, 81, 17));
        inputPercent = new QLineEdit(centralwidget);
        inputPercent->setObjectName(QString::fromUtf8("inputPercent"));
        inputPercent->setGeometry(QRect(130, 170, 113, 31));
        label_percent = new QLabel(centralwidget);
        label_percent->setObjectName(QString::fromUtf8("label_percent"));
        label_percent->setGeometry(QRect(40, 180, 81, 17));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_sum->setText(QCoreApplication::translate("MainWindow", "credit sum:", nullptr));
        label_term->setText(QCoreApplication::translate("MainWindow", "credit term:", nullptr));
        label_percent->setText(QCoreApplication::translate("MainWindow", "percent:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALCULATORFORM_H
