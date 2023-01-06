#include "main.h"
/**
* _abs - To print the absolute value
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

int _abs(int n)
{
	if (n > 0)
	{

		return (n);
	}
	else if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (0);
	}
}
