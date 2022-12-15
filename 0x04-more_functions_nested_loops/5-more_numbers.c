#include "main.h"
/**
* more_numbers - To print the alphabet
* Return: return 0 if it is lower case else 1
*/

void more_numbers(void)
{
	int i, j, k;

	k = 48;
	for (j = 0; j < 10; j++)
	{
		i = 48;
		for (k = 48; k <= 62; k++)
		{
			if (k > 57)
			{
				_putchar(49);
				if (k == 58)
					i = 48;
			}
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
