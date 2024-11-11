/*
* Project 1
* A program that asks a user to enter a two digit number, then prints the
* number with its digits reversed
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d",&num);

    printf("The reversal is %d%d\n", num % 10, num / 10);

    return 0;
}
