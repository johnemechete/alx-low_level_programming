#include "main.h"
/**
* print_diagonal - To print the alphabet
* @n: takes an int value
* Return: return 0 if it is lower case else 1
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (i > 1)
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
