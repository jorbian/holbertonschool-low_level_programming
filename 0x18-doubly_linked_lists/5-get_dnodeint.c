#include "lists.h"

/** 
 * get_card_at_index - exactly what it says on the tin
 * @head: card on the top of the deck
 * @index: the index we're interest in grabbing
 * 
 * Return: the card we wanted
*/
card *get_dnodeint_at_index(card *head, unsigned int index)
{
	unsigned int i = 0;
	card *current_node = head;

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (index > i)
		return (NULL);

	return (current_node);
}

