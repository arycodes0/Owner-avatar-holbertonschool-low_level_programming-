#include "main.h"

/**
 *print_most_numbers - Prints the numbers from 0 to 9
 *avoiding 2 and 4, followed by a new line
 *and using _putchar
 */
void print_most_numbers(void)
{
	int mostnumbers = '0';

	for (mostnumbers = '0'; mostnumbers <= '9'; mostnumbers++)
	{
		if (mostnumbers != '2' && mostnumbers != '4')
		{
			_putchar(mostnumbers);
		}

	}
	_putchar('\n');
}
