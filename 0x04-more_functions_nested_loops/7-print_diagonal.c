#include "main.h"

/**
  * print_diagonal - asdfghjkl asdfghjkl asdfghjkl
  * @n: The number of times to print diagonal lines
  *
  * Return: asdfghjkl asdfghjkl asdfghjkl asdfghjkl 
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\x0a');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\x0a');
		}
	}
}
