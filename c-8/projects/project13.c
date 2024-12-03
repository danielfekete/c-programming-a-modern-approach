/*
* Project 13
* A program that takes a first name and last name entered by the user
* and displays the last name, a comma
* and the first inital, followed by a period
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int i;
    char c,
        initial,
        last_name[20] = {0};

    printf("Enter a first and last name: ");
    while ((c = getchar()) == ' ');
    initial = c;
    while ((c = getchar()) != ' ');

    i = 0;
    while ((c = getchar()) != '\n' && c != ' '){
            if(i < 20){
                last_name[i] = c;
            }
            i++;
    }

    printf("You entered the name: ");
    for(int i = 0; i < 20; i++){
        printf("%c",last_name[i]);
    }

    printf(", %c.\n", initial);

    return 0;    
}
