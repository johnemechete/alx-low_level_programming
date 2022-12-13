#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

void times_table(void)
{
	int a, b, c, d, f;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			d = c / 10;
			f = c % 10;
			if (d != 0)
				_putchar(d + '0');
			_putchar(f + '0');
			if (d != 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
