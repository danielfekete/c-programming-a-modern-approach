/*
* Project 2
* A program that prints a table of squares
* pauses after every 24 squares
*/

#include <stdio.h>

int main(void){

    int n, i;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d",&n);

    getchar();

    for(i = 1; i <= n; i++){
        printf("%d\t%d\n", i, i * i);

        if(i % 24 == 0){
            printf("Press enter to continue...");
            getchar();
        }
    }

    return 0;
}
