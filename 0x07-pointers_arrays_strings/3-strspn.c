#include "main.h"

/**
 * _strspn - fills memory with a constant byte
 * @s: string array
 * @accept: number of bytes
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
			if (*(accept + i) == *(s + j))
				return (j + 1);
	}
	return (0);
}
