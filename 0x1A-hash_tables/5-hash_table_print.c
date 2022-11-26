#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs printed in the order they appear in the array.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			do {
				printf("'%s': '%s'", node->key, node->value);
			} while (((node = node->next) != NULL));

			flag = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
