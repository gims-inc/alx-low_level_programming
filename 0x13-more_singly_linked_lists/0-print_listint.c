#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t i;

	for (current = h, i = 0; current != NULL; i++, current = (*current).next)
		printf("%d\n", (*current).n);

	return (i);
}
