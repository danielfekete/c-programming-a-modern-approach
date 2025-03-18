#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

Queue create(int size);
void destroy(Queue q);
void make_empty(Queue q);
bool is_empty(Queue q);
bool is_full(Queue q);
Item front(Queue q);
Item back(Queue q);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);

#endif
