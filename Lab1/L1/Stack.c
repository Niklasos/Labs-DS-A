#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

int Push(struct Stack* stack, int key);
int Pop(struct Stack* stack);
int StackEmpty(struct Stack* stack);



int StackEmpty(struct Stack* stack)
{
	if (stack->top == -1)
	{
		return 1;
	}
	return 0;
}

int Push(struct Stack* stack, int key)
{
	if (stack->top + 1 == MAX)
	{
		printf("Stack is full!\n");
		return 0;
	}
	stack->top++;
	stack->Number[stack->top] = key;
	return 1;
}

int Pop(struct Stack* stack)
{
	if (StackEmpty(stack) == 1)
	{
		printf("Stack is empty\n");
		return 0;
	}
	stack->top--;
	return stack->Number[stack->top + 1];
}

