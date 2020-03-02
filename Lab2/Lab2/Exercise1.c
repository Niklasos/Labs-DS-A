#include <stdio.h>
#include <stdlib.h>

#include "Exercise1.h"

void InsertionSort(int* arr, int elements);

void InsertionSort(int* arr, int elements)
{
	int j = 0, key = 0;
	for (int i = 1; i < elements; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	return 1;
}