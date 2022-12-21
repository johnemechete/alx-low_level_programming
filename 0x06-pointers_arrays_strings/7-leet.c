#include "main.h"

/**
* leet - encodes a string into 1337
* @s: the main string
* Return: returns zero if equal else return there difference
*/

char *leet(char *s)
{
	int i, j;
	char alp[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != 0; j++)
			if (s[i] == alp[j])
				s[i] = num[j];
	}

	return (s);
}

