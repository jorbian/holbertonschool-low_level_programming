#include "lists.h"

/**
* insert_nodeint_at_index - exactly what it says on the tin
* @head: double pointer
* @index: index of list
* @n: position
*
* Return: new node address
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!index)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
		temp = *head;

	while (i != index - 1)
	{
		if (temp->next)
		{
			temp = temp->next;
			i++;
		}
		else
			return (NULL);
	}

}

