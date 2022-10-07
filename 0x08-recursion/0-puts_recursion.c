#include <unistd.h>
#include "main.h"

/**
* _puts_recursion - adf asdf asdf asdf
* @string: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
void _puts_recursion(char *string)
{
	if (*string)
	{
		_putchar(*string);
		_puts_recursion(string + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}


