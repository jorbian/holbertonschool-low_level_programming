#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - asdf afds afd addddff
* @array: an array
* @size: size of the array in bytes
* @action: a pointer to whatever it is you're doing to the array
*
* Return: does not return anything
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		if (array[i])
			action(array[i]);
	}
}
