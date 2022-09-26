#include "main.h"
/**
* puts_half - function
* Description: print the second half of string
* @str: char pointer
* Return: nothing
*/
void puts_half(char *str)
{
	int numchar;
	int modifier = 0;
	int i;

	numchar = 0;
	while (*(str + numchar) != '\0')
	{
		numchar++;
	}

	if (numchar % 2 == 0)
		modifier = 1;

	for (i = ((numchar - modifier) / 2) + 1; i < numchar; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
