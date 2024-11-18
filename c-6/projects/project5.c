/*
* Project 5
* A program that asks a user to enter a number, then prints the
* number with its digits reversed
*/

#include <stdio.h>

int main(void)
{
    int num, remainder;

    printf("Enter a number: ");
    scanf("%d",&num);

    // printf("The reversal is %d%d\n", num % 10, num / 10);

    printf("The reversal is: ");

    do{
        printf("%d",num % 10);
        num = num / 10;
    }while(num > 0);

    printf("\n");

    return 0;
}
