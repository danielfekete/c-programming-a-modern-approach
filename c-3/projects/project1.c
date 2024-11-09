/*
* Project 1
* A program that accepts a date from the user in the form of mm/dd/yyyy then
* displays it in the form of yyyymmdd
*/

#include <stdio.h>

int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%d%d\n",year,month,day);

    return 0;
}
