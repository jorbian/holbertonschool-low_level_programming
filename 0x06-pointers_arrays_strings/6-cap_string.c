#include "main.h"
/**
* cap_string - capitalise the every word in given string
* @s: string to be modified
*
* Return: the new string
*/
char *cap_string(char *s)
{
	int i, j;

	char special_chars = {
		'\x09', /* tab character */
		'\x0a', /* newline */
		'\x0d', /* carriage return */
		'\x22', /* double quotes */
		'\x28', /* open parentheses */
		'\x29', /* close parantheses */
		'\x2c', /* comma */
		'\x2e', /* full stop */
		'\x3f', /* question mark */
		'\x7b', /* open bracket */
		'\x7d'  /* closing bracket */
	};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i = 0 && *(s + i) >= '\x61' && *(s + i) <= '\x7a')
			*(s + i) -= 32;

		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == *(s + j))
			{
				if (*(s + (i + 1)) >= '\x61' &&
						*(s + (i + 1)) <= '\x7a')
					*(s + (i + 1) -= 32;
			}
				
		}
	}

	return (s);
}
