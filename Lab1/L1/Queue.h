#include <stdio.h>
#include <stdlib.h>

#define MAX 8

typedef struct QueueT
{
	int Head;
	int Number[MAX];
	int Tail;
} Queue;

//Returns 1 if the key is successfully Enqueued and 0 if its not.
int Enqueue(Queue* queue, int key);

//Returns the key that is at the head of the queue and removes it from the queue, returns -1 if the queue is empty.
int Dequeue(Queue* queue);

