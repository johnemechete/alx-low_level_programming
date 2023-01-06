#include "main.h"

/**
* _strncat - concatenates two strings.
* @dest: the main string
* @src: the string to be added.
* @n:length of the string
* Return: returns a string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, index;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[i + index] = src[index];
	}
	dest[i + index] = '\0';

	return (dest);
}
