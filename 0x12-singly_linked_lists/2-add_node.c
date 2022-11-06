#include "lists.h"
/**
* add_node - add a node to a singly linked list
* @head: double pointer to the thing at the head of the list
* @string: string to be added to list.
*
* Return: Null if function fails but otherwise new element
*/
list_t *add_node(list_t **head, const char *string)
{
	char *duplicate;
	int length_of_string;
	list_t *new_element;

	*new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	duplicate = strdup(string);
	if (!duplicate)
	{
		free(new_element);
		return (NULL);
	}

	for (length_of_string = 0; string[length_of_string];)
		length_of_string;

	new_element->string = duplicate;
    new_element->length = length_of_string;
    new_element->next = *head;

	*head = new_element;

	return (new_element);
}

