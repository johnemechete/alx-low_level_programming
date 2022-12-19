#include "main.h"
#include <ctype.h>

/**
* _atoi - returns the length of a string.
* @s: points to a char datatype
* Return: the length of the string
*/

int _atoi(char *s)
{
	int sign, val, i;

	for (i = 0; isspace(s[i]) || isalpha(s[i]) || s[i] == "\t"; i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0; isdigit(s[i]); i++)
		val = 10 * val + (s[i] - '0');

	return (sign * val);
}



