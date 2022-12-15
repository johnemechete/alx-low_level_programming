#include "main.h"
/**
* print_triangle - To print the alphabet
* @size: takes an int value
* Return: return 0 if it is lower case else 1
*/

void print_triangle(int size)
{
	int row, col, rev;

	for (row = 0; row < size; row++)
	{
		rev = size - (1 + row);
		for (col = 0; col < size; col++)
		{
			if (rev != 0)
			{
				_putchar(' ');
				rev--;
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
