#include <stdio.h>
/**
* times_table - a function that prints the 9 times table, starting with 0.
* @void: Takes no args
*
* Return: it don't return nothing
*/

void times_table(void)
{
	int start = 0;
	int max = 9;
	int i, j;

	for (i = start; i <= max; i++)
	{
		for (j = start; j <= max; j++)
		{
			printf(" %d,", (i * j));
		}
		printf('\x08\x0a');
	}
}