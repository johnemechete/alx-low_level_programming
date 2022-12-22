#include "main.h"

/**
* reverse_array - concatenates two strings.
* @a: the main string
* @n: the string to be added.
* Return: returns a string
*/

void reverse_array(int *a, int n)
{
	int i, j, temp[10000];

	i = n - 1;
	j = 0;
	while (j <= i)
	{
		temp[j] = a[j];
		j++;
	}
	j = 0;
	while (i >= 0)
	{
		a[i] = temp[j];
		i--;
		j++;
	}
}
