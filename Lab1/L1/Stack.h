#include <stdio.h>
#include <stdlib.h>

#define MAX 8

struct Stack
{
	int top;
	int Number[MAX];
};


//Returns 0 if the queue is full and the key cant be inserted. Returns 1 if the key was successfully inserted
int Push(struct Stack* stack, int key);

//Returns the number at the top of the stack and removes it from the stack
int Pop(struct Stack* stack);

//Returns 0 if the stack isnt empty, Returns 1 if it is.
int StackEmpty(struct Stack* stack);