/*
* Project 8
* A program that writes a one-month calendar
*/

#include <stdio.h>

int main(void){

    int number_of_days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &number_of_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);


    for(int i = 1; i <= number_of_days + starting_day; i++){
        if(i - starting_day <= 0){
            printf("\t");
            continue;
        }

        printf("%d", i - starting_day);

        if(i % 7 == 0){
            printf("\n");
        }else{
            printf("\t");
        }
    }

    printf("\n");

    return 0;
}
