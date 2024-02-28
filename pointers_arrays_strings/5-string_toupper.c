#include "main.h"

/**
 *string_toupper - Changes all lowercase to uppercase
 *@n: Pointer to a string
 *Return: Pointer to the modified string
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
