#include "lists.h"

/**
* add_dnodeint - add node to end of linked list
* @head: pointer to the head of doubly linked list
* @n: integer for the new node to contain
*
* Return: Null if function fails - otherwise address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
