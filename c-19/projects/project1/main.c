#include <stdio.h>
#include "stack.h"

int main(void){
    char ch;
    Stack s = create();

    printf("Enter parentheses and/or braces: ");

    while((ch = getchar()) != '\n'){
        if(ch == '(' || ch == '{'){
            push(s,ch);
        }else if(ch == ')' && pop(s)!= '('){
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }else if(ch == '}' && pop(s) != '{'){
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
    }

    if(is_empty(s)){
        printf("Parentheses/braces are nested properly\n");
    }else{
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}
