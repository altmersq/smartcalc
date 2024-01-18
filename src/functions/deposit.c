#include "s21_smartcalc.h"

void init_deposit(Deposit_t *deposit) {
  deposit->depositAmount = 0.0;
  deposit->interestRate = 0.0;
  deposit->depositTerm = 0;
  deposit->taxRate = 0.0;
  deposit->payoutFrequency = 0;
  deposit->capitalization = 0;
  deposit->totalInterest = 0.0;
  deposit->totalTax = 0.0;
  deposit->finalAmount = 0.0;
}

int daysInMonth(int month, int year) {
  int days;

  if (month == 4 || month == 6 || month == 9 || month == 11) {
    days = 30;
  } else if (month == 2) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      days = 29;
    } else {
      days = 28;
    }
  } else {
    days = 31;
  }

  return days;
}

void calculateDeposit(Deposit_t *deposit, double depositAmount, double interestRate,
                      int depositTerm, double taxRate, int payoutFrequency, int capitalization, Date startTerm, int termType
                      /*Date *additions, Date *withdrawals, int additionsCount, int withdrawalsCount*/) {
  init_deposit(deposit);
  deposit->depositAmount = depositAmount;
  deposit->interestRate = interestRate;
  deposit->depositTerm = depositTerm;
  deposit->taxRate = taxRate;
  deposit->payoutFrequency = payoutFrequency;
  deposit->capitalization = capitalization;

  double currentAmount = depositAmount;
  double totalInterest = 0.0;
  int currentMonth = startTerm.month;
  int currentYear = startTerm.year;
  int currentDay = startTerm.day;
  // printf("%d\n", currentMonth);
  // printf("currentDayMonhth: %d.%d\n", currentDay, currentMonth);
  int days = 0;

  if (termType == 1) {
    days = depositTerm;
  } else if (termType == 2) {
    for (int month = 1; month <= depositTerm; ++month) {
      days += daysInMonth(currentMonth, currentYear);
      currentMonth++;
      if (currentMonth == 12) {
        currentMonth = 1;
        currentYear += 1;
      }
    }
  } else if (termType == 3) {
    for (int year = 1; year <= depositTerm; ++year) {
      if ((currentYear % 4 == 0 && currentYear % 100 != 0) ||
          currentYear % 400 == 0) {
        days += 366;
      } else
        days += 365;
    }
  }

  currentMonth = startTerm.month;
  currentYear = startTerm.year;
  // printf("currentDayMonhth: %d.%d\n", currentDay, currentMonth);
  // printf("days: %d\n", days);

  for (int day = 1; day <= days; ++day) {
    // int days = daysInMonth(currentMonth, currentYear);
    // printf("day count: %d   currentDayMonhth: %d.%d\n", day, currentDay,
    // currentMonth);
    switch (payoutFrequency) {
      case 1:  // Daily
        if (day % 1 == 0) {
          double dailyInterest =
              (currentAmount * interestRate) / (100.0 * 365.0);
          totalInterest += dailyInterest;
          if (capitalization == 1) {
            currentAmount += dailyInterest;
          }
        }
        break;

      case 2:  // Weekly
        if ((currentDay - startTerm.day) % 7 == 0 && day != 1) {
          //printf("day count: %d   currentDayMonhth: %d.%d\n", day, currentDay,
           //      currentMonth);
          double weeklyInterest =
              (currentAmount * interestRate * 7) / (100.0 * 365.0);
          totalInterest += weeklyInterest;
          if (capitalization == 1) {
            currentAmount += weeklyInterest;
          }
        }
        break;

      case 3:  // Monthly
        if (currentDay == startTerm.day && day != 1) {
          // printf("day count: %d   currentDayMonhth: %d.%d\n", day,
          // currentDay, currentMonth);
          double monthlyInterest =
              (currentAmount * interestRate * 30) / (100.0 * 365.0);
          totalInterest += monthlyInterest;
          if (capitalization == 1) {
            currentAmount += monthlyInterest;
          }
        }
        break;
      case 4:  // Quarterly
        if ((currentMonth - startTerm.month) % 3 == 0 &&
            currentDay == startTerm.day && day != 1) {
          double quarterlyInterest =
              (currentAmount * interestRate * 90) / (100.0 * 365.0);
          totalInterest += quarterlyInterest;
          if (capitalization == 1) {
            currentAmount += quarterlyInterest;
          }
        }
        break;
      case 5:  // Semi-annually
        if ((currentMonth - startTerm.month) % 6 == 0 &&
            currentDay == startTerm.day && day != 1) {
          double semiAnnualInterest =
              (currentAmount * interestRate * 180) / (100.0 * 365.0);
          totalInterest += semiAnnualInterest;
          if (capitalization == 1) {
            currentAmount += semiAnnualInterest;
          }
        }
        break;
      case 6:  // Yearly
        if (currentMonth == startTerm.month && currentDay == startTerm.day &&
            day != 1) {
          double yearlyInterest =
              (currentAmount * interestRate * 365) / (100.0 * 365.0);
          totalInterest += yearlyInterest;
          if (capitalization == 1) {
            currentAmount += yearlyInterest;
          }
        }
        break;
    }

    currentDay++;
    if (currentDay == daysInMonth(currentMonth, currentYear)) {
      if (currentMonth == 12) {
        currentMonth = 1;
        currentYear++;
      } else {
        currentMonth++;
      }
      currentDay = 1;
    }
  }

  deposit->totalTax = totalInterest * (taxRate / 100);
  deposit->finalAmount = currentAmount - deposit->totalTax;
  deposit->totalInterest = totalInterest;
}
