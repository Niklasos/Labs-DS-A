#include <stdio.h>
#include <stdlib.h>

#include "Exercise2.h"

void Merge(int* arr, int p, int q, int r);

void MergeSort(int* arr, int startIndex, int endIndex);

void Merge(int* arr, int p, int q, int r)
{
	int lengthArr1 = q - p + 1;
	int lengthArr2 = r - q;
	int *arr1 = calloc(lengthArr1, sizeof(int)), *arr2 = calloc(lengthArr2, sizeof(int));

	if (arr1 == NULL || arr2 == NULL)
	{
		return;
	}

	for (int i = 0; i < lengthArr1; i++)
	{
		arr1[i] = arr[p + i];
	}

	for (int i = 0; i < lengthArr2; i++)
	{
		arr2[i] = arr[q + 1 + i];
	}

	int i = 0, j = 0, k = p;

	while (i < lengthArr1 && j < lengthArr2)
	{
		if (arr1[i] <= arr2[j])
		{
			arr[k] = arr1[i];
			i++;
		}
		else
		{
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}

	while (i < lengthArr1)
	{
		arr[k] = arr1[i];
		i++;
		k++;
	}

	while (j < lengthArr2)
	{
		arr[k] = arr2[j];
		j++;
		k++;
	}

	free(arr1);
	free(arr2);
}

void MergeSort(int* arr, int startIndex, int endIndex)
{
	if (startIndex < endIndex)
	{
		int q = startIndex + (endIndex - startIndex) / 2;

		MergeSort(arr, startIndex, q);
		MergeSort(arr, q + 1, endIndex);

		Merge(arr, startIndex, q, endIndex);
	}
}