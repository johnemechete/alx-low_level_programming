#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Runtime start here
* Description: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int main(void)
{
	int c = 97;

	while (c == 33 || c < 123)
	{
		if (c == 33)
			break;
		putchar(c);
		c++;
		if (c == 123)
			c = 32;
	}
	return (0);
}
