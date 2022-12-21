#include "main.h"

/**
* rot13 - concatenates two strings.
* @s: the main string
* Return: returns a string
*/

char *rot13(char *s)
{
	int i, j;
	char alp1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp1[j] != '\0'; j++)
		{
			if (alp1[j] == s[i])
			{
				s[i] = alp2[j];
				break;
			}
		}
	}

	return (s);
}
