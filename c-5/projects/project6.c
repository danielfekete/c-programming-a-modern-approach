/*
* Project 6
* A program that checks wether the upc entered by the user is valid or not
*/

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, total;

    printf("Enter the UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    second_sum = d2 + d4 + d6 + d8 + d10;
    total = 3 * first_sum + second_sum;

    if(d12 == (9 - ((total - 1) % 10))){
        printf("VALID\n");
    }else{
        printf("NOT VALID\n");
    }

    return 0;
}
