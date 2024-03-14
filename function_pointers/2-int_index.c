#include "function_pointers.h"

/**
 *int_index - Function that searches for an int
 *@array: Array of elements
 *@size: The number of elements in the array
 *@cmp: Pointer to the function to be used to compare values
 *Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (s < size)
			{
				if (cmp(array[s]))
					return (s);
				s++;
			}
		}

	}
	return (-1);
}
