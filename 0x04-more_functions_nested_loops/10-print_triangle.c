#include "main.h"
/**
* print_triangle - there is no trailing whitespace
* @size: Tasdfghj asdfghjk asdfghj asdfghj wertghj sdfghj asdfg sdf sdfg
*
* Return: empty
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\x0a');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\x0a');
		}
	}
}

