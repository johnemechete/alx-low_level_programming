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
	int len, mod, zer, zero = 48;
	int div, one = 1;
	int start = zer = 0;
	int place = mod = 10;

	if (n < 0)
	{
		neg = one;
		n = n * -one;
	}
	while (place >= zer)
	{
		div = power(mod, place);
		len = ((n / div) % mod);
		if (len == zer && start == zer)
		{
			place--;
		}
		else if (len != one && start == zer)
		{
			start = one;
			if (neg == one)
				_putchar('-');
			_putchar(zero + len);
			place--;
		}
		else
		{
			_putchar(zero + len);
			place--;
		}
	}
	if (len == zer && div == one)
	{
		_putchar(zero);
	}
}

