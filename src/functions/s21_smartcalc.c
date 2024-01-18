#include "s21_smartcalc.h"

int getPriority(type_t type) {
  switch (type) {
    case LEFT_BRACKET:
      return -1;
    case RIGHT_BRACKET:
      return -1;
    case PLUS:
    case MINUS:
      return 1;
    case MUL:
    case DIV:
    case MOD:
      return 2;
    case POW:
      return 3;
    case COS:
    case SIN:
    case TAN:
    case ACOS:
    case ASIN:
    case ATAN:
    case SQRT:
    case LN:
    case LOG:
      return 4;
    default:
      return 0;
  }
}

void removeSpaces(const char *str, char *result) {
  int length = strlen(str);
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (str[i] != ' ') {
      result[count++] = str[i];
    }
  }
  result[count] = '\0';
}

Stack_t parse(const char *input) {
  setlocale(LC_NUMERIC, "C");
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char number_str[256] = {0};
  double num = 0;
  // printf("input: %s\n", input);
  char inputNoSpaces[strlen(input) + 1];
  removeSpaces(input, inputNoSpaces);

  for (int i = 0; inputNoSpaces[i] != '\0'; i++) {
    if (isdigit(inputNoSpaces[i]) || inputNoSpaces[i] == '.') {
      int start = i;
      while (isdigit(inputNoSpaces[i]) || inputNoSpaces[i] == '.') {
        i++;
      }
      int end = i;
      int k;
      for (k = start; k < end; k++) {
        number_str[k - start] = inputNoSpaces[k];
      }
      number_str[k - start] = '\0';
      // printf("numstr: %s\n", number_str);
      num = atof(number_str);
      // printf("num: %f\n", num);
      if (start > 0 && inputNoSpaces[start - 1] == '-' &&
          !isdigit(inputNoSpaces[start - 2]) &&
          inputNoSpaces[start - 2] != ')') {
        // printf("start: %d\n",start);
        num = -num;  // Унарный минус
        pop(&stack);
      }

      i--;
      push(&stack, num, 0, NUM);
      // printf("%f\n", num);
      for (int j = 0; j < end; j++) number_str[j] = 0;
      end = start = 0;
    } else if (inputNoSpaces[i] == '(') {
      push(&stack, 0, -1, LEFT_BRACKET);
    } else if (inputNoSpaces[i] == ')') {
      push(&stack, 0, -1, RIGHT_BRACKET);
    } else if (inputNoSpaces[i] == 'x') {
      push(&stack, 0, 0, X);
    } else if (inputNoSpaces[i] == '+') {
      // if (stack.head->type == LEFT_BRACKET) push(&stack, 0, 0, NUM);
      push(&stack, 0, 1, PLUS);
    } else if (inputNoSpaces[i] == '-') {
      push(&stack, 0, 1, MINUS);
    } else if (inputNoSpaces[i] == '*') {
      push(&stack, 0, 2, MUL);
    } else if (inputNoSpaces[i] == '/') {
      push(&stack, 0, 2, DIV);
    } else if (inputNoSpaces[i] == '%') {
      push(&stack, 0, 2, MOD);
    } else if (inputNoSpaces[i] == '^') {
      push(&stack, 0, 3, POW);
    } else if (inputNoSpaces[i] == 'c') {
      push(&stack, 0, 4, COS);
    } else if (inputNoSpaces[i] == 's') {
      if (inputNoSpaces[i + 1] == 'i') {
        push(&stack, 0, 4, SIN);
        i += 2;
      } else if (inputNoSpaces[i + 1] == 'q') {
        push(&stack, 0, 4, SQRT);
        i += 3;
      }
    } else if (inputNoSpaces[i] == 't') {
      push(&stack, 0, 4, TAN);
      i += 2;
    } else if (inputNoSpaces[i] == 'l') {
      if (inputNoSpaces[i + 1] == 'n') {
        push(&stack, 0, 4, LN);
        i += 1;
      } else if (inputNoSpaces[i + 1] == 'o') {
        push(&stack, 0, 4, LOG);
        i += 2;
      }
    } else if (inputNoSpaces[i] == 'a') {
      if (inputNoSpaces[i + 1] == 's') {
        push(&stack, 0, 4, ASIN);
        i += 3;
      } else if (inputNoSpaces[i + 1] == 'c') {
        push(&stack, 0, 4, ACOS);
        i += 3;
      } else if (inputNoSpaces[i + 1] == 't') {
        push(&stack, 0, 4, ATAN);
        i += 3;
      }
    }
  }

  return stack;
}

