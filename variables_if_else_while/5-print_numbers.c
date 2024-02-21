#include <stdio.h>
/**
 * main - Single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
