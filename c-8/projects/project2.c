/*
* project2.c
* Checks numbers for repeated digits
* Showing how many times each digit appears in the number
*/
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int digit, occurrences[10]={0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }

    printf("Digit: ");
    for(int i = 0; i < 10; i++){
        printf("\t%d",i);
    }
    printf("\n");

    printf("Occurrences: ");
    for(int i = 0; i < 10; i++){
            printf("\t%d",occurrences[i]);
    }
    printf("\n");

    return 0;
}
