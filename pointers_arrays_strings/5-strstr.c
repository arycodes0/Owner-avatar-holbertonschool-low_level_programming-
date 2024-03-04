#include "main.h"

/**
 *_strstr - Locates a substring
 *@haystack: Input string to search in
 *@needle: Input string to locate in haystack
 * Return: Pointer to the beginning of the located substring, or
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
