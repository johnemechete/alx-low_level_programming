#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: the main string
* @src:
* Return: returns a string
*/

char *_strcat(char *dest, char *src)
{
	int i, index;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (index = 0; src[index] != '\0'; index++, i++)
	{
		dest[i + 1] = src[index];
	}
	dest[i + 1] = '\0';

	return (dest);
}

