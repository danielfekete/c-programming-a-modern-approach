/*
* project6.c
* A program that evaluates RPN expressions
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

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
