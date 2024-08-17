#ifndef QUEUE_H
#define QUEUE_H

#define MAX 10 

typedef struct queue {
    int arr[MAX];
    int i;
} queue;

void push(queue *q, int el);
int pop(queue *q);

#endif