Stack_t infixToPostfix(Stack_t *infixStack) {
  Stack_t postfixStack;
  initializeStack(&postfixStack);
  Stack_t operators;
  initializeStack(&operators);

  Node_t *current = infixStack->head;

  while (current != NULL) {
    // printStack(&operators);
    switch (current->type) {
      case X:
      case NUM:
        push(&postfixStack, current->value, current->priority, current->type);
        // printf("pushed num\n");
        break;
      case PLUS:
      case MINUS:
      case MUL:
      case DIV:
      case MOD:
      case POW:
        while (!isEmpty(&operators) &&
               (peek(&operators)->type != LEFT_BRACKET) &&
               (getPriority(current->type) <=
                getPriority(peek(&operators)->type))) {
          Node_t *op = pop(&operators);
          push(&postfixStack, op->value, op->priority, op->type);
          free(op);
        }
        push(&operators, current->value, current->priority, current->type);
        break;
      case LEFT_BRACKET:
        push(&operators, current->value, current->priority, current->type);
        break;
      case RIGHT_BRACKET:
        while (!isEmpty(&operators) && peek(&operators)->type != LEFT_BRACKET) {
          Node_t *op = pop(&operators);
          push(&postfixStack, op->value, op->priority, op->type);
          free(op);
        }
        if (!isEmpty(&operators) && peek(&operators)->type == LEFT_BRACKET) {
          pop(&operators);
        } else {
          printf("Ошибка: Неправильное количество скобок\n");
          return postfixStack;
        }
        break;
      case COS:
      case SIN:
      case TAN:
      case ACOS:
      case ASIN:
      case ATAN:
      case SQRT:
      case LN:
      case LOG:
        push(&operators, current->value, current->priority, current->type);
        break;
      default:
        break;
    }
    current = current->next;
  }

  while (!isEmpty(&operators)) {
    Node_t *op = pop(&operators);
    if (op->type == LEFT_BRACKET || op->type == RIGHT_BRACKET) {
      return postfixStack;
    }
    push(&postfixStack, op->value, op->priority, op->type);
    // operators.head = operators.tail = NULL;
  }
  initializeStack(&operators);
  return postfixStack;
}

double calculate(Stack_t *postfixStack) {
  Stack_t resultStack;
  initializeStack(&resultStack);
  Node_t *current = postfixStack->head;
  double a = 0.0, b = 0.0;

  while (current != NULL) {
    switch (current->type) {
      case X:
      case NUM:
        push(&resultStack, current->value, current->priority, current->type);
        break;
      case PLUS:
      case MINUS:
      case MUL:
      case DIV:
      case MOD:
      case POW:
        if (!isEmpty(&resultStack)) {
          a = pop(&resultStack)->value;
          if (!isEmpty(&resultStack)) {
            b = pop(&resultStack)->value;
            double result = 0.0;
            switch (current->type) {
              case PLUS:
                result = b + a;
                break;
              case MINUS:
                result = b - a;
                break;
              case MUL:
                result = b * a;
                break;
              case DIV:
                if (a != 0) {
                  result = b / a;
                } else {
                  return INFINITY;
                }
                break;
              case MOD:
                if ((int)a != 0) {
                  result = fmod(b, a);
                } else {
                  return INFINITY;
                }
                break;
              case POW:
                result = pow(b, a);
                break;
              default:
                break;
            }
            push(&resultStack, result, 0, NUM);
          } else {
            return NAN;
          }
        } else {
          return NAN;
        }
        break;
      case COS:
      case SIN:
      case TAN:
      case ACOS:
      case ASIN:
      case ATAN:
      case SQRT:
      case LN:
      case LOG: {
        a = 0;
        if (current->type == MINUS &&
            (isEmpty(&resultStack) || resultStack.head->next == NULL)) {
          a = pop(&resultStack)->value;
          double result = -a;
          push(&resultStack, result, 0, NUM);
        } else if (current->type == PLUS &&
                   (isEmpty(&resultStack) || resultStack.head->next == NULL)) {
          a = pop(&resultStack)->value;
          double result = a;
          push(&resultStack, result, 0, NUM);
        } else {
          if (!isEmpty(&resultStack)) {
            a = pop(&resultStack)->value;
            double result = 0.0;
            switch (current->type) {
              case POW:
                result = pow(b, a);
                break;
              case COS:
                result = cos(a);
                break;
              case SIN:
                result = sin(a);
                break;
              case TAN:
                result = tan(a);
                break;
              case ACOS:
                result = acos(a);
                break;
              case ASIN:
                result = asin(a);
                break;
              case ATAN:
                result = atan(a);
                break;
              case SQRT:
                if (a >= 0) {
                  result = sqrt(a);
                } else {
                  return NAN;
                }
                break;
              case LN:
                if (a > 0) {
                  result = log(a);
                } else {
                  return NAN;
                }
                break;
              case LOG:
                if (a > 0) {
                  result = log10(a);
                } else {
                  return NAN;
                }
                break;
              default:
                break;
            }
            push(&resultStack, result, 0, NUM);
          } else {
            return NAN;
          }
        }
        break;
      }
      default:
        break;
    }
    current = current->next;
  }
  if (!isEmpty(&resultStack)) {
    return pop(&resultStack)->value;
  } else {
    return NAN;
  }
}
