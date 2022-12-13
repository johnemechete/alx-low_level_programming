#include "main.h"
/**
* _islower- To print the alphabet
* @c: takes an int value
* Return: return 0 if it is lower case else 1
*/

int _islower(int c)
{
	int a = 'a';
	int z = 'z';

	if (c < a || c > z)
		return (0);
	else
		return (1);

}
