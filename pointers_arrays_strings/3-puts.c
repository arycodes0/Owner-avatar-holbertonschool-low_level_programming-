#include "main.h"

/**
 *_puts- Prints a string
 *@str: String to print
 *Return: 0
 */

void _puts(char *str)
{
	while (*str)

		_putchar(*str++);
	_putchar('\n');
	return;
}
