#include "lists.h"

/**
* recursive_sum - get the sum using recursion
* @node: current node we're on
* @sum: the sum so far
*
* Return: the sum of all the nodes
*/
int recursive_sum(dlistint_t *node, int sum)
{
	int new_sum = (node->n + sum);

	if (!(node->next))
		return (new_sum);

	return (recursive_sum(node->next, new_sum));
}

/**
* sum_dlistint - dummy function for the real magic
* @head: pointer to head of list
*
* Return: Sum of all the nodes
*/
int sum_dlistint(dlistint_t *head)
{
	return (recursive_sum(head, 0));
}

