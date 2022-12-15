#include "main.h"
/**
* print_most_numbers - To print the alphabet
* Return: return 0 if it is lower case else 1
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i != '2' || i != '4')
			_putchar(i);
	_putchar('\n');
}
