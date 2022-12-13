#include "main.h"
/**
* _islower- To print the alphabet
* @c: takes an int value
* Return: return 1 if it is an Alphabet  case else 0
*/

int _isalpha(int c)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	if ((c < a && c > z) || (c < A && c > Z))
		return (1);
	else
		return (0);

}
