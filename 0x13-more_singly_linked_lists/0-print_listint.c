#include "lists.h"

/**
* print_listint - print number elements in linked list
* @h: consts printer
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\x0a", h->n);
		c++;
		h = h->next;
	}

	return (c);
}

