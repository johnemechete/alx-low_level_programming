#include <math.h>
#include "main.h"

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int  power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * print_number - prints an integer
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	int neg = 0;
	int len, mod, zero = 48;
	int div, one = 1;
	int start = 0;
	int place = mod = 10;

	if (n < 0)
	{
		neg = one;
		n = n * -one;
	}
	while (place >= 0)
	{
		div = power(mod, place);
		len = ((n / div) % mod);
		if (len == 0 && start == 0)
		{
			place--;
		}
		else if (len != 0 && start == 0)
		{
			start = 1;
			if (neg == 1)
				_putchar('-');
			_putchar('0' + len);
			place--;
		}
		else
		{
			_putchar('0' + len);
			place--;
		}
	}
	if (len == 0 && div == 1)
	{
		_putchar(zero);
	}
}

