#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: Pointer to an area in memory
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to area in memory @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory_area = s, value_to_use = b;

	for (i = 0; i < n; i++)
		*(memory_area + i) = value_to_use;

	return (memory_area);
}
