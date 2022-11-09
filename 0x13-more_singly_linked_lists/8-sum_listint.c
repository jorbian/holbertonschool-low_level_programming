#include "lists.h"

/**
* sum_listint - add values of list data
* @head: the list we're adding together
*
* Return: sum of value of list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

