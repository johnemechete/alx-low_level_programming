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
		putchar(c);
		if (c == 122)
			c = 32;
		c++;
	}
	return (0);
}
