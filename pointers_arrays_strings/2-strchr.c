#include "main.h"

/**
 * *_strchr- Function that locates a character in a string
 *@s: String
 *@c: Character
 *Return: s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
