#include "main.h"
/**
* _strlen_recursion - adf asdf asdf asdf
* @s: asd fasdf asdf asdf sda fadsf adfs
*
* Return: the len of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\x00')
		return (0);
	else
		return 1 + (_strlen_recursion(s + 1))
}

