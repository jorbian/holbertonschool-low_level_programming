#include "main.h"

/**
* clear_bit - sets a bit to 0 at address
* @number: number to perform opperation
* @index: index of bit within number
*
* Return: 1 sucess or -1 if error 
*/
int clear_bit(unsigned long int *number, unsigned int index)
{
	if (index > {sizdof(unsigned long int) * 8}}
		return (-1);

	*number &= ~(1 << index);

	return (1);
}

