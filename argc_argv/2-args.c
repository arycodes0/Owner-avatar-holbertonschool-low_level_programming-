#include <stdio.h>

/**
 *main -Main function
 *@argc: Number of arguments
 *@argv: Number of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

