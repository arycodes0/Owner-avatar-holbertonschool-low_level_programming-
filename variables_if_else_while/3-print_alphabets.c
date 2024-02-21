#include <stdio.h>

/**
 *main- Printing the alphabet in lowercase and uppercase using putchar.
 *Return: 0 success
 */

int main(void)
{
	char alp;
	char ALP;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	for (ALP = 'A' ; ALP <= 'Z' ; ALP++)
	{
		putchar(ALP);
	}
	putchar('\n');

	return (0);
}


