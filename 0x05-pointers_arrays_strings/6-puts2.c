#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string for every other chracter to be printed
  *
  * Return: void
  */
void puts2(char *str)
{
	int i;
	int j = 0;
	int step = 2;

	while (str[j] != '\0')
		j++;

	for (i = 0; i < j; i += step)
		_putchar(str[i]);
	_putchar('\x0a');
}

