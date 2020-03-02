#include <stdio.h>
#include <stdlib.h>

typedef struct IntArray_t {
	int* arr;
	int elements;
} IntArray;

//Takes a pointer arr to an int array and the number of elements in that array.
void InsertionSort(int * arr, int elements);