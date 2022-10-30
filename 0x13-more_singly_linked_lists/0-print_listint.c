#include "lists.h"

/**
 * print_listint - prints all the elements of a line
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h);
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
