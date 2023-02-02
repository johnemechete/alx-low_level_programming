#include "main.h"

/**
 * len - Returns the length of a string.
 * @c: Holds the string
 *
 * Return: the length of a string;
 */

int len(const char *c)
{
	int l = 0;

	while (*(c + l) != '\0')
		l++;
	return (l);
}

/**
 * pow - Returns the power of a number;
 * @n: base
 * @e: power
 *
 * Return:  the converted number, or 0
 */

int power(int n, int e)
{
	int i, sum = 1;

	while (i < e)
	{
		sum *= n;
		i++;
	}

	return (sum);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int length, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = len(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
}

