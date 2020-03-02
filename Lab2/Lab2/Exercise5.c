#include <stdio.h>

#include "load_file.h"
#include "Exercise1.h"
#include "Exercise2.h"

void TestExercise5()
{
	int* mergeSortArr = load_file("test-1000-4-problem");
	int* insertionSortArr = load_file("test-1000-4-problem");
	int* correctOrderArr = load_file("test-1000-4-solution");

	int size = mergeSortArr[0];

	MergeSort(mergeSortArr, 0, size);
	InsertionSort(insertionSortArr, size + 1);

	int sortedCorrect = 1;
	for (int j = 0, i = 1; j < size + 1; j++, i++)
	{
		//To avoid the size who is in the beginning in the unsorted lists
		if (mergeSortArr[j] == size)
		{
			j++;
		}
		if (insertionSortArr[j] != correctOrderArr[i] || mergeSortArr[j] != correctOrderArr[i])
		{
			sortedCorrect = 0;
		}
		printf("%d\n", insertionSortArr[j]);
	}
	if (sortedCorrect != 0)
	{
		printf("Exercise 5 success!\n");
	}
	else
	{
		printf("Exercise 5 fail!\n");
	}
}
