#include "main.h"



/**
 * square - prints a string in reverse
 * @n: integer
 * @x: integer
 * Return: int
 */

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x < n / 2)
		return (square(n, x + 1));
	else if (x > n / 2)
		return (square(n, x - 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion - prints a string in reverse
 * @n: integer
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (square(n, x));
}
