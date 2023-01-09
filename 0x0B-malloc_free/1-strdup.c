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

	empt = "";
	if (str == *empt)
	{
		arr = malloc(sizeof(char));
		return (arr);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	arr = malloc((1 + size) * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
