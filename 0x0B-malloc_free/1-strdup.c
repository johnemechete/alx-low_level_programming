#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: holds the size of the array.
 * Return: Return Char pointer or NULL if it fails
 */

char *_strdup(char *str)
{
	char *arr;
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
		;
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		printf("Memory not available");
		return (NULL);
	}
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
