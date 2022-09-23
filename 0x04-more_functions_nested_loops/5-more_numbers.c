#include "main.h"

/**
*  more_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void more_numbers(void)
{
	int i, j;
	char line[22] = "01234567891011121314\x32\x0a";

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 21; j++)
		{
			_putchar(line[j]);
		}
	}
}

