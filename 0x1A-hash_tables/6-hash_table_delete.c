#include "hash_tables.h"

/**
* hash_table_delete - delete a hash table
* @ht: hash table that needs to be deleted
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array)
		{
			while (ht->array[i])
			{
				current_node = ht->array[i]->next;

				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);

				ht->array[i] = current_node;
			}
		}
	}

	free(ht->array);
	free(ht);
}

