#include "main.h"

/**
* print_rev - that prints a string in reverse,
* followed by a new line, to stdout
* @s: points to a string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while  (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');

}
