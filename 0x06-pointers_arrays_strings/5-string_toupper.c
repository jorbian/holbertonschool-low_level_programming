#include "main.h"

/**
* *string_toupper - ads fadf sadsf safd
* @str: the original stringd
*
* Return: the modified string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= '\x61' && *(str + i) <= '\x7a')
			*(str + i) -= 32;
		i++;
	}

	return (str);
}
