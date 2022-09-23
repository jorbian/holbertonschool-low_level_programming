#include "main.h"

/**
*  print_diagonal - check the code
* @n: an integer representing the number of times the character
* is to be printed.
*
* Return: Is void and doesn't return anythinbg
*/

void print_diagonal(int n)
{
	char char_to_print = '\\';
	int i;

	if (n > 0) 
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar(char_to_print);
	}
	_putchar('\x0a');
}
