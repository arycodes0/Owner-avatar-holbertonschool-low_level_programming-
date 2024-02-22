#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase, followed by a new line
 * Return: 0 success
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
