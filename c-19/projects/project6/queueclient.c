#include <stdio.h>
#include "queueADT.h"

int main() {
    Queue q = create(100);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("Front: %d\n", front(q)); // Output: 10
    printf("Back: %d\n", back(q));   // Output: 30

    printf("Dequeue: %d\n", dequeue(q)); // Output: 10
    printf("Dequeue: %d\n", dequeue(q)); // Output: 20

    enqueue(q, 40);
    printf("Front: %d\n", front(q)); // Output: 30
    printf("Back: %d\n", back(q));   // Output: 40

    destroy(q);
    return 0;
}
