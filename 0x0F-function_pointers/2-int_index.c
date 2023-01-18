#include <stdlib.h>

/**
 * int_index - Search for an integer
 * @array: Array to search through
 * @size: Size of array
 * @cmp: Compare function to use
 *
 * Return:  return when is successful 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

