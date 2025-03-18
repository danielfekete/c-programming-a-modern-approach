#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int tail = 0;
static int head = 0;
static int n = 0;

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(void){
    head = 0;
    tail = 0;
    n = 0;
}

bool is_empty(void){
    return n == 0;
}

bool is_full(void){
    return n == STACK_SIZE;
}

void enqueue(int i){
    if(is_full()){
        terminate("Error in push: stack is full.");
    }
    contents[tail] = i;
    tail++;
    n++;
}

int dequeue(void){
    if(is_empty()){
        terminate("Error in pop: stack is empty.");
    }
    int value = contents[head];
    head++;
    n--;
}
