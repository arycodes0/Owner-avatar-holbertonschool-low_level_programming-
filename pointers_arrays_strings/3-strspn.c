#include "main.h"

/**
 *_strspn-	Function that gets the lenght of a prefix substring
 *@s: Contains the bytes
 *@accept: Contains the bytes
 *Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	}
	return (i);

}
