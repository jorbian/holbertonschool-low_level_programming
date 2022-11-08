#include "main.h"

/**
* flip_bits - number of buits between numbers
* @num1: exactly what it says on the tin
* @num2: exactly what it says on the tin
*
* Return: bit count of flipped number
*/
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int i = 0;
	unsigned int x;

	x = num1 ^ num2;
	while (x)
	{
		if ((x & 1) == 1)
			i++;
		x = x >> 1;
	}

	return (i);
}

