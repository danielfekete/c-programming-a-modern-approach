/*
* Project 9
* A program that asks a user for a 12 hour time
* then displays in 24 hour form
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hour, minute;
    char c;

    printf("Enter a 12 hour time: ");
    scanf("%d:%d %c", &hour, &minute, &c);

    printf("Equivalent 24 hour time: %d:%d\n", toupper(c) == 'P' ? hour + 12 : hour, minute);

    return 0;    
}
