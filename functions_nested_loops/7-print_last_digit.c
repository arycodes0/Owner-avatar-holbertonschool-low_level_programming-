#include "main.h"

/**
 *print_last_digit- Printing the last digit of a number
 *@n: An int
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	_putchar(abs(n) + '0');

	return (abs(n));
}
