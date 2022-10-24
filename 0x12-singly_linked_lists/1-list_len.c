#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t no_of_nodes;

	no_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
