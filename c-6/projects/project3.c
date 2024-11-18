/*
 * Project 3
 * A program that asks the user to enter a fraction
 * then reduces the fraction to lowest terms
 */

#include <stdio.h>

int main(void){
    int f1, f2, remainder, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &f1, &f2);

    m = f1;
    n = f2;

    while(n > 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", f1 % m, f2 % m);

    return 0;
}
