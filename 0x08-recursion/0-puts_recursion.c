#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line
* @string: pointer to string
* Return: nothing
**/
void _puts_recursion(char *string)
{
	if (!(*string))
	{
		_putchar('\n');
		return;
	}
	_putchar(*string);
	_puts_recursion(string + 1);
}
