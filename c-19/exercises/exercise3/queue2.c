#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define STACK_SIZE 100

struct node{
    int data;
    struct node *next;
};

static struct node *head = NULL;
static struct node *tail = NULL;

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(void){
    while(!is_empty()){
        dequeue();
    }
}

bool is_empty(void){
    return head == NULL;
}

bool is_full(void){
    return false;
}

int front(void){
    return head->data;
}

int back(void){
    return tail->data;
}

void enqueue(int i){
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        terminate("Error in push: stack is full.");
    }
    new_node->data = i;
    new_node->next = NULL; 
    
    if(head == NULL){
        head = tail = new_node;
    }else{
        tail->next = new_node;
        tail = new_node;
    }
}

int dequeue(void){
   struct node *old_head;
   int i;

   if(is_empty()){
    terminate("Error in pop: stack is empty.");
   }

   old_head = head;
   i = head->data;
   head = head->next;
   free(old_head);

   return i;
}
