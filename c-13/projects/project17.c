/*
* project17.c
* A program that reads a message then checks wether it's a palindrome
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define N 100

char message[N];

int read_line(char str[], int n);
bool is_palindrome(const char *message);

int main(void)
{
    char ch, *p, *q;

    printf("Enter a message: ");
    read_line(message, N);

    if(is_palindrome(message)){
        printf("Palindrome\n");
        return 0;
    }
    
    printf("Not a palindrome\n");

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

bool is_palindrome(const char *message){
    const char *p = message, *q = message + strlen(message) - 1;

    for(;p < q; p++, q--){
        while(!isalpha(*p)){
            p++;
        }
        while(!isalpha(*q)){
            q--;
        }
        if(tolower(*p) != tolower(*q)){
            return false;
        }
    }
    return true;
}



