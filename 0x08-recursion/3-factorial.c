#include "main.h"
/**
* factorial - adf asdf asdf asdf
* @n: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int factorial(int n)
{
	if ((n == 1) || (n == 0))
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

