/*
* pun2.c
* Tests wether a number is a prime
*/
#include <stdio.h>

int is_prime(int n){
    if(n <= 1){
        return 0;
    }
    for(int divisor = 2; divisor * divisor <= n; divisor++){
        if(n % divisor == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n)){
        printf("Prime\n");
    }else{
        printf("Not prime\n");
    }

    return 0;
}
