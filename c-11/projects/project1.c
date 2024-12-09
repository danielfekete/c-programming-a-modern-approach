/*
* project1.c
* A program that asks a user to enter a us dollar amount then shows how to
* pay that amount using the smallest number of $20, $10, $5, $1 bills
*/
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int twenties, tens, fives, dollars, ones;

    printf("Enter a dollar amount: ");
    scanf("%d",&dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    *ones = dollars - 20 * *twenties;
    *tens = *ones / 10;
    *ones = *ones - 10 * *tens;
    *fives = *ones / 5;
    *ones = *ones - 5 * *fives;
}
