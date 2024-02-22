#include "main.h"

/**
 *_putchar- Printing the word _putchar followed by a \n
 *@char: Holds a character
 *Return: 0 success
 */
int main(void)
{

	int i, lnt;
	char string[] = "_putchar";

	lnt = sizeof(string);

	for (i = 0; i < lnt - 1 ; i++)
		_putchar(string[i]);

	_putchar('\n');


	return (0);
}
