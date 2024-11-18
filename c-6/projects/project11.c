/*
* Project 11
* A program that approximates e
*/

#include <stdio.h>

int main(void)
{
    float e;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1, denom = 1; i <= n; i++, e += 1.00f / (denom *= i)){
    }

    printf("e: %.f\n", e);

   
    return 0;
}
