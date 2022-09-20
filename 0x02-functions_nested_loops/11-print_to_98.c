#include <stdio.h>
/**
* print_to_98 - The ritually descriptor
* @n: takes an i(n)teger. any i(n)teger you wantses
*
* Return: It don't return nothing. 
*/

void print_to_98(int n)
{
	int i;
	int direction;

	if (n > 98) {
		direction = -1;
	}
	else 
	{
		direction = 1;
	}

	i = n;
	do 
	{
		printf(" %d,", i);

		i = i + direction;
	} while (i != 98);
}
