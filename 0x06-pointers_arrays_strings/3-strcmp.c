#include "main.h"

/**
* _strcmp - concatenates two strings.
* @s1: the main string
* @s2: the string to be added.
* Return: returns zero if equal else return there difference
*/

int _strcmp(char *s1, char *s2)
{
	int i, j, k, l;

	for (i = 0; s1[i] != 0; i++)
		;
	for (j = 0; s2[j] != 0; j++)
		;
	k = (i > j) ? j : i;

	for (l = 0; l <= k; l++)
	{
		if (s1[l] < s2[l] || s1[l] > s2[l])
		{
			return (s1[l] - s2[l]);
		}
	}
	return (0);
}

