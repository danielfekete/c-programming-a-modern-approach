/*
* Project 1
* A program that asks the user for a 24-hour time, then displays the time in 12
* hour form
*/
#include <stdio.h>

int main(void)
{
    int hour, minute;
    int newHour;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    switch(hour)
    {
        case 1: case 13:
        newHour = 1;
        break;
        case 2: case 14:
        newHour = 2;
        break;
        case 3: case 15:
        newHour = 3;
        break;
        case 4: case 16:
        newHour = 4;
        break;
        case 5: case 17:
        newHour = 5;
        break;
        case 6: case 18:
        newHour = 6;
        break;
        case 7: case 19:
        newHour = 7;
        break;
        case 8: case 20:
        newHour = 8;
        break;
        case 9: case 21:
        newHour = 9;
        break;
        case 10: case 22:
        newHour = 10;
        break;
        case 11: case 23:
        newHour = 11;
        break;
        default:
        newHour = hour;
        break;
    }

    printf("Equivalent 12-hour time: %d:%d ", newHour, minute);
    if(hour < 12){
        printf("AM\n");
    }else{
        printf("PM\n");
    }

    return 0;
}
