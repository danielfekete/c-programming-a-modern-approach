/*
* Project 9
* A program which promts the user to enter two dates and then indicates which
* date comes earlier in the calendar
*/

#include <stdio.h>

int main(void)
{
    int m1, d1, y1;
    int m2, d2, y2;

    printf("Enter first date(mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date(mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if(
        y1 < y2 ||
        (y1 == y2 && m1 < m2) ||
        (y1 == y2 && m1 == m2 && d1 <= d2)
       ){
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
    }else{
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
    }
    
    return 0;
}
