#include "main.h"

/**
* _strncpy - concatenates two strings.
* @dest: the main string
* @src: the string to be added.
* @n: length of index to
* Return: returns a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (index = index; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

