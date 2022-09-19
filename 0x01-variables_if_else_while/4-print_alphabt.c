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
	char i, j;
	for (i = "a"; i <= "z"; i++)
		putchar(i);
	putchar("\x0a");

	return (0);
}

