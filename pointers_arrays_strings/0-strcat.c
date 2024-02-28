#include "main.h"

/**
 * *_strcat- Concatenates two strings
 * @dest: Destination str to append by source
 * @src: Source str to append to test
 * Return: & of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
