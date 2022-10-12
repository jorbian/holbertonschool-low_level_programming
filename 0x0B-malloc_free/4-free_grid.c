#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid previously created
 * the alloc_grid function.
 * @grid: the string to be copied into newly allocated space.
 * @height: the height of the space.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
