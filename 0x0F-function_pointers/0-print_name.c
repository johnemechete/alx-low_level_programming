#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Holds the name
 * @f: Point to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
