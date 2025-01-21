/*
* project16.c
* A program that reads a message then prints the reversal of the message
*/
#include <stdio.h>
#include <string.h>

#define N 100

char message[N], *p;

int read_line(char str[], int n);
void reverse(char *message);

int main(void)
{
    // char ch;
    char message[N];

    printf("Enter a message: ");
    read_line(message, N);
    // p = &message[0];
    // while((ch = getchar()) != '\n' && p < &message[N]){
    //     *p++ = ch;
    // }

    reverse(message);
    printf("Reversal is: %s\n", message);
    // p = p - 1;
    // while(p >= &message[0]){
    //     putchar(*p--);
    // }
    // printf("\n");

    return 0;
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

void reverse(char *message){
    char *p = message, *q = message + strlen(message) - 1;
    char *r = q + 1;
    char t;

    for(;p != q; p++, q--){
        t = *p;
        *p = *q;
        *q = t;
    }
    
    *r = '\0';
}
