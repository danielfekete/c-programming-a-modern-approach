#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type * Queue;

Queue create(void);
void destroy(Queue q);
void make_empty(Queue q);
bool is_empty(Queue q);
bool is_full(Queue q);
int front(Queue q);
int back(Queue q);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);

#endif
