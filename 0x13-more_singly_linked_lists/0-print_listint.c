#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
