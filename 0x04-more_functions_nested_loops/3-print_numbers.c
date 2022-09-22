#include "main.h"

/**
*  print_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\x0a');
}
