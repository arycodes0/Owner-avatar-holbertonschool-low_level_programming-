#include <stdlib.h>
#include "main.h"

/**
 *create_array -Create an array from a list of integers
 *@size: Size of the array
 *@c: The array to be created
 *Return: The new array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
