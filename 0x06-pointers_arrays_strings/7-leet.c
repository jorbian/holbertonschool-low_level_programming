#include "main.h"

/**
* leet - asdf asdf asdf
* @s: string
*
* Return: another string
*/
char *leet(char *s)
{
	int i, j;

	char *letters = "AaEeOoTtLl";
	char *numbers = "4433007711";

	for (i = 0; *(s + i) != '\x00'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(letters + j))
				*(s + i) = *(numbers + j);
		}
	}

	return (s);
}
