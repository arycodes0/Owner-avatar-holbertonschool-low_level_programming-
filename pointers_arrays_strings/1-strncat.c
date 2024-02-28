#include "main.h"

/**
 *_strncat- Concatenates two strings
 *@dest: Destination string
 *@src: Source string
 *@n: Number of bytes to concatenate
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
