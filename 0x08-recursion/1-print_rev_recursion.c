#include "main.h"

/**
* _print_rev_recursion - adf asdf asdf asdf
* @s: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}

