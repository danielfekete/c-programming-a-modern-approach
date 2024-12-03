/*
* Project 10
* A program that asks a user to enter a time(expressed in hours and minutes 
* the 24 hour clock)
*/

#include <stdio.h>

int main(void){

    int 
    u_hour,
    u_minute,
    u_time,
    a[8]={
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58
    },
    a_hour,
    a_minute,
    d[8] = {
        8 * 60,
        9 * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
    },
    d_hour,
    d_minute;


    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &u_hour, &u_minute);

    u_time = u_hour * 60 + u_minute;


    for(int i = 0; i < 8; i++){
        d_hour = d[i] / 60 > 12 ? d[i] / 60 - 12 : d[i] / 60;
        d_minute = d[i] % 60;
        a_hour = a[i] / 60 > 12 ? a[i] / 60 - 12 : a[i] / 60;
        a_minute = a[i] % 60;
        if(i == 7 || u_time <= d[i] + ((d[i + 1] - d[i]) / 2)){
            printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", d_hour, d_minute, d[i] / 60 > 11 ? 'p' : 'a', a_hour, a_minute, a[i] / 60 > 11 ? 'p' : 'a');
            break;
        }
    }

    return 0;    
}
