#include "main.h"
/**
 * binary_to_uint - exactly what it says on the tin
 * @binary: a string representing a binary number
 * Return: unsigned int represented by binary string
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int number;
	unsigned int index;
	unsigned int ret_value = 0;

	if (!binary)
		return (0);

	for (index = 0; binary[index]; index++)
		;
	for (number = 1; index > 0; index--, number *= 2)
	{
		if (!(binary[index - 1] == '0' || binary[index - 1] == '1'))
			return (0);
		ret_value += (binary[index - 1] - '0') * number;
	}

	return (ret_value);
}

