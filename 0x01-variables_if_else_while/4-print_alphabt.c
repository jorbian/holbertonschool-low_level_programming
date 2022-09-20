#include <stdio.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (!((i == 101) || (i == 113)))
			putchar(i);
	}
	putchar('\x0a');

	return (0);
}
