#include "main.h"

/**
* swap_int -  swaps the values of two integers.
* @a: points to a variable
* @b: also points to a variable
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
