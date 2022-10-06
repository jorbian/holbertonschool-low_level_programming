#include "main.h"
/**
*  _strstr - locate string.
* @source_string: string to search
* @sub_string: string we're looking for
*
* Return: asd fadsf adfs
*/
char *_strstr(char *source_string, char *sub_string)
{
	int address[2] = {0, 0};

	while (source_string[address[0]])
	{
		while (needle[address[1]])
		{
			if (source_string[address[0] + address[1]] !=
				sub_string[address[1]])
				break;

			address[1]++;
		}

		if (sub_string[address[1]] == '\0')
			return (source_string + address[0]);

		address[1]++;
	}

	return ('\0');
}

