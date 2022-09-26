#include <stdio.h>

/**
 * puts_half - a shameless ripoff of knrs verion of this function
 * @str: pointer to zeroeth character in array
 *
 * Return: does not return anytrhing
 */

void puts_half(char *str)
{
	char *length_of_string = str;
	int adjustment = 0;
	int i, x;

	while (*length_of_string != '\0')
		length_of_string++;
	length_of_string = (length_of_string - str);

	if (length_of_string % 2 != 0)
		adjustment = 1;
	x = (length_of_the_string - adjustment) / 2;

	for (i = 0; i < x; i++)
	{
		putchar(*str);
		str++;
	}
}
