/*
 * Project 1
 * A program that finds the largest in a series of numbers entered by the user
 */

#include <stdio.h>

int main(void){
    float largest = 0.0f, number;

    do{
        printf("Enter a number: ");
        scanf("%f", &number);
        
        if(number > largest){
            largest = number;
        }

    }while(number > 0.00f);

    printf("The largest number entered was %.2f\n", largest);

    return 0;
}
