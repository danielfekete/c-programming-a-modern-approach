/*
* Project 10
* A program which promts the user to enter n dates and then indicates which
* date comes earlier in the calendar
*/

#include <stdio.h>

int main(void)
{
    int m, d, y;
    int min_m = 0, min_d = 0, min_y = 0;

    for(;;){
        printf("Enter a date(mm/dd/yy): ");
        scanf("%d/%d/%d", &m, &d, &y);

        if(m == 0 && d == 0 && y == 0){
            break;
        }

        if(
            (!min_m && !min_d && !min_y) ||
            (y < min_y ||
            (y == min_y && m < min_m) ||
            (y == min_y && m == min_m && d <= min_d))
        ){
            min_m = m;
            min_d = d;
            min_y = y;
        }
    }


    printf("%d/%d/%2d is the earliest date\n", min_m, min_d, min_y);
    
    return 0;
}
