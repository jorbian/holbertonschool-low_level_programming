#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - a function that searches for an integer.
* @array: the array that we're searching
* @size: the size of the array
* @cmp: pointer to the function we're going to use to look for it
*
* Return: index of the integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || (size <= 0) || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

