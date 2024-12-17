/*
* project2.c
* A program that reads a message then checks wether it's a palindrome
*/
#include <stdio.h>
#include <ctype.h>

#define N 100

char message[N];

int main(void)
{
    char ch, *p, *q;

    printf("Enter a message: ");
    p = &message[0];
    while((ch = getchar()) != '\n' && p < &message[N]){
        if(isalpha(ch)){
            *p++ = tolower(ch);
        }
    }

    q = &message[0];
    p = p - 1;
    while(p >= q){
        if(*p-- != *q++){
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");

    return 0;
}

