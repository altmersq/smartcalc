/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *button_back;
    QPushButton *button_9;
    QPushButton *button_div;
    QPushButton *button_4;
    QPushButton *button_cos;
    QPushButton *button_sin;
    QPushButton *button_sqrt;
    QPushButton *button_tan;
    QPushButton *button_atan;
    QPushButton *button_asin;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_5;
    QPushButton *button_acos;
    QPushButton *button_ln;
    QLineEdit *inputField;
    QPushButton *button_6;
    QPushButton *button_mul;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_minus;
    QPushButton *button_point;
    QPushButton *button_0;
    QPushButton *button_c;
    QPushButton *button_plus;
    QPushButton *button_log;
    QPushButton *button_open_bracket;
    QPushButton *button_eq;
    QPushButton *button_close_bracket;
    QLineEdit *xInputField;
    QCustomPlot *customPlot;
    QPushButton *button_graph;
    QLineEdit *xMinInputField;
    QLineEdit *xMaxInputField;
    QLineEdit *yMinInputField;
    QLineEdit *yMaxInputField;
    QPushButton *button_goToCredit;
    QPushButton *button_goToDeposit;
    QLineEdit *stepInputField;
    QPushButton *button_x;
    QPushButton *button_mod;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(659, 360);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 38, 51);"));
        button_back = new QPushButton(centralwidget);
        button_back->setObjectName("button_back");
        button_back->setGeometry(QRect(210, 50, 51, 31));
        button_back->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName("button_9");
        button_9->setGeometry(QRect(110, 110, 51, 31));
        button_9->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_div = new QPushButton(centralwidget);
        button_div->setObjectName("button_div");
        button_div->setGeometry(QRect(160, 110, 51, 31));
        button_div->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName("button_4");
        button_4->setGeometry(QRect(10, 140, 51, 31));
        button_4->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_cos = new QPushButton(centralwidget);
        button_cos->setObjectName("button_cos");
        button_cos->setGeometry(QRect(10, 80, 51, 31));
        button_cos->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_sin = new QPushButton(centralwidget);
        button_sin->setObjectName("button_sin");
        button_sin->setGeometry(QRect(60, 80, 51, 31));
        button_sin->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_sqrt = new QPushButton(centralwidget);
        button_sqrt->setObjectName("button_sqrt");
        button_sqrt->setGeometry(QRect(160, 80, 51, 31));
        button_sqrt->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_tan = new QPushButton(centralwidget);
        button_tan->setObjectName("button_tan");
        button_tan->setGeometry(QRect(110, 80, 51, 31));
        button_tan->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_atan = new QPushButton(centralwidget);
        button_atan->setObjectName("button_atan");
        button_atan->setGeometry(QRect(110, 50, 51, 31));
        button_atan->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_asin = new QPushButton(centralwidget);
        button_asin->setObjectName("button_asin");
        button_asin->setGeometry(QRect(60, 50, 51, 31));
        button_asin->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName("button_7");
        button_7->setGeometry(QRect(10, 110, 51, 31));
        button_7->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName("button_8");
        button_8->setGeometry(QRect(60, 110, 51, 31));
        button_8->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName("button_5");
        button_5->setGeometry(QRect(60, 140, 51, 31));
        button_5->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_acos = new QPushButton(centralwidget);
        button_acos->setObjectName("button_acos");
        button_acos->setGeometry(QRect(10, 50, 51, 31));
        button_acos->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_ln = new QPushButton(centralwidget);
        button_ln->setObjectName("button_ln");
        button_ln->setGeometry(QRect(160, 50, 51, 31));
        button_ln->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        inputField = new QLineEdit(centralwidget);
        inputField->setObjectName("inputField");
        inputField->setGeometry(QRect(110, 20, 151, 31));
        inputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);"));
        inputField->setClearButtonEnabled(true);
        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName("button_6");
        button_6->setGeometry(QRect(110, 140, 51, 31));
        button_6->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_mul = new QPushButton(centralwidget);
        button_mul->setObjectName("button_mul");
        button_mul->setGeometry(QRect(160, 140, 51, 31));
        button_mul->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName("button_1");
        button_1->setGeometry(QRect(10, 170, 51, 31));
        button_1->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName("button_2");
        button_2->setGeometry(QRect(60, 170, 51, 31));
        button_2->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName("button_3");
        button_3->setGeometry(QRect(110, 170, 51, 31));
        button_3->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_minus = new QPushButton(centralwidget);
        button_minus->setObjectName("button_minus");
        button_minus->setGeometry(QRect(160, 170, 51, 31));
        button_minus->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_point = new QPushButton(centralwidget);
        button_point->setObjectName("button_point");
        button_point->setGeometry(QRect(10, 200, 51, 31));
        button_point->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName("button_0");
        button_0->setGeometry(QRect(60, 200, 51, 31));
        button_0->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 183, 237);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_c = new QPushButton(centralwidget);
        button_c->setObjectName("button_c");
        button_c->setGeometry(QRect(110, 200, 51, 31));
        button_c->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_plus = new QPushButton(centralwidget);
        button_plus->setObjectName("button_plus");
        button_plus->setGeometry(QRect(160, 200, 51, 31));
        button_plus->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_log = new QPushButton(centralwidget);
        button_log->setObjectName("button_log");
        button_log->setGeometry(QRect(210, 80, 51, 31));
        button_log->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_open_bracket = new QPushButton(centralwidget);
        button_open_bracket->setObjectName("button_open_bracket");
        button_open_bracket->setGeometry(QRect(210, 140, 51, 31));
        button_open_bracket->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_eq = new QPushButton(centralwidget);
        button_eq->setObjectName("button_eq");
        button_eq->setGeometry(QRect(210, 200, 51, 31));
        button_eq->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_close_bracket = new QPushButton(centralwidget);
        button_close_bracket->setObjectName("button_close_bracket");
        button_close_bracket->setGeometry(QRect(210, 170, 51, 31));
        button_close_bracket->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        xInputField = new QLineEdit(centralwidget);
        xInputField->setObjectName("xInputField");
        xInputField->setGeometry(QRect(60, 20, 51, 31));
        xInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
