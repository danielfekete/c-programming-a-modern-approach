#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
int front(void);
int back(void);
void enqueue(int i);
int dequeue(void);

#endif
