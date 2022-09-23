#include "main.h"

/**
*  print_line - check the code
* @n: an integer representing the number of times the character
* is to be printed.
*
* Return: Is void and doesn't return anythinbg
*/

void print_line(int n)
{
	char char_to_print = '_';
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(char_to_print);
	}
	_putchar('\x0a');
}
