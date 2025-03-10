#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"
#define STACK_SIZE 100

int operands[STACK_SIZE];
int top = 0;

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void push(int operand){
    if(is_full()){
        stack_overflow();
    }
    operands[top++] = operand;
}

int pop(void){
    if(is_empty()){
        stack_underflow();
    }
    return operands[--top];
}

void stack_overflow(void){
    printf("\nExpression is too complex!\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("\nNot enough operands in expression!\n");
    exit(EXIT_FAILURE);
}
