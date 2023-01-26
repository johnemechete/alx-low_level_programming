#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size;

	if (h == NULL)
		return (0);
	size = 0;
	size++;
	if (h->next != NULL)
		size += list_len(h->next);
	return (size);
}
