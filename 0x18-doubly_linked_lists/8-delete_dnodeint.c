#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at specific of doubly linked list
* @head: pointer to the head of the list
* @index: index of item to be deleted
* Return: sucess (1) or not sucess (-1)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);

	while (index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		index--;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);

	return (1);
}

