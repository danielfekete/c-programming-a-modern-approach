/*
* project6.c
* A program that asks a user to enter a value for x
* calls the function to compute the value of the polynomial
*/

#include <stdio.h>
#include <ctype.h>


int power(int x, int y);
int compute_polynomial(int x);

int main(void){
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("Polynomial result:  %d\n",compute_polynomial(x));

    return 0;
}

int power(int x, int y){
    int res = 1;
    for(int i = 1; i <= y; i++){
        res *= x;
    }
    return res;
}

int compute_polynomial(int x){
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x,2) + 7 * x - 6; 
}
