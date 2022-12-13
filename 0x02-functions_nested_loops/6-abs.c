#include "main.h"
/**
* _abs - To print the absolute value
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

int _abs(int n)
{
	if (n > 0)
	{

		_putchar('n');
		return (1);
	}
	else if (n < 0)
	{
		n = (-1) * n;
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
