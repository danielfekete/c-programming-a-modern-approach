/*
* Project 5
* A program that asks a user to enter a number, then prints all
* even squares
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i * i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i * i);
        }
    }

    return 0;
}
