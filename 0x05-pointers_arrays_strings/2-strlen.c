#include "main.h"
/**
 *_strlen - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
int _strlen(char *s)
{
	int length = 0;
	char *y = s;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	return (length);
}
