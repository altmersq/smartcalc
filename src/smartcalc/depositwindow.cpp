#include "depositwindow.h"

#include "creditcalcwindow.h"
#include "mainwindow.h"
#include "ui_depositwindow.h"
extern "C" {
#include "../functions/s21_smartcalc.h"
}

depositwindow::depositwindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::depositwindow) {
  ui->setupUi(this);
}

depositwindow::~depositwindow() { delete ui; }

void depositwindow::on_button_goToCalc_clicked() {
  this->hide();
  MainWindow *mainWindow = new MainWindow();
  mainWindow->show();
}

void depositwindow::on_button_goToCredit_clicked() {
  this->hide();
  creditcalcWindow *ccWindow = new creditcalcWindow();
  ccWindow->show();
}

void depositwindow::on_button_calculateDeposit_clicked() {
  double depositAmount = ui->inputAmount->text().toDouble();
  double interestRate = ui->inputInterest->text().toDouble();
  double depositTerm = ui->inputTerm->text().toDouble();
  double taxRate = ui->inputTax->text().toDouble();
  int termType = 0;
  int capitalization = ui->checkCap->isChecked() ? 1 : 0;
  int payoutFrequency = 3;
  if (ui->comboMonths->currentIndex() == 0) {
    termType = 1;
  } else if (ui->comboMonths->currentIndex() == 1) {
    termType = 2;
  } else {
    termType = 3;
  }

  if (ui->comboPayout->currentIndex() == 0) {
    payoutFrequency = 1;
  } else if (ui->comboMonths->currentIndex() == 1) {
    payoutFrequency = 2;
  } else if (ui->comboMonths->currentIndex() == 2) {
    payoutFrequency = 3;
  } else if (ui->comboMonths->currentIndex() == 3) {
    payoutFrequency = 4;
  } else if (ui->comboMonths->currentIndex() == 4) {
    payoutFrequency = 5;
  } else if (ui->comboMonths->currentIndex() == 5) {
    payoutFrequency = 6;
  }

  QDateEdit *dateEdit = ui->dateStart;

  QDate date = dateEdit->date();
  int day = date.day();
  int month = date.month();
  int year = date.year();

  Date startTerm = {day, month, year};

  Deposit_t deposit;
  //        Date additions[/*Размер массива*/];
  //        Date withdrawals[/*Размер массива*/];

  calculateDeposit(&deposit, depositAmount, interestRate, depositTerm, taxRate,
                   payoutFrequency, capitalization, startTerm, termType);

  ui->textAccured->setText(QString::number(deposit.totalInterest));
  ui->textFinal->setText(QString::number(deposit.finalAmount));
  ui->textTax->setText(QString::number(deposit.totalTax));
}
