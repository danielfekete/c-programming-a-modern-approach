/*
* Project 11
* A program that takes a first name and last name entered by the user
* and displays the last name, a comma
* and the first inital, followed by a period
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, initial;

    printf("Enter a first and last name: ");
    while ((c = getchar()) == ' ');
    initial = c;
    while ((c = getchar()) != ' ');

    while ((c = getchar()) != '\n' && c != ' '){
            putchar(c);
    }

    printf(", %c.\n", initial);

    return 0;    
}
