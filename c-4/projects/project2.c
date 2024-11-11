/*
* Project 2
* A program that asks a user to enter a three digit number, then prints the
* number with its digits reversed
*/

#include <stdio.h>

int main(void)
{
    int num, remainder100;

    printf("Enter a three-digit number: ");
    scanf("%d",&num);

    remainder100 = num % 100;

    printf("The reversal is %d%d%d\n", remainder100 % 10, remainder100 / 10, num / 100);

    return 0;
}
