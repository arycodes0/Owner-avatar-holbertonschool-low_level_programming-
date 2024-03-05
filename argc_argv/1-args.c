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

	printf("%d\n", argc - 1);
	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
