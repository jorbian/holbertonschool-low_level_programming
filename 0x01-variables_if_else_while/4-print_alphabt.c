#include <stdio.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar("\x0a");

	return (0);
}

