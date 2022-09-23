#include "main.h"

/**
*  print_square - check the code
* @size: an integer representing the number of times the character
* is to be printed.
*
* Return: Is void and doesn't return anythinbg
*/

void print_square(int size)
{
	char cell = '#';
	int row;
	int column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
	}
}

