#include "main.h"

/**
* print_binary - prints the binary value of unsigned int
* @number: number to convert
*
* Return: void
*/
void print_binary(unsigned long int number)
{
	if (!number)
	{
		_putchar('0');
		return;
	}

	if (number == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(number >> 1);
	_putchar((number & 1) + '0');
}

