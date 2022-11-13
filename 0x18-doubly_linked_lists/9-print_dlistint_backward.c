#include "lists.h"

/**
* find_tail - find the end of the doubly linked list
* @h: head of the list
*
* Return: last node in list
*/
dlistint_t *find_tail(dlistint_t *h)
{
	if (!h->next)
		return (h);
	else
		return(find_tail(h->next));
}

/**
* recurse_backward - print the list moving backward recusrively
* @node: current node  of list
* @length: length so far
*
* Return: number of nodes printed
*/
size_t recurse_backward(dlistint_t *node, size_t length)
{
	printf("%d", node->n);

	if (!node->prev)
		return (length);
	else
		return (recurse_backward(node->prev, length++));
}

/**
* print_dlistint_backward - dummy function to branch into the real ones
* @h: head of the doubly linked list
*
* Return: size of the list
*/
size_t print_dlistint_backward(dlistint_t *h)
{
	dlistint_t *tail = find_tail(h);
	size_t length = recurse_backward(tail, 1);

	return (length);
}
