/*
* project4.c
* A program that echoes its command line arguments in reverse order
*/
#include <stdio.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(int argc, char *argv[]){
    for(int i = argc - 1; i > 0; i--){
        printf(" %s", argv[i]);
    }
    printf("\n");

    return 0;
}
