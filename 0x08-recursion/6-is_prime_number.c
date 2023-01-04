#include "main.h"



/**
 * prime - returns 1 if the input integer is a prime number
 * @n: int
 * @s: int
 * Return: return i if it is a prime else 0
 */

int prime(int n, int s)
{
	if (n == s)
		return (1);
	else if ((n % s) == 0)
		return (0);
	else
		return (prime(n, s + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int
 * Return: return i if it is a prime else 0
 */

int is_prime_number(int n)
{
	int s = 2;

	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime(n, s));
}

