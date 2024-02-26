#include "main.h"

/**
 *swap_int- Function that swaps the value of two integers
 *@a: Pointer to the int
 *@b: Pointer to the int
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
