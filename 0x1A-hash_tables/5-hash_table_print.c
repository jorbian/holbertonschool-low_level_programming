#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to be printed
*
* Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *current_node;

	if (!ht)
		return;

	putchar("{");
	for (i = 0; i < ht->size; i++)
	{
		if (current_node)
		{
			while (current_node)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", current_node->key, current_node->value);
				flag = 1;
				current_node = current_node->next;
			}
		}
	}
	
	putchar("}");
	putchar("\x0a");
}

