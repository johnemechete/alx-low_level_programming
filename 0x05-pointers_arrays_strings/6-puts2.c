#include "main.h"

/**
* puts2 - that prints a string in reverse,
* followed by a new line, to stdout
* @str: points to a string
*/

void puts2(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;


	for (i = 0; i <= len; i++)
	{
		if (i != 0)
			i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
