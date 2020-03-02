#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

int Enqueue(Queue* queue, int key);
int Dequeue(Queue* queue);


int Enqueue(Queue* queue, int key)
{
	if (queue->Tail == MAX)
	{
		queue->Tail = 0;

		if (queue->Tail == queue->Head)
		{
			printf("The queue is full!\n");
			queue->Tail = MAX;
			return 0;
		}
	}
	queue->Number[queue->Tail] = key;
	queue->Tail++;
	return 1;
}

int Dequeue(Queue* queue)
{
	if (queue->Head == queue->Tail)
	{
		printf("The queue is empty\n");
		return -1;
	}
	int key = queue->Number[queue->Head];
	if (queue->Head == MAX)
	{
		queue->Head = 0;
	}
	else
	{
		queue->Head++;
	}
	return key;
}