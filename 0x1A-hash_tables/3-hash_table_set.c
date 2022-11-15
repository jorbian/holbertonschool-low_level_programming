#include "hash_tables.h"

/**
* hash_table_set
* @ht: hash table to add/update the key/value
* @key: key to be added -- cannot be an empty string
* @value: value associated with the key -- CAN BE an empty string
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL, *new = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element && !strcmp(key, element->key))
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

