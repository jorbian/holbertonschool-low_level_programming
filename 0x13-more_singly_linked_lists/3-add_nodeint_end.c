#include "lists.h"

/**
* add_nodeint_end - adds nodeint to end of the list
* @head: douple pointer to list
* @n: int data pointer in linked list
*
* Return: address to new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *index;

	index = *head;
	end_node = (listint_t *) malloc(sizeof(listint_t));

	if (!end_node)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (!*head)
	{
		*head = end_node;
		return (*head);
	}

	while (index->next)
		index = index->next;
	index->next = end_node;

	return (*head);
}

