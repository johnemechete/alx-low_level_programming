#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: It holds the array
 * @size: it is the size of the array
 * @action: it is a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != 0 || *(array + 0) != '\0') 
		for (i = 0; i < size; i++)
			action(array[i]);
}
