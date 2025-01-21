/*
* project10.c
* A program that takes a first name and last name entered by the user
* and displays the last name, a comma
* and the first inital, followed by a period
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN 256

void reverse_name(char *name);
int read_line(char str[], int n);

int main(void){
    char full_name[LEN + 1];

    printf("Enter a first and last name: ");
    read_line(full_name, LEN);
    reverse_name(full_name);
    printf("%s\n", full_name);

    return 0;    
}

void reverse_name(char *name){
    char first_name[LEN + 1], last_name[LEN + 1];
    char *p = first_name, *q = last_name;

    while(*name == ' '){
        name++;
    }
    while(p < first_name + LEN && *name && *name != ' '){
         *p++ = *name++;
    }
    *p = '\0';
    while(*name == ' '){
        name++;
    }
    while(q < last_name + LEN && *name && *name != ' '){
            *q++ = *name++;
    }
    *q = '\0';

    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);
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
