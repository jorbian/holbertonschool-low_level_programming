#include "main.h"
/**
* _pow_recursion - adf asdf asdf asdf
* @x: asd fasdf asdf asdf sda fadsf adfs
* @y: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

