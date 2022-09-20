#include "main.h"

/**
* print_alphabet_x10 - The ritually descriptor
*
* Return: it don't return nothing!!
*/

void print_alphabet_x10(void)
{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		};
	}
	_putchar('\x0a');
}
