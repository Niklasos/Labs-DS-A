#include <stdio.h>
#include <stdlib.h>

#include "Exercise1.h"
#include "Exercise2.h"

#define TESTS 3
#define ARRSIZE 6

void TestExercise4();

void TestExercise4()
{
	int testMergeSort[TESTS][ARRSIZE] = { 
		{ 3, 1, 5, 10, 8, 7 },
		{ 5, 2, 9, 6, 1, 2 },
		{ 9, 5, 0, 4, 0, 5}
	};

	int testInsertionSort[TESTS][ARRSIZE] = {
		{ 3, 1, 5, 10, 8, 7 },
		{ 5, 2, 9, 6, 1, 2 },
		{ 9, 5, 0, 4, 0, 5}
	};

	int expectedOutput[TESTS][ARRSIZE] = {
		{ 1, 3, 5, 7, 8, 10}, 
		{ 1, 2, 2, 5, 6, 9},
		{ 0, 0, 4, 5, 5, 9}
	};

	int insertionSorted = 1, mergeSorted = 1;

	for (int i = 0; i < TESTS; i++)
	{
		MergeSort(testMergeSort[i], 0, ARRSIZE - 1);
		InsertionSort(testInsertionSort[i], ARRSIZE);

		for (int j = 0; j < ARRSIZE; j++)
		{
			if (testInsertionSort[i][j] != expectedOutput[i][j])
			{
				insertionSorted = 0;
			}

			if (testMergeSort[i][j] != expectedOutput[i][j])
			{
				mergeSorted = 0;
			}
		}
	}

	if (insertionSorted == 0)
	{
		printf("Insertion sort failed\n");
	}
	else
	{
		printf("Insertion sort worked\n");
	}
	if (mergeSorted == 0)
	{
		printf("Merge sort failed\n");
	}
	else
	{
		printf("Merge sort worked\n");
	}
}