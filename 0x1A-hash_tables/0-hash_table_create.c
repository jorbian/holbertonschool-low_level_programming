#include "hash_tables.h"

/**
* hash_table_create - create hash table of specified size
* @size: amount of memory to reserve for table
*
* Return: Pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *new_hashtable;
	hash_node_t **array;

	array = malloc(sizeof(hash_node_t *) * size);
	new_hashtable = malloc(sizeof(hash_table_t));

	if (!new_hashtable || !array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_hashtable->size = size;
	new_hashtable->array = array;

	return (new_hashtable);
}

