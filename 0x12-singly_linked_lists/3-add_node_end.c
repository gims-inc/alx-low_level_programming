#include "lists.h"

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupStr;
	int len;
	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dupStr = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dupStr;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	return (*head);
}
