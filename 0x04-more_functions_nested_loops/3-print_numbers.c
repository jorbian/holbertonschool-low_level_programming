#include "main.h"

/**
*  print_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch < '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\x0a');
}
