#include "main.h"
/**
 *_strlen - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}
