#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int Enqueue(int* queue, int key);
int Dequeue(int* queue);

int head = 0;
int tail = 0;


int Enqueue(int* queue, int key)
{
	if (tail == MAX)
	{
		tail = 0;

		if (tail == head)
		{
			printf("The queue is full!\n");
			tail = MAX;
			return 0;
		}
	}
	queue[tail] = key;
	tail++;
	return 1;
}

int Dequeue(int* queue)
{
	if (head == tail)
	{
		printf("The queue is empty\n");
		return -1;
	}
	int key = queue[head];
	if (head == MAX)
	{
		head = 0;
	}
	else
	{
		head++;
	}
	return key;
}
