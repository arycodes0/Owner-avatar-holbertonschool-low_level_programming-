#include <stdio.h>
/**
 * main - Alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	char lowalpha = 'a';
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (lowalpha <= 'f')
	{
		putchar(lowalpha);
		lowalpha++;
	}
	putchar('\n');
	return (0);
}
