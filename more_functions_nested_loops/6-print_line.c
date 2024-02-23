#include "main.h"

/**
 *print_line - Prints a str8 line in the terminal
 *followed by a new line and using _putchar
 *if n the number of times the char _ should be printed
 *if n is 0 ir less, only print \n
 *@n: Number of times the line should be printed
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
