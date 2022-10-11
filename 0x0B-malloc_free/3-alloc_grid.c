#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: the width of the array
 * @height: the height
 *
 * Return: the array that we are creating
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pointer;

	i = j = 0;
	if (height < 1)
		return (NULL);
	pointer = (int **)malloc(height * sizeof(pointer));

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));
		if (!(pointer[i]))
		{
			for (j = 0; j < i; j++)
				free(pointer[j]);
			free(pointer);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}

    return (pointer);
}
