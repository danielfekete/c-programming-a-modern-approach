/*
* Project 9
* A program which promts the user to enter two dates and then indicates which
* date comes earlier in the calendar
*/

#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date date1, date2;

    printf("Enter first date(mm/dd/yy): ");
    scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
    printf("Enter second date(mm/dd/yy): ");
    scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);

    if(
        date1.year < date2.year ||
        (date1.year == date2.year && date1.month < date2.month) ||
        (date1.year == date2.year && date1.month == date2.month && date1.day <= date2.day)
       ){
        printf("%d/%d/%d is earlier than %d/%d/%d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
    }else{
        printf("%d/%d/%d is earlier than %d/%d/%d\n", date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
    }
    
    return 0;
}
