/*
* Project 3
* A program that asks a user to enter a three digit number, then prints the
* number with its digits reversed
*/

#include <stdio.h>

int main(void)
{
    int d1,d2,d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&d1,&d2,&d3);

    printf("The reversal is: %d%d%d\n",d3,d2,d1);

    return 0;
}
