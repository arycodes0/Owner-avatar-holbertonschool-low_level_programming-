#include "main.h"

/**
 *_isalpha- Checking for alphabetic char
 *@c: Receives an int
 *Return: 1 if c = an upper or lower case letter, 0 if otherwise
 *@c: holds an int
 */
int _isalpha(int c)
{
	c = isalpha(c);
	if (c != 0)
		return (1);
	else
		return (0);
}
