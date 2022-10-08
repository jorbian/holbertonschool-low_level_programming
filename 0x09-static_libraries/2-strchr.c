#include "main.h"
/**
* _strchr - locate a character in string
* @s: a string
* @c: chracter we're looking for
*
* Return: string from char found
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	int a = 0;

	while (*(s + a))
		a++;

	for (; i <= a; i++)
	{
		if (c == *(s + i))
		{
			s += i;
			return (s);
		}
	}

	return ('\x00');
}
