#include "main.h"
/**
* puts_half - function
* Description: print the second half of string
* @str: char pointer
* Return: nothing
*/
void puts_half(char *str)
{
	int length;
	int modifier = 0;
	int i;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		modifier = 1;

	for (i = (length - modifier) / 2) + 1; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
