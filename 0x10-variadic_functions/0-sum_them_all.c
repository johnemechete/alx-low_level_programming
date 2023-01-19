#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: holds the value of the first argument
 * Return: 0 if n equals to 0 else the sum of argument
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	return (sum);
}
