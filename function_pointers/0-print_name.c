#include "function_pointers.h"

/**
 * print_name - Printing a name
 * @name: Name to print
 * @f: Pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
