#include <stdio.h>
#include "main.h"

/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!((i % 3 == 0) || (i % 5 == 0)))
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("%s", "Fizz");
			if (i % 5 == 0)
				printf("%s", "Buzz");
		}

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
