#include <stdio.h>
/**
 * main - Single digit numbers, using putchar, and
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
