#include "s21_smartcalc.h"

void init_credit(Credit_t *credit) {
  credit->amount = 0.0;
  credit->interestRate = 0.0;
  credit->months = 0;
  credit->overpayment = 0.0;
  credit->totalPayment = 0.0;
  credit->monthlyPayment = 0.0;
  credit->firstPayment = 0.0;
  credit->lastPayment = 0.0;
}

void creditcalc(Credit_t *credit, double amount, double interestRate,
                int months, int type) {
  init_credit(credit);
  credit->amount = amount;
  credit->interestRate = interestRate;
  credit->months = months;
  double monthlyInterest = interestRate / 1200.00;
  double lastPayment;

  if (type == 1) {
    double annuityK = (monthlyInterest * pow((1 + monthlyInterest), months)) /
                      (pow((1 + monthlyInterest), months) - 1);
    double monthlyPayment = annuityK * amount;
    lastPayment =
        (amount * monthlyInterest) / (1 - pow(1 + monthlyInterest, -months));


    credit->monthlyPayment = monthlyPayment;
    credit->totalPayment = monthlyPayment * months;
    credit->overpayment = monthlyPayment * months - amount;
    credit->lastPayment = lastPayment;
  } else {
    double left = amount;
    double totalPayment = 0.0;

    for (int i = 1; i <= months; i++) {
      double principalPayment = amount / months;
      double interestPayment = left * monthlyInterest;
      double totalMonthPayment = principalPayment + interestPayment;

      if (i == 1) {
        credit->firstPayment = totalMonthPayment;
      } else if (i == months) {
        credit->lastPayment = totalMonthPayment;
      }

      totalPayment += totalMonthPayment;
      left -= principalPayment;
    }

    credit->totalPayment = totalPayment;
    credit->overpayment = totalPayment - amount;
  }
}
