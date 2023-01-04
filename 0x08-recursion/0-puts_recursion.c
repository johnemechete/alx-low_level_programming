#include "main.h"

/**
* _puts_recursion -  prints a string, followed by a new line.
* @s: hold's the string.
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s + 0));
		_puts_recursion(s + 1);
	}
}
