#include "main.h"

/**
 *print_triangle- Prints a triangle using char #
 *and using _putchar
 *@size: The size of the triangle
 */
void print_triangle(int size)
{
	int a, b, c = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < c)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			c--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
