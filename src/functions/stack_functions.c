#include <stdlib.h>
#include <string.h>

#include "s21_smartcalc.h"

void initializeStack(Stack_t* stack) { stack->head = stack->tail = NULL; }

int isEmpty(Stack_t* stack) { return (stack->head == NULL); }

void push(Stack_t* stack, double value, int priority, type_t type) {
  Node_t* newNode = (Node_t*)malloc(sizeof(Node_t));
  newNode->value = value;
  newNode->priority = priority;
  newNode->type = type;
  newNode->next = NULL;

  if (stack->head == NULL) {
    stack->head = newNode;
    stack->tail = newNode;
  } else {
    stack->tail->next = newNode;
    newNode->prev = stack->tail;
    stack->tail = newNode;
  }
}

Node_t* pop(Stack_t* stack) {
  if (stack->head == NULL) {
    return NULL;
  }

  Node_t* popped = stack->tail;

  if (stack->head == stack->tail) {
    stack->head = stack->tail = NULL;
  } else {
    stack->tail = stack->tail->prev;
    stack->tail->next = NULL;
  }

  return popped;
}

Node_t* peek(Stack_t* stack) { return stack->tail; }
