#include "main.h"
/**
* print_sign- To print the sign
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
