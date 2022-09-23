#include "main.h"

/**
*  more_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void more_numbers(void)
{
	int i, j;


	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\x0a');
	}
}

