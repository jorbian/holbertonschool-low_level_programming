#include "lists.h"
/**
* list_len - adsf asdf asdf asdf
* @h: asdfasdfasdf asdfasdf
*
* Return: adsf asdfasdfasdfasdf add
*/
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		h = h->next;
		num_of_elements++;
	}

	return (num_of_elements);
}

