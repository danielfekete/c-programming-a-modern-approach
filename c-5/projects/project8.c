/*
* Project 8
* A program that asks a user to enter a time(expressed in hours and minutes 
* the 24 hour clock)
*/

#include <stdio.h>

int main(void){

    int hour, minute, time;

    int d1 = 8 * 60,
        d2 = 9 * 60 + 43,
        d3 = 11 * 60 + 19,
        d4 = 12 * 60 + 47,
        d5 = 14 * 60,
        d6 = 15 * 60 + 45,
        d7 = 19 * 60,
        d8 = 21 * 60 + 45;

    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    if(time <= d1 + ((d2 - d1) / 2)){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }else if(time <= d2 + ((d3 - d2) / 2)){
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }else if(time <= d3 + ((d4 - d3) / 2)){
        printf("Closest departure time is 11:19 a.m., arriving at 1:30 p.m.\n");
    }else if(time <= d4 + ((d5 - d4) / 2)){
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }else if(time <= d5 + ((d6 - d5) / 2)){
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }else if(time <= d6 + ((d7 - d6) / 2)){
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }else if(time <= d7 + ((d8 - d7) / 2)){
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }else{
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;    
}
