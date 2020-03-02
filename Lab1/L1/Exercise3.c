#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int Push(int* stack, int key);
int Pop(int* stack);
int StackEmpty();

int top = -1;


int StackEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}

int Push(int* stack, int key)
{
	if (top + 1 == MAX)
	{
		printf("Stack is full!\n");
		return 0;
	}
	top++;
	stack[top] = key;
	return 1;
}

int Pop(int* stack)
{
	if (StackEmpty() == 1)
	{
		printf("Stack is empty\n");
		return NULL;
	}
	top--;
	return stack[top + 1];
}

