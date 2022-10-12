#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: the sie of the array to be created
 * @c: the character that the function returns.
 *
 * Return: the array that was created.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!(size))
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	else
		return (NULL);

	return (array);
}
