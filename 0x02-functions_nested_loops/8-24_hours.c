#include "main.h"
/**
* jack_bauer - To  prints every minute of the day of Jack Bauer, 
* starting from 00:00 to 23:59
* @n: takes an int value
* Return: return 0 if it is an Alphabet  case else 1
*/

void jack_bauer(void)
{
	int a ,b ,c ,d;
	int f = 9;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
			f = 4;
		for (b = 0; b <= f; b++)
		{
			for (c = 0; c <= 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
				d = 0;
			}
			c = 0;
		}
		b = 0;
	}

}
