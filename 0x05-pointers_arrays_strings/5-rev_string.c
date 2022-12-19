#include "main.h"

/**
* rev_string - that prints a string in reverse,
* followed by a new line, to stdout
* @s: points to a string
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while  (i >= 0)
	{
		i--;
	}
}
