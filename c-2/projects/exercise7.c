/*
* A program that asks a user to enter a us dollar amount then shows how to
* pay that amount using the smallest number of $20, $10, $5, $1 bills
*/
#include <stdio.h>

int main(void)
{

    int _20bills, _10bills, _5bills, amount, new_amount;

    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    _20bills = amount / 20;
    new_amount = amount - 20 * _20bills;
    _10bills = new_amount / 10;
    new_amount = new_amount - 10 * _10bills;
    _5bills = new_amount / 5;
    new_amount = new_amount - 5 * _5bills;

    printf("$20 bills: %d\n", _20bills);
    printf("$10 bills: %d\n", _10bills);
    printf("$5 bills: %d\n", _5bills);
    printf("$1 bills: %d\n", new_amount);



    return 0;
}
