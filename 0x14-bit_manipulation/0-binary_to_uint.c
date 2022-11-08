#include "main.h"
/**
 * binary_to_uint - exactly what it says on the tin
 * @binary: a string representing a binary number
 * Return: unsigned int represented by binary string
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int number = 0;
	int index = 0;
	int power = 1;

	if (!binary)
		return (0);

	while (binary[index])
	{
		if (binary[index] != '0' && binary[index] != '1')
			return (0);
		index++;
	}
	index--;

	while (index >= 0)
	{
		if (binary[index] == '1')
			number += power;
		index--;
		power *= 2;
	}

	return (number);
}
