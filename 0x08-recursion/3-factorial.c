#include "main.h"

/**
 * factorial - prints a string in reverse
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n <= 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
