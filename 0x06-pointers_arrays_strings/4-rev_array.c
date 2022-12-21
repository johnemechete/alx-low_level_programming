#include "main.h"

/**
* reverse_array - concatenates two strings.
* @a: the main string
* @n: the string to be added.
* Return: returns a string
*/

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
