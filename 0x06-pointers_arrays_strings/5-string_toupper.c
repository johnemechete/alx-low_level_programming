#include "main.h"

/**
* string_toupper - concatenates two strings.
* @s: the main string
* Return: returns a string
*/

char *string_toupper(char *s)
{

	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (isalpha(s[i]))
		{
			if (islower(s[i]))
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
	}
	s[i] = '\0';
	return (s);
}

