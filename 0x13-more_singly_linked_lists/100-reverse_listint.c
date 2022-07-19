#include "lists.h"

/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
