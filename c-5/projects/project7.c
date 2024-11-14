/*
* Project 7
* A program that finds the largest and smallest five integer entered by the user
*/

#include <stdio.h>
int main(void){
    int n1, n2, n3, n4, max1, min1, max2, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    min1 = n1;
    max1 = n2;

    if(n1 > n2){
        min1 = n2;
        max1 = n1;
    }

    min2 = n3;
    max2 = n4;

    if(n3 > n4){
        min2 = n4;
        max2 = n3;
    }
    
    printf("Largest: %d\n", max1 > max2 ? max1 : max2);
    printf("Smallest: %d\n", min1 < min2 ? min1 : min2);

    return 0;
}
