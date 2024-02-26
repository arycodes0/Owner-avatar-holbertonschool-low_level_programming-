#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev- Function that prints a string in reverse
 *@s: String to print
 *Return: void
 */

void print_rev(char *s)
{
	if (!s)
	{
		return;
	}
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
		i++;
		j++;
	}
}
