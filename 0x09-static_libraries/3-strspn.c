#include "main.h"

/**
 * _strspn - fills memory with a constant byte
 * @s: string array
 * @accept: number of bytes
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		if (*(accept + j) == '\0')
			break;
	}
	return (count);
}
