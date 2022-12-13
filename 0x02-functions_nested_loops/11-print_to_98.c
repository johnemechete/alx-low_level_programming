#include "main.h"
#include <stdio.h>

/**
* print_to_98 - To  prints all natural numbers from n to 98,
* followed by a new line
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			--n;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	printf("\n");
}
