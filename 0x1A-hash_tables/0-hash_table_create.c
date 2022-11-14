#include "hash_tables.h"

/**
* hash_table_create - create hash table of specified size
* @size: amount of memory to reserve for table
*
* Return: Pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(size);
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = NULL;

	return (new_hash_table);
}

