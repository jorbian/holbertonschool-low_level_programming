#include "lists.h"

/**
* dlistint_len - Count the number of elements in doubly linked list
* @h: head of the doubly linked list
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

