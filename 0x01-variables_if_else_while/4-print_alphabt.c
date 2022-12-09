#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Runtime start here
* Description: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int main(void)
{
	int c = 96;

	while (c < 123)
	{
		c++;
		if (c != 101 || c != 113)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
