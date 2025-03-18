#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node{
    Item data;
    struct node *next;
};

struct stack_type{
    struct node *top;
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
    s->top = NULL;
    return s;
}

void destroy(Stack s){
    make_empty(s);
    free(s);
}

void make_empty(Stack s){
    // while(s->top){
    //     pop(s);
    // }
    struct node *current = s->top;
    while(current != NULL){
        struct node *next = current->next;
        free(current);
        current = next;
    }
    s->top = NULL;
}

bool is_empty(Stack s){
    return s->top == NULL;
}

bool is_full(Stack s){
    return false;
}

void push(Stack s, Item i){
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        terminate("Error in push: couldn't create a new item.");
    }
    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

Item pop(Stack s){
    if(is_empty(s)){
        terminate("Error in pop: stack is empty");
    }
    struct node *old_top = s->top;
    Item i = old_top->data;

    s->top = old_top->next;
    free(old_top);

    return i;
}


