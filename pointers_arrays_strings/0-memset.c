#include "main.h"

/**
 * *_memset- Function that fills memory wih a constant byte
 *@s: Pointer to return
 *@b: Constant byte
 *@n: Bytes that contain the memory
 *Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
