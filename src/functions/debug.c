#include "s21_smartcalc.h"

// // void printStack(Stack_t *stack) {
// //   Node_t *current = stack->head;

// //   printf("Stack contents:\n");
// //   while (current != NULL) {
// //     switch (current->type) {
// //       case X:
// //         printf("Variable: 'x' | Priority: %d\n", current->priority);
// //         break;
// //       case NUM:
// //         printf("Number: %f | Priority: %d\n", current->value,
// //                current->priority);
// //         break;
// //       case PLUS:
// //         printf("Operator: '+' | Priority: %d\n", current->priority);
// //         break;
// //       case MINUS:
// //         printf("Operator: '-' | Priority: %d\n", current->priority);
// //         break;
// //       case MUL:
// //         printf("Operator: '*' | Priority: %d\n", current->priority);
// //         break;
// //       case DIV:
// //         printf("Operator: '/' | Priority: %d\n", current->priority);
// //         break;
// //       case MOD:
// //         printf("Operator: '%%' | Priority: %d\n", current->priority);
// //         break;
// //       case POW:
// //         printf("Operator: '^' | Priority: %d\n", current->priority);
// //         break;
// //       case COS:
// //         printf("Function: 'cos' | Priority: %d\n", current->priority);
// //         break;
// //       case SIN:
// //         printf("Function: 'sin' | Priority: %d\n", current->priority);
// //         break;
// //       case TAN:
// //         printf("Function: 'tan' | Priority: %d\n", current->priority);
// //         break;
// //       case ACOS:
// //         printf("Function: 'acos' | Priority: %d\n", current->priority);
// //         break;
// //       case ASIN:
// //         printf("Function: 'asin' | Priority: %d\n", current->priority);
// //         break;
// //       case ATAN:
// //         printf("Function: 'atan' | Priority: %d\n", current->priority);
// //         break;
// //       case SQRT:
// //         printf("Function: 'sqrt' | Priority: %d\n", current->priority);
// //         break;
// //       case LN:
// //         printf("Function: 'ln' | Priority: %d\n", current->priority);
// //         break;
// //       case LOG:
// //         printf("Function: 'log' | Priority: %d\n", current->priority);
// //         break;
// //       case LEFT_BRACKET:
// //         printf("Left Bracket: '(' | Priority: %d\n", current->priority);
// //         break;
// //       case RIGHT_BRACKET:
// //         printf("Right Bracket: ')' | Priority: %d\n", current->priority);
// //         break;
// //       default:
// //         printf("Unknown type\n");
// //         break;
// //     }
// //     current = current->next;
// //   }
// // }

// // int main() {
// //   Stack_t stack;
// //   stack.head = stack.tail = NULL;
// //   const char* infixExpression = "sin(1.57)";
// //   printf("Infix: %s\n", infixExpression);
// //   printf("valid input: %d\n", inputValid(infixExpression));
// //   stack = parse(infixExpression);
// //   printf("PARSED STACK: \n\n");
// //   printStack(&stack);
// //   stack = infixToPostfix(&stack);
// //   printf("\n\nRPN STACK:\n\n");
// //   printStack(&stack);
// //   double result = calculate(&stack);
// //   printf("result: %f\n", result);

// //   return 0;
// // }

// // int main() {
// //   Credit_t credit;

// //   double amount = 10000.0;
// //   double interestRate = 10.0;
// //   int months = 12;
// //   int type = 2;

// //   creditcalc(&credit, amount, interestRate, months, type);

// //   printf("Сумма кредита: %.2f\n", credit.amount);
// //   printf("Процентная ставка: %.2f\n", credit.interestRate);
// //   printf("Срок кредита в месяцах: %d\n", credit.months);
// //   printf("Ежемесячная выплата: %.2f\n", credit.monthlyPayment);
// //   printf("Общая выплата: %.2f\n", credit.totalPayment);
// //   printf("Переплата по кредиту: %.2f\n", credit.overpayment);

// //   return 0;
// // }

// int main() {
//   Deposit_t myDeposit;
//   init_deposit(&myDeposit);

//   // Date additions[] = { {0, 0, 0} };
//   // Date withdrawals[] = { {0, 0, 0} };
//   Date startTerm[] = {{01, 01, 2023}};

//   double depositAmount = 10000.0;
//   double interestRate = 10.0;
//   int depositTerm = 35;
//   double taxRate = 0.0;
//   int payoutFrequency = 1;
//   int capitalization = 1;
//   int termType = 1;
//   // int additionsCount = 0;
//   // int withdrawalsCount = 0;

//   calculateDeposit(&myDeposit, depositAmount, interestRate, depositTerm,
//                    taxRate, payoutFrequency, capitalization, *startTerm,
//                    termType);

//   printf("Начисленные проценты: %.2f\n", myDeposit.totalInterest);
//   printf("Сумма налога: %.2f\n", myDeposit.totalTax);
//   printf("Сумма на вкладе к концу срока: %.2f\n", myDeposit.finalAmount);

//   return 0;
// }