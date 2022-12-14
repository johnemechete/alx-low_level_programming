#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* positive_or_negative - To check if a number is positive or negative
* @n: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
