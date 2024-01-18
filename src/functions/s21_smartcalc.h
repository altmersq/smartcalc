#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef S21_SMARTCALC_H
#define S21_SMARTCALC_H

typedef enum {
  X,
  NUM,
  PLUS,
  MINUS,
  MUL,
  DIV,
  MOD,
  POW,
  COS,
  SIN,
  TAN,
  ACOS,
  ASIN,
  ATAN,
  SQRT,
  LN,
  LOG,
  LEFT_BRACKET,
  RIGHT_BRACKET,
  NEGATIVE
} type_t;

typedef struct Node_t {
  double value;
  int priority;
  type_t type;
  struct Node_t* next;
  struct Node_t* prev;
} Node_t;

typedef struct Stack {
  Node_t* head;
  Node_t* tail;
} Stack_t;

// stack fucntions
void initializeStack(Stack_t* stack);
int isEmpty(Stack_t* stack);
void push(Stack_t* stack, double value, int priority, type_t type);
Node_t* pop(Stack_t* stack);
Node_t* peek(Stack_t* stack);
void printStack(Stack_t* stack);

// input validation fucntions
int isOperator(const char input);
int checkBrackets(const char* input);
int isFunction(const char* input);
int inputValid(const char* input);

int isNumber(char* str);
void removeSpaces(const char* str, char* result);

Stack_t parse(const char* input);
Stack_t infixToPostfix(Stack_t* infixStack);
double calculate(Stack_t* postfixStack);

// credit
typedef struct {
  double amount;
  double interestRate;
  int months;
  double overpayment;
  double totalPayment;
  double monthlyPayment;
  double firstPayment;
  double lastPayment;
} Credit_t;

void init_credit(Credit_t* credit);
void creditcalc(Credit_t* credit, double amount, double interestRate,
                int months, int type);

// deposit
typedef struct {
  int day;
  int month;
  int year;
} Date;

typedef struct {
  double depositAmount;
  double interestRate;
  int depositTerm;
  double taxRate;
  int payoutFrequency;  // Частота выплаты процентов
  int capitalization;   // Капитализация процентов
  double totalInterest;
  double totalTax;
  double finalAmount;
  Date* additionsDates;      // Даты пополнений
  double* additionsAmounts;  // Суммы пополнений
  int additionsCount;
  Date* withdrawalsDates;      // Даты частичных снятий
  double* withdrawalsAmounts;  // Суммы частичных снятий
  int withdrawalsCount;
} Deposit_t;

void init_deposit(Deposit_t* deposit);
int daysInMonth(int month, int year);
void calculateDeposit(Deposit_t* deposit, double depositAmount,
                      double interestRate, int depositTerm, double taxRate,
                      int payoutFrequency, int capitalization, Date startTerm,
                      int termType);

#endif /* S21_SMARTCALC_H */
