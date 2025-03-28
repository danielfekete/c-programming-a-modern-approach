#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100

struct stack_type{
    Item contents[STACK_SIZE];
    int top;
};

void terminate(char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(void){
    Stack s = malloc(sizeof(struct stack_type));
    if(s == NULL){
        terminate("Error in create: couldn't create the stack.");
    }
    s->top = 0;
    return s;
}

void destroy(Stack s){
    free(s);
}

void make_empty(Stack s){
    s->top = 0;
}

bool is_empty(Stack s){
    return s->top == 0;
}

bool is_full(Stack s){
    return s->top == STACK_SIZE;
}

void push(Stack s, Item i){
    if(is_full(s)){
        terminate("Error in push: stack is full");
    }
    s->contents[s->top++] = i;
}

Item pop(Stack s){
    if(is_empty(s)){
        terminate("Error in pop: stack is empty");
    }
    return s->contents[--s->top];
}


