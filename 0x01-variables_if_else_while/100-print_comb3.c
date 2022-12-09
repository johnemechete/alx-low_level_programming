#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Runtime start here
* Description: This code is to tell us if the number is negative or positive
* Return: return 0 if run successful
*/
int main(void)
{
	int c, d = 48, e = 0;

	for (c = 48; c < 57; c++)
	{
		for (e = e + d; e < 58; e++)
		{

			if (c == e)
				continue;
			if (c != 56 || e != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		d++;
		e = 0;
	}
	putchar('\n');
	return (0);
}
