#include "main.h"
#include <string.h>
/**
* print_rev - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
	int i, temp;
    char *pointer; 
	int length = strlen(s);

	for (i = 0; (i < length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

    pointer = s;

    while (*pointer++ != '\0') 
        _putchar(*pointer); 
}
