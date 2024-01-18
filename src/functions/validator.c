#include "s21_smartcalc.h"

int isOperator(const char input) {
  if (input == '+' || input == '-' || input == '*' || input == '/' ||
      input == '%' || input == '^') {
    return 1;
  }
  return 0;
}

int checkBrackets(const char* input) {
  int openBrackets = 0;
  int closeBrackets = 0;
  int i = 0;

  while (input[i] != '\0') {
    if (input[i] == '(') {
      openBrackets++;
    } else if (input[i] == ')') {
      closeBrackets++;
    }

    if (closeBrackets > openBrackets) {
      return 0;
    }
    i++;
  }

  if (openBrackets != closeBrackets) {
    return 0;
  }

  return 1;
}

int isFunction(const char* input) {
  if (strncmp(input, "sin(", 4) == 0 || strncmp(input, "cos(", 4) == 0 ||
      strncmp(input, "tan(", 4) == 0 || strncmp(input, "acos(", 5) == 0 ||
      strncmp(input, "asin(", 5) == 0 || strncmp(input, "atan(", 5) == 0 ||
      strncmp(input, "sqrt(", 5) == 0 || strncmp(input, "ln(", 3) == 0 ||
      strncmp(input, "log(", 4) == 0) {
    return 1;
  } else
    return 0;
}

int inputValid(const char* input) {
  int i = 0;
  char inputProcessed[strlen(input) + 1];
  removeSpaces(input, inputProcessed);
  int input_length = strlen(inputProcessed);

  if (inputProcessed[0] == '\0') return 0;

  if (isOperator(inputProcessed[input_length - 1]) ||
      inputProcessed[input_length - 1] == '(') {
    return 0;
  }

  if (isOperator(inputProcessed[0]) && inputProcessed[0] != '-' &&
      inputProcessed[0] != '+') {
    return 0;
  }

  if (!checkBrackets(inputProcessed)) return 0;

  while (inputProcessed[i] != '\0') {
    if (!isalnum(inputProcessed[i]) && inputProcessed[i] != '(' &&
        inputProcessed[i] != ')' && !isOperator(inputProcessed[i]) &&
        inputProcessed[i] != '.') {
      return 0;
    }
    if (inputProcessed[i] == '.') {
      if (isOperator(inputProcessed[i + 1]) || isalpha(inputProcessed[i + 1]) ||
          (inputProcessed[i + 1] == ')') || (inputProcessed[i + 1] == '('))
        return 0;
      int k = i + 1;
      while (isdigit(inputProcessed[k])) {
        k++;
      }
      if (inputProcessed[k] == '.') return 0;
    }
    if (inputProcessed[i] == '(') {
      if (isdigit(inputProcessed[i - 1]) || (inputProcessed[i + 1] == ')'))
        return 0;
    }
    if (inputProcessed[i] == ')') {
      if (isdigit(inputProcessed[i + 1])) return 0;
    }
    if (isalpha(inputProcessed[i]) && inputProcessed[i] != 'x') {
      if (isFunction(inputProcessed + i)) {
        // int start = i;
        int end = 0;
        while (inputProcessed[i] != '(' && inputProcessed[i] != '\0') {
          i++;
        }
        if (inputProcessed[i] == '(') {
          end = i;
        }
        i = end;
      } else
        return 0;
    }
    if (isOperator(inputProcessed[i]) && inputProcessed[i] != '-' &&
        inputProcessed[i] != '+') {
      if (isOperator((inputProcessed[i - 1])) || inputProcessed[i + 1] == ')' ||
          isOperator(inputProcessed[i + 1]))
        return 0;
    }
    if (inputProcessed[i] == '-' || inputProcessed[i] == '+') {
      if (i == 0 || isOperator(inputProcessed[i - 1]) ||
          inputProcessed[i - 1] == '(') {
        if (!isdigit(inputProcessed[i + 1]) &&
            !isalpha(inputProcessed[i + 1]) && inputProcessed[i + 1] != '(') {
          return 0;
        }
      }
    }
    i++;
  }
  // free(inputProcessed);
  return 1;
}
