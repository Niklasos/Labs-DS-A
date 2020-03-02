#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"
#include "Queue.h"

#define MAX 8


int TestQueue()
{

	int pN[MAX] = { 1, 9, 9, 5, 0, 4, 0, 5 };
	int correct = 1; 
	Queue* queue = malloc(sizeof(Queue));
	if (queue != NULL)
	{
		queue->Head = 0;
		queue->Tail = 0;
	}
	for (int i = 0; i < 8; i++)
	{
		Enqueue(queue, pN[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		int result = Dequeue(queue);
		if (result != pN[i])
		{
			correct = 0;
			continue;
		}
	}
	if (correct == 1)
	{
		printf("Queue test ran succesfully!\n");
		return 1;
	}
	else
	{
		printf("Queue test failed!\n");
		return 0;
	}
}

int TestStack()
{
	int personalNumber[8] = { 1, 9, 9, 5, 0, 4, 0, 5 }, resultArr[8] = { 5, 0, 4, 0, 5, 9, 9, 1 };
	int correct = 1;
	struct Stack* stack = malloc(sizeof(struct Stack));
	if (stack != NULL)
	{
		stack->top = -1;
	}
	for (int i = 0; i < 8; i++)
	{
		Push(stack, personalNumber[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		int result = Pop(stack);
		if (result != resultArr[i])
		{
			correct = 0;
			continue;
		}
	}
	if (correct == 1)
	{
		printf("Stack test ran succesfully!\n");
	}
	else
	{
		printf("Stack test failed!\n");
	}
	return 1;
}