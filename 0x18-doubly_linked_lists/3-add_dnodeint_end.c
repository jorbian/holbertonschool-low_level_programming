#include "lists.h"

/**
* add_dnodeint_end - add node at the end of doubly linked list
* @head: head of the list
* @n: number to be added
*
* Return: address of new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}

