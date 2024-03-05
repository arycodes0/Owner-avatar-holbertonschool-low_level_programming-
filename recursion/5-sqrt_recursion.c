#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (calculate_sqrt(n, 1));
}
/**
 * calculate_sqrt - Auxiliary function to calculate square root
 * @n: Number to find the square root of
 * @i: Iterator for calculating square root
 * Return: The square root of n
 */
int calculate_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (calculate_sqrt(n, i + 1));
}
