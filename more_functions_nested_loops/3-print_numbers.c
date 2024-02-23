#include "main.h"

/**
 *print_numbers - Prints the numbers from 0 to 9
 *followed by a new line and using _putchar
 */
void print_numbers(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		_putchar(numbers);
		if (numbers == '9')
		{
			break;
		}
		numbers++;
	}
	_putchar('\n');
}
