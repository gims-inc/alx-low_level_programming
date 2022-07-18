#include "lists.h"

/**
 * listint_len - Returns the number of the elements of a list_t list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in h- lenght
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t i;

	for (current = h, i = 0; current != NULL; i++, current = (*current).next)
		;

	return (i);
}
