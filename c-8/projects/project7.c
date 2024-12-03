/*
* project7.c
* Program that read a 5*5 array of integers
* then prints the ro sums and the
* column sums
*/
#include <stdio.h>

#define N 5
int main(void){
    int num;
    int row_sums[N] = {0}, column_sums[N] = {0};

    for(int row = 0; row < N; row++){
        printf("Enter row %d: ",row + 1);
        for(int col = 0; col < N; col++){
            scanf("%d", &num);
            column_sums[col] += num;
            row_sums[row] += num;
        }
    }

    printf("Row totals:");
    for(int i = 0; i < N; i++){
        printf(" %d",row_sums[i]);
    }

    printf("\nColumn totals:");
    for(int i = 0; i < N; i++){
        printf(" %d",column_sums[i]);
    }
    printf("\n");

    return 0;
}
