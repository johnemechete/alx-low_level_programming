#include "main.h"

/**
* puts2 - that prints a string in reverse,
* followed by a new line, to stdout
* @str: points to a string
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i != 0)
			i++;
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
