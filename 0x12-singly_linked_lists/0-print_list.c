#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Print all elements of a list_t list
 * @h: Points to the first element of the list.
 * Return: The numbr of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 1;
	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		i += print_list(h->next);
	return (i);
}
