#include "variadic_functions.h"

/**
 * print_numbers - returns the sum of all its parameters.
 * @n: integers passed to the function
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int) + '0');
			if ((i + 1) != n)
			{
				printf("%s", separator);
				printf(" ");
			}
		}
		printf("\n");
	}
}
