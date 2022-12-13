#include "main.h"
/**
* print_alphabet_x10- To print the alphabet
*/

void print_alphabet_x10(void)
{
	int a = 'a';
	int z = 'z';
	int i, j;

	for (j = 1; j <= 10; j++)
	{

		for (i = a; i <= z; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
