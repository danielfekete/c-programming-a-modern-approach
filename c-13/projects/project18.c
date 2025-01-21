/*
* project17.c
* A program accepts a date from the user in the form of mm/dd/yyyy
* then displays it in month dd, yyyy
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define N 100

char message[N];

void pretty_date(const char *date, char *new_date);

int main(void)
{
    char date[11], new_date[19];

    printf("Enter a date:(mm/dd/yyyy): ");
    scanf("%s", date);

    pretty_date(date, new_date);

    printf("You entered the date %s\n", new_date);

    return 0;
}

void pretty_date(const char *date, char *new_date){
    char *months[]={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    char y[5], m[3], d[3], *py = y, *pm = m, *pd = d;

    while(*date != '/'){
        *pm++ = *date++;
    }
    date++;
    while(*date != '/'){
        *pd++ = *date++;
    }
    date++;
    while(*date){
        *py++ = *date++;
    }

    strcpy(new_date, months[atoi(m) - 1]);
    strcat(new_date, " ");
    strcat(new_date, d);
    strcat(new_date, ", ");
    strcat(new_date, y);
}


