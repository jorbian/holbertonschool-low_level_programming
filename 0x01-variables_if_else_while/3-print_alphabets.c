#include <stdlib.h>
#include <stdio.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	int a_modifier = 32;
	int value_of_a;
	int i, j;

	for (j = 0; j > -2; j--)
	{
		value_of_a = 97 + (a_modifier * j);
		for (i = 0; i < 26; i++)
			putchar(value_of_a + i);
	}

	putchar('\n');

	return (0);
}

