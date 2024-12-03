/*
* Project 1
* A program that prints a table of squares
*/

#include <stdio.h>

int main(void){

    long int n, i;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%ld",&n);

    for(i = 1; i <= n; i++){
        printf("%ld\t%ld\n", i, i * i);
    }

    return 0;
}
