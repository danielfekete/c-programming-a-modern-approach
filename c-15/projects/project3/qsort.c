/*
* average.c
* Computes pairwise averages of three numbers
*/
#include <stdio.h>
#include "quicksort.h"

#define N 10

int main(void){
    int a[N], i;

    printf("Enter numbers to be sorted: ");
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, i, N - 1);

    return 0;
}

