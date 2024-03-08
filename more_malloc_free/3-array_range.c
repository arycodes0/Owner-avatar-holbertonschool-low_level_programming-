#include "main.h"
#include <stdlib.h>

/**
 * array_range - create a range array from a range array of integers
 * @min: smallest int in array
 * @max: largest int in array
 * Return: the pointer to the newly created array, NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		array[i] = min + i;
	return (array);
}
