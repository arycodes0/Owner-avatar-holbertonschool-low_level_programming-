#include <stdio.h>
/**
 * main - Alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
