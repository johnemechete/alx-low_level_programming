#include "main.h"
/**
* print_last_digit- To prints the last digit of a number.
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
		n = n;
	else
		n = (-1) * n;
	_putchar(n + '0');
	return (n);
}
