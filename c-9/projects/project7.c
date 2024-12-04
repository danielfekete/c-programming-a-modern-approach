/*
* project7.c
* Recursive power function
*/

#include <stdio.h>
#include <ctype.h>

int power(int x, int n);

int main(void){
    int x, n;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Power result:  %d\n",power(x, n));

    return 0;
}

int power(int x, int n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return power(x, n / 2) * power(x, n / 2);
    }
    return x * power(x, n - 1);
}
