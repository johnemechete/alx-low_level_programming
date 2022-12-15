#include "main.h"
/**
* _isdigit - To print the alphabet
* @c: takes an int value
* @zero: the first digit
* @nine: the last digit
* Return: return 0 if it is lower case else 1
*/

int _isdigit(int c)
{
	int zero = '0';
	int nine = '9';

	if (c >= zero && c <= nine)
		return (1);
	else
		return (0);
}
