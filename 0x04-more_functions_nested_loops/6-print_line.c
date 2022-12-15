#include "main.h"
/**
* print_line - To print the alphabet
* @n: takes an int value
* Return: return 0 if it is lower case else 1
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
