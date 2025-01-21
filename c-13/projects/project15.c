/*
* project15.c
* A program that evaluates RPN expressions
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100
#define LEN 100

int operands[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int operand);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);
int read_line(char str[], int n);

int main(void){
    char expression[LEN];
    bool invalid_ch = false;


    for(;;){
        printf("Enter an expression: ");
        read_line(expression, 100);
        printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
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

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}


int evaluate_RPN_expression(const char *expression){
    int  n1, n2;
    for(;*expression;expression++){
        if(*expression == ' '){
            continue;
        }
        else if(*expression >= 48 && *expression <= 57){
            push(*expression - 48);
        }else if(*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/'){
            n2 = pop();
            n1 = pop();
            switch(*expression){
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
        }else if(*expression == '='){
            break;
        }else{
            exit(EXIT_FAILURE);
        }           
    }
    return pop();     
}
