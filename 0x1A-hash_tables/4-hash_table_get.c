#include "hash_tables.h"

/**
* hash_table_get - retrieve the value of a specified key in hash table
* @ht: hash table to be searched
* @key: the key we need the value of
*
* Return: value of  element, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];
	if (!element)
		return (NULL);

	while (strcmp(key, element->key))
		element = element->next;

	return (element->value);
}

