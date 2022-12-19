#include "main.h"

/**
* _strcpy - returns the length of a string.
* @src: points to a char datatype
* @dest: Point to the buffer
* Return: the length of the string
*/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = src[len];

	return (dest);
}
