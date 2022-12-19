#include "main.h"

/**
* print_array - returns the length of a string.
* @a: points to a char datatype
* @n: size of array
* Return: the length of the string
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
			printf(", ");
	}
	printf("\n");
}
