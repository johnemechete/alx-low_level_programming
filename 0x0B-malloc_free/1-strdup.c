#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	arr = malloc(size * sizeof(*str));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
