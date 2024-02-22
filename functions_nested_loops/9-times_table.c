#include "main.h"

/**
 *times_table- Printing the 9 times table starting with 0
 */
void times_table(void)
{
	int r, c;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			if (c == 0)
			{
				_putchar('0');
				continue;
			}
			if ((r * c) >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r * c) / 10 + '0');
				_putchar((r * c) % 10 + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((r * c) + '0');
			}
		}
		_putchar('\n');
	}
}
