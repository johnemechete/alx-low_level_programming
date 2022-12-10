#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Runtime start here
* Description: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int main(void)
{
	int a, b, c;

	for (a = 48; a < 57; a++)
	{
		b = a + 1;
		for (b = b; b < 58; b++)
		{

			if (a == b)
				continue;
			c = b + 1;
			for (c = c; c < 58; c++)
			{
				if (b == c)
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
