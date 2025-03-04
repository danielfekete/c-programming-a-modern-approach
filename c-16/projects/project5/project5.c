/*
* Project 5
* A program that asks a user to enter a time(expressed in hours and minutes 
* the 24 hour clock)
*/

#include <stdio.h>
#include <string.h>

struct time{
    int departure;
    int arrival;
};

void format_time(int t,char time[11]);

int main(void){

    int hour, minute, time;
    char departure[11], arrival[11];


    const struct time times[]={
        {8 * 60, 10 * 60 + 16},
        {9 * 60 + 43, 11 * 60 + 52},
        {11 * 60 + 19, 13 * 60 + 30},
        {12 * 60 + 47, 15 * 60},
        {14 * 60, 16 * 60 + 8},
        {15 * 60 + 45, 17 * 60 + 55},
        {19 * 60, 21 * 60 + 20},
        {21 * 60 + 45, 23 * 60 + 58}
    };

    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    struct time closest = times[7];

    for(int i = 0; i < 7; i++){
      if(time <= times[i].departure + ((times[i + 1].departure - times[i].departure) / 2)){
        closest = times[i];
        break;
      }
    }
    format_time(closest.departure, departure);
    format_time(closest.arrival, arrival);
    printf("Closest departure time is %s, arriving at %s\n", departure, arrival);

    return 0;    
}

void format_time(int t, char time[11]){
    int minutes, hours;

    minutes = t % 60;
    hours = t / 60;

    if((t / 60) > 12){
        sprintf(time, "%2d:%2d p.m.", 12 - (24 - hours), minutes);
    }else{
        sprintf(time, "%2d:%2d a.m.", hours, minutes);
    }
}
