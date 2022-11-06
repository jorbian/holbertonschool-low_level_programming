#include "lists.h"

/**
* print_list - exactly what it says on the tine
* @h: a singly linked list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\x0a");
		else
			printf("[%d] %s\x0a", h->length, h->string);
		h = h->next;
		i++;
	}

	return (i);
}
