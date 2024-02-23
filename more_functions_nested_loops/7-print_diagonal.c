#include "main.h"

/**
 *print_diagonal - Draws a diagonal line on the terminal
 *followed by a new line and using _putchar
 *@n: Number of times the char \ should be printed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
