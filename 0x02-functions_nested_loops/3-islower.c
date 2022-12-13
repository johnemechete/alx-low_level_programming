#include "main.h"
/**
* _islower- To print the alphabet
* @c: takes an int value
* Return: return 1 if it is lower case else 0
*/

int _islower(int c)
{
	int a = 'a';
	int z = 'z';

	if (c < a || c > z)
		return (1);
	else
		return (0);

}
