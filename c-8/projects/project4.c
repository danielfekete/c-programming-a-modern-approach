/*
* project4.c
* Reverses the series of numbers
*/
#include <stdio.h>
#define N 10
#define LEN (int)(sizeof(a) / sizeof(a[0]))

int main(void){
    int a[N], i;

    printf("Enter %d numbers: ", LEN);
    for(i = 0;i < LEN; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");

    for(i = LEN - 1; i >= 0; i--){
        printf(" %d",a[i]);
    }
    printf("\n");

    return 0;
}
