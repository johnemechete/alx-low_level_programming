#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: holds the size of the array.
 * @c: holds the value in the array
 * Return: Return Char pointer or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		printf("Memory not available");
		return (NULL);
	}
	if (size == 0)
		return (NULL);
	for (i = 0; i  < size; i++)
		arr[i] = c;
	return (arr);
}
