#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include "Load_file.h"

int* load_file(const char* fName)
{
	int input[MAX_NUM_ELEMENTS];
	int num_elements = 0;

	FILE* file = fopen(fName, "r");
	if (file == NULL) {
		printf("Error: file does not exist. Exiting...\n");
		exit(1);
	}
	char line[256];
	while (fgets(line, sizeof(line), file)) {
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
		exit(1);
	}
	data[0] = num_elements;
	return data;
}