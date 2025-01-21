/*
* project5.c
* A program that adds up its command arguments
*/
#include <stdio.h>
#include <stdlib.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(int argc, char *argv[]){
    int sum = 0;
    for(int i = 1; i < argc; i++){
        sum += atoi(argv[i]);
    }
    printf("Total: %d\n", sum);

    return 0;
}
