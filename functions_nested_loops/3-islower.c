#include "main.h"

/**
 *_islower- Checking for lowercase char
 *@c: Receives an int
 *Return: 0 success
 */

int _islower(int c)
{
	c = islower(c);
	if (c != 0)
		return (1);
	else
		return (0);
}
