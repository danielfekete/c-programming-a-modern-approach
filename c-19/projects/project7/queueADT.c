#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node{
    Item data;
    struct node *next;
};

struct queue_type{
    struct node *head;
    struct node *tail;
    int size;
};

static void terminate(const char *message){
    printf("%s\n",message);
    exit(EXIT_FAILURE);
}
Queue create(void){
    Queue q = malloc(sizeof(struct queue_type));
    if(q == NULL){
        terminate("Error in create: couldn't create the queue.");
    }
    q->head = q->tail = NULL;
    q->size = 0;

    return q;
}

void destroy(Queue q){
    make_empty(q);
    free(q);
}

void make_empty(Queue q){
    struct node *p = q->head;
    while(p != NULL){
        struct node *np = p->next;
        free(p);
        p = np;
    }
    q->head = q->tail = NULL;
    q->size = 0;
}

bool is_empty(Queue q){
    return q->size == 0;
}

bool is_full(Queue q){
    return false;
}

Item front(Queue q){
    if(is_empty(q)){
        terminate("Error in front: queue is empty.");
    }
    return q->head->data;
}

Item back(Queue q){
    if(is_empty(q)){
        terminate("Error in back: queue is empty.");
    }
    return q->tail->data;
}

void enqueue(Queue q, Item i){
    if(is_full(q)){
        terminate("Error in enqueue: queue is full.");
    }
    struct node *node = malloc(sizeof(struct node));
    if(node == NULL){
        terminate("Error in enqueue: queue is full.");
    }
    node->data = i;
    node->next = NULL;
    if(q->size == 0){
        q->tail = q->head = node;
    }else{
        q->tail->next = node;
        q->tail = node;
    }
    q->size++;
}

Item dequeue(Queue q){
    if(is_empty(q)){
        terminate("Error in dequeue: queue is empty.");
    }

    struct node *old_head = q->head;
    Item i = old_head->data;
    q->head = old_head->next;
    free(old_head);

    q->size--;
    
    return i;
}



