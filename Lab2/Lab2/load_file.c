#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include "load_file.h"

int* load_file(const char* fName)
{
	int* input = malloc(sizeof(int) * MAX_NUM_ELEMENTS);
	if (input == NULL)
	{
		printf("Couldn't allocate memory. Exiting...\n");

		exit(1);
	}
	//int input[MAX_NUM_ELEMENTS];
	int num_elements = 0;

	FILE* file = fopen(fName, "r");
	if (file == NULL) {
		printf("Error: file does not exist. Exiting...\n");
		exit(1);
	}
	char line[256];
	while (fgets(line, sizeof(line), file)) {
		if (input == NULL)
		{
			exit(1);
		}
		input[num_elements++] = atoi(line);
		//printf("%d\n", atoi(line));
	}
	fclose(file);

	int* data = (int*)malloc((num_elements + 1) * sizeof(int));
	for (int i = 1; i <= num_elements; i++)
	{
		data[i] = input[i - 1];
	}
	if (data == NULL)
	{
		printf("Couldn't allocate memory. Exiting...\n");
		exit(1);
	}
	data[0] = num_elements;
	return data;
}
