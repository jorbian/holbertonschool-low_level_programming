#include "main.h"

/**
* set_bit - prints the value of a bit
* @number: number to check
* @index: index of number
*
* Return: Value of -1 if error
*/
int set_bit(unsigned long int *number, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}

