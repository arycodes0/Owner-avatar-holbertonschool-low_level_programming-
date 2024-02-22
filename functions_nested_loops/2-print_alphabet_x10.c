#include "main.h"

/**
 *print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *@char: Holds a character
 *Return: 0 success
 */

void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
