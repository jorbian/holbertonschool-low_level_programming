#include "main.h"

/**
*  print_most_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if ((ch != '2') && (ch != '4'))
			_putchar(ch);
	}
	_putchar('\x0a');
}
