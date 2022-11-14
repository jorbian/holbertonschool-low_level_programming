#include "hash_tables.h"

/**
* key_index - find the index of a key
* @key: pointer to the key being searched for
* @size: size of the arrary of the hash table
*
* Return: index at which the key/value should be stored in hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

