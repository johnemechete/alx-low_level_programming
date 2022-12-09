#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Runtime start here
* Description: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
