/*
* Project 15
* A program that computes a factorial of a positive integer
*/
#include <stdio.h>

int main(void){
    unsigned int num;
    long double factorial = 1;


    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(int i = num;i > 0;i--){
        factorial *= i;
    }

    printf("Fractorial of %d: %Lf\n",num,factorial);

    return 0;
}
