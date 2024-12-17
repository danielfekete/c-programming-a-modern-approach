/*
* project1.c
* A program that reads a message then prints the reversal of the message
*/
#include <stdio.h>

#define N 100

char message[N], *p;

int main(void)
{
    char ch;

    printf("Enter a message: ");
    p = &message[0];
    while((ch = getchar()) != '\n' && p < &message[N]){
        *p++ = ch;
    }

    printf("Reversal is: ");
    p = p - 1;
    while(p >= &message[0]){
        putchar(*p--);
    }
    printf("\n");

    return 0;
}

