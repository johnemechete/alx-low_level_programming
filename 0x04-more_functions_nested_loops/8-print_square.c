#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: the size ods the square
*/

void print_square(int size)
{
	int col, row;

	for (row = 1; row <= size; row++)
	{
		for (col = 0; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
