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
	unsigned long int bits = 0;
	unsigned long int xor = num1 ^ num2;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

