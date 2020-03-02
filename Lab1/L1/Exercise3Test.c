#include <stdio.h>
#include <stdlib.h>

#include "Exercise3.h"

int TestStack();

#define MAX 10


int TestStack()
{
	int personalNumber[8] = { 1, 9, 9, 5, 0, 4, 0, 5 }, resultArr[8] = { 5, 0, 4, 0, 5, 9, 9, 1 };
	int stack[MAX], correct = 1;
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
		printf("Test ran with an expected result!");
	}
	else
	{
		printf("Test failed!");
	}
}