#include "main.h"

/**
 * *_memcpy- Function that copies a memory area
 *@dest: Final destination
 *@src: Source
 *@n: The memory to copy
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
