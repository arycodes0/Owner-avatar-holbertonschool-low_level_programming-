#include <stdio.h>
#include "main.h"

/**
 *main -Main function
 *@argc: Number of arguments
 *@argv: Number of arguments
 *Return: Number of arguments
 */

int main(int argc, char *argv[])
{
	(void) argv;
	++argc;
	printf("%s\n", argv[0]);
	return (0);
}
