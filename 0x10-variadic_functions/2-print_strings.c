#include "variadic_functions.h"

/**
 * print_strings - returns the sum of all its parameters.
 * @n: integers passed to the function
 * @separator: string to be printed between numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = (va_arg(ap, char *));
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if ((i + 1) < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
