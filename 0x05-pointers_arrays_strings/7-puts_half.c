#include "main.h"

/**
* puts_half - returns the length of a string.
* @str: points to a char datatype
* Return: the length of the string
*/

void puts_half(char *str)
{
	int len, half;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (half = ((len - 1) / 2) + 1; half < len; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
