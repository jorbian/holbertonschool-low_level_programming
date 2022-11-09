#include "lists.h"

/**
* delete_nodeint_at_index - asf gaf
* @head: head of the list to print
* @index: position on list
*
* Return: 1 if succeeed, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	if (!*head)
		return (-1);

	temp = *head;
	if (!index)
	{
		new = temp;
		*head = temp->next;
		free(new);
		return (1);
	}

	while (temp->next && i != (index - 1))
	{
		temp = temp->next;
		i++;
	}

	if (!temp || !temp->next)
		return (-1);
	new = temp->next;
	temp->next = (temp->next)->next;
	free(new);
	return (1);
}

