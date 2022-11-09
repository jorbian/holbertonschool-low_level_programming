#include "lists.h"

/**
 * add_node_end - Add node to the end of a list_t list.
 * @head: Pointer to  head of the list.
 * @str: String to be added to list.
 *
 * Return: New node unless it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate_string;
	int length;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	duplicate_string = strdup(str);
	if (!str)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_node->str = duplicate_string;
	new_node->len = length;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