""));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName("customPlot");
        customPlot->setGeometry(QRect(270, 20, 361, 211));
        customPlot->setStyleSheet(QString::fromUtf8("border-color: rgb(51, 209, 122);"));
        button_graph = new QPushButton(centralwidget);
        button_graph->setObjectName("button_graph");
        button_graph->setGeometry(QRect(270, 240, 71, 71));
        button_graph->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        xMinInputField = new QLineEdit(centralwidget);
        xMinInputField->setObjectName("xMinInputField");
        xMinInputField->setGeometry(QRect(360, 240, 91, 31));
        xMinInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);"));
        xMaxInputField = new QLineEdit(centralwidget);
        xMaxInputField->setObjectName("xMaxInputField");
        xMaxInputField->setGeometry(QRect(530, 240, 91, 31));
        xMaxInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);"));
        yMinInputField = new QLineEdit(centralwidget);
        yMinInputField->setObjectName("yMinInputField");
        yMinInputField->setGeometry(QRect(360, 280, 91, 31));
        yMinInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);"));
        yMaxInputField = new QLineEdit(centralwidget);
        yMaxInputField->setObjectName("yMaxInputField");
        yMaxInputField->setGeometry(QRect(530, 280, 91, 31));
        yMaxInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);"));
        button_goToCredit = new QPushButton(centralwidget);
        button_goToCredit->setObjectName("button_goToCredit");
        button_goToCredit->setGeometry(QRect(10, 240, 121, 31));
        button_goToCredit->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_goToDeposit = new QPushButton(centralwidget);
        button_goToDeposit->setObjectName("button_goToDeposit");
        button_goToDeposit->setGeometry(QRect(140, 240, 121, 31));
        button_goToDeposit->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 69, 147);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        stepInputField = new QLineEdit(centralwidget);
        stepInputField->setObjectName("stepInputField");
        stepInputField->setGeometry(QRect(190, 280, 71, 31));
        stepInputField->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 72, 87);\n"
""));
        button_x = new QPushButton(centralwidget);
        button_x->setObjectName("button_x");
        button_x->setGeometry(QRect(10, 20, 51, 31));
        button_x->setMinimumSize(QSize(51, 31));
        button_x->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        button_mod = new QPushButton(centralwidget);
        button_mod->setObjectName("button_mod");
        button_mod->setGeometry(QRect(210, 110, 51, 31));
        button_mod->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 119, 250);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(25, 37, 59);"));
        MainWindow->setCentralWidget(centralwidget);
        button_back->raise();
        button_9->raise();
        button_div->raise();
        button_4->raise();
        button_cos->raise();
        button_sin->raise();
        button_sqrt->raise();
        button_tan->raise();
        button_atan->raise();
        button_asin->raise();
        button_7->raise();
        button_8->raise();
        button_5->raise();
        button_acos->raise();
        button_ln->raise();
        button_6->raise();
        button_mul->raise();
        button_1->raise();
        button_2->raise();
        button_3->raise();
        button_minus->raise();
        button_point->raise();
        button_0->raise();
        button_c->raise();
        button_plus->raise();
        button_log->raise();
        button_open_bracket->raise();
        button_eq->raise();
        button_close_bracket->raise();
        customPlot->raise();
        button_graph->raise();
        xMinInputField->raise();
        xMaxInputField->raise();
        yMinInputField->raise();
        yMaxInputField->raise();
        button_goToCredit->raise();
        button_goToDeposit->raise();
        stepInputField->raise();
        button_x->raise();
        button_mod->raise();
        xInputField->raise();
        inputField->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_back->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos(", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin(", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt(", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan(", nullptr));
        button_atan->setText(QCoreApplication::translate("MainWindow", "atan(", nullptr));
        button_asin->setText(QCoreApplication::translate("MainWindow", "asin(", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_acos->setText(QCoreApplication::translate("MainWindow", "acos(", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln(", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_c->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log(", nullptr));
        button_open_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_close_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        xInputField->setText(QString());
        button_graph->setText(QCoreApplication::translate("MainWindow", "f(x)", nullptr));
        xMinInputField->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        xMaxInputField->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        yMinInputField->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        yMaxInputField->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        button_goToCredit->setText(QCoreApplication::translate("MainWindow", "credit calc", nullptr));
        button_goToDeposit->setText(QCoreApplication::translate("MainWindow", "deposit calc", nullptr));
        stepInputField->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
