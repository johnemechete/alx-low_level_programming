#include <stdio.h>
/**
* main - To print the alphabet
* Description: takes an int value
* Return: return 0 if it is lower case else 1
*/

int main(void)
{
	unsigned long int n, i;

	n = 612852475143;
	i = 2;

	while (n != i)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			i++;
		}
	}

	printf("%li\n", n);
	return (0);
}
