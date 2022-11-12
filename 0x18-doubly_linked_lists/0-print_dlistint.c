#include "lists.h"

/**
* print_dlistint - Print all of the elements of a list
* @h: the head of the list
*
* Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\x0a", h->n);
		h = h->next;
	}

	return (nodes);
}

