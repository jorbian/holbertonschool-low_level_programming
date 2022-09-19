#include <stdio.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n <= 9)
		{
			putchar(48 + n);
		}
		else
		{
			putchar(87 + n);
		}
	}

	putchar('\x0a');

	return (0);
}

