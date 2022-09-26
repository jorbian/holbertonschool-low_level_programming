#include "main.h"
/**
 *puts_half - update value.
 *@str: value to be evaluate.
 *Return: not.
 */
void puts_half(char *str)
{
	int length = 0;
	int modifier = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	if (length % 2 != 0)
		modifier = 1;
	n = ((length + modifier) / 2);

	do {
		n++;
		_putchar(*(str + n));
	} while (n < length - 1);
	_putchar('\x0a');
}
