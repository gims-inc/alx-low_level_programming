#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	count = 0;
	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
