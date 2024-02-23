#include "main.h"

/**
 *main - Prints numbers from 1 to 100, replacing multiples of 3
 *with Fizz, and 5 with Buzz, and multiples having both 3 and 5
 *replace with FizzBuzz
 *Return: 0 success
 */
int main(void)

{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("Buzz\n");
	return (0);
}
