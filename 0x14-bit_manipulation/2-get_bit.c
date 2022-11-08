#include "main.h"

/**
* get_bit - prints the value of bit
* @number: number to check
* @index: index of number
*
* Return: Value or -1 if error 
*/
int get_bit(unsigned long int number, unsigned int index)
{
	unsigned int x = 0;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	while (x < index)
	{
		number = number >> 1;
		x++;
	}

	return ((number & 1));
}

