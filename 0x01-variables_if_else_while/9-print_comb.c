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
		if (c != 9)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
