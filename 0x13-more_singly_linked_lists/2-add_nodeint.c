#include "lists.h"

/**
* add_nodeint - adds a new node int
* @head: douple pointer to linked list
* @n: int within linked list
*
* Return: the new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = (listint_t *) malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	*head = temp;

	return (*head); 
}

