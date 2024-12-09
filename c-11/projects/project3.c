/*
 * project3.c
 * A program that asks the user to enter a fraction
 * then reduces the fraction to lowest terms
 */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){
    int f1, f2, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &f1, &f2);

    reduce(f1, f2, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int remainder, n, m;

    m = numerator;
    n = denominator;

    while(n > 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator % m;

    *reduced_denominator = denominator % m;
}
