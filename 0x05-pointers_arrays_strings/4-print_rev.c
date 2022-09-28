#include "main.h"
/**
* print_rev - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\x0a');
}
