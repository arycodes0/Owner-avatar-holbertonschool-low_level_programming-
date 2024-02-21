#include <stdio.h>

/**
 *main- Printing the alp in lowercase using putchar.
 *Return: 0 success
 */

int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}

