#include "main.h"

/**
 *jack_bauer- Prints every minute of the day
 */
void jack_bauer(void)
{
	int h, m, F, L, Fm, Lm;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			F = h / 10;
			L = h % 10;
			Fm = m / 10;
			Lm = m % 10;

			_putchar(F + '0');
			_putchar(L + '0');
			_putchar(58);
			_putchar(Fm + '0');
			_putchar(Lm + '0');
			_putchar('\n');
		}
	}
}
