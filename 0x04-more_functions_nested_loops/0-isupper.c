#include "main.h"
/**
* _isupper - To print the alphabet
* @c: takes an int value
* Return: return 0 if it is lower case else 1
*/

int _isupper(int c)
{
	int A = 'A';
	int Z = 'Z';

	if (c >= A && c <= Z)
		return (1);
	else
		return (0);
}
