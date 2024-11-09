/*
* Project 4
* A program that prompts the user to enter a telephone number in the form (xxx)
* xxx-xxxx and then displays the form xxx.xxx.xxxx
*/

#include <stdio.h>

int main(void)
{
    int x1, x2, x3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &x1, &x2, &x3);

    printf("You entered %d.%d.%d\n", x1, x2, x3);

    return 0;
}
