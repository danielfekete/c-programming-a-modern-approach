#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void){
    Stack s = create();

    char ch;
    int  n1, n2;
    bool invalid_ch = false;

    for(;;){
        printf("Enter an expression: ");

        for(;;){
            scanf(" %c", &ch);
            if(ch >= 48 && ch <= 57){
                push(s, ch - 48);
            }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                n2 = pop(s);
                n1 = pop(s);
                switch(ch){
                    case '+':
                        push(s, n1 + n2);
                        break;
                    case '-':
                        push(s, n1 - n2);
                        break;
                    case '*':
                        push(s, n1 * n2);
                        break;
                    case '/':
                        push(s, n1 / n2);
                        break;
                }
            }
            else if(ch == '='){
                printf("Value of expression: %d\n", pop(s));
                break;
            }else{
                exit(EXIT_FAILURE);
            }
        }
    }

    return 0;
}
