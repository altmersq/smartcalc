#include "creditcalcwindow.h"

#include <qdebug.h>

#include <QLineEdit>

#include "depositwindow.h"
#include "mainwindow.h"
#include "ui_creditcalcwindow.h"
extern "C" {
#include "../functions/s21_smartcalc.h"
}

creditcalcWindow::creditcalcWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::creditcalcWindow) {
  ui->setupUi(this);
}

creditcalcWindow::~creditcalcWindow() { delete ui; }

void creditcalcWindow::on_button_goToCalc_clicked() {
  this->hide();
  MainWindow *mainWindow = new MainWindow();
  mainWindow->show();
}

void creditcalcWindow::on_button_calculateLoan_clicked() {
  double amount = ui->inputAmount->text().toDouble();
  double interestRate = ui->inputInterest->text().toDouble();

  int termValue = ui->inputTerm->text().toInt();
  int months;

  if (ui->comboMonths->currentIndex() == 0) {
    months = termValue;
  } else {
    months = termValue * 12;
  }

  int creditType = ui->comboType->currentIndex() + 1;

  Credit_t credit;
  creditcalc(&credit, amount, interestRate, months, creditType);

  QString resultText;

  if (creditType == 1) {
    resultText =
        "Ежемесячный платеж: " +
        QString::number(credit.monthlyPayment, 'f', 2) + "\n" +
        "Общая выплата: " + QString::number(credit.totalPayment, 'f', 2) +
        "\n" + "Переплата: " + QString::number(credit.overpayment, 'f', 2); /*+
        "\n" + "last payment: " + QString::number(credit.lastPayment, 'f', 2);*/
  } else {
    resultText =
        "Первый платеж: " + QString::number(credit.firstPayment, 'f', 2) +
        "\n" +
        "Последний платеж: " + QString::number(credit.lastPayment, 'f', 2) +
        "\n" +
        "Общая выплата: " + QString::number(credit.totalPayment, 'f', 2) +
        "\n" + "Переплата: " + QString::number(credit.overpayment, 'f', 2);
  }

  ui->textBrowser->setText(resultText);
}

void creditcalcWindow::on_button_goToDeposit_clicked() {
  this->hide();
  depositwindow *depositWindow = new depositwindow();
  depositWindow->show();
}
