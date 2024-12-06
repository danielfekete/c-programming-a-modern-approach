/*
* project6.c
* A program that evaluates RPN expressions
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int operands[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int operand);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void){
    char ch;
    int  n1, n2;
    bool invalid_ch = false;


    for(;;){
        printf("Enter an expression: ");

        for(;;){
            scanf(" %c", &ch);
            if(ch >= 48 && ch <= 57){
                push(ch - 48);
            }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                n2 = pop();
                n1 = pop();
                switch(ch){
                    case '+':
                        push(n1 + n2);
                        break;
                    case '-':
                        push(n1 - n2);
                        break;
                    case '*':
                        push(n1 * n2);
                        break;
                    case '/':
                        push(n1 / n2);
                        break;
                }
            }
            else if(ch == '='){
                printf("Value of expression: %d\n", pop());
                break;
            }else{
                exit(EXIT_FAILURE);
            }
        }
    }

    return 0;
}
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
