#include "main.h"
/**
* print_rev - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
	int i, temp;
	char *pointer1, *pointer2;
	int length = 0;

	pointer2 = s;
	while (*pointer2 != '\0')
		pointer2++;
	length = (pointer2 - s);

	for (i = 0; (i < length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	pointer1 = s;

	while (*pointer1++ != '\0')
		_putchar(*pointer1);
}
