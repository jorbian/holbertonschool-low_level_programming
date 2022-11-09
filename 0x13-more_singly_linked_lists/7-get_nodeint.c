#include "lists.h"

/**
* get_nodeint_at_index - prints node index
* @head: node
* @index: index of node we want to print
*
* Return: asdf
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	while (i != index)
	{
		if (temp->next)
		{
			temp = temp->next;
			i++;
		}
		else
			return (NULL);
	}

	return (temp);
}
