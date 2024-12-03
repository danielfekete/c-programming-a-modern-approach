/*
* Project 3
* This program sums a series of doubles
*/

#include <stdio.h>

int main(void){
    double n, sum = 0;

    printf("This program sums a series of dobules.\n");
    printf("Enter doubles (0 to terminate): ");
    scanf("%lf", &n);
    
    while(n != 0){
        sum += n;
        scanf("%lf", &n); 
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}
