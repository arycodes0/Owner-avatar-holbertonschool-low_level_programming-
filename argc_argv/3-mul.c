#include <stdio.h>
#include <stdlib.h>

/**
 *main -Main function
 *@argc: Number of arguments
 *@argv: Number of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);
	return (0);
}

