#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: the main string
* @src: the string to be added.
* Return: returns a string
*/

char *_strcat(char *dest, char *src)
{
	int i, index;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[i + index] = src[index];
	}
	dest[i + index] = '\0';

	return (dest);
}
