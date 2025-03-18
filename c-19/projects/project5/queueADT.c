#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define QUEUE_SIZE 100

struct queue_type{
    Item contents[QUEUE_SIZE];
    int head;
    int tail;
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
    q->head = 0;
    q->tail = 0;

    return q;
}

void destroy(Queue q){
    free(q);
}

void make_empty(Queue q){
    q->head = 0;
    q->tail = 0;
    q->size = 0;
}

bool is_empty(Queue q){
    return q->size == 0;
}

bool is_full(Queue q){
    return q->size == QUEUE_SIZE;
}

Item front(Queue q){
    if(is_empty(q)){
        terminate("Error in front: queue is empty.");
    }
    return q->contents[q->head];
}

Item back(Queue q){
    if(is_empty(q)){
        terminate("Error in back: queue is empty.");
    }
    return q->contents[(q->tail - 1 + QUEUE_SIZE) % QUEUE_SIZE];
}

void enqueue(Queue q, Item i){
    if(is_full(q)){
        terminate("Error in enqueue: queue is full.");
    }
    q->contents[q->tail] = i;
    q->tail = (q->tail + 1) % QUEUE_SIZE;
    q->size++;
}

Item dequeue(Queue q){
    if(is_empty(q)){
        terminate("Error in dequeue: queue is empty.");
    }
    Item i =q->contents[q->head];
    q->head = (q->head + 1) % QUEUE_SIZE;
    q->size--;
    return i;
}



