/*
* Project 12
* A program that approximates e
*/

#include <stdio.h>

int main(void)
{
    float e = 1.00f, epsilon;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 1, denom = 1, term = 1.0f; term > epsilon; i++) {
        term = (1.0f / (denom *= i));
        e += term;
    }

    printf("e: %.f\n", e);

   
    return 0;
}
