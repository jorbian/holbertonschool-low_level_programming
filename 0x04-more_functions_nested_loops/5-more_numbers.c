#include "main.h"

/**
*  print_most_numbers - check the code
*
* Return: Is void and doesn't return anythinbg
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar(i);
			}
			else
			{
				_putchar('1' + (i % 10));
			}
        }
		_putchar('\x0a');
	}
}	
