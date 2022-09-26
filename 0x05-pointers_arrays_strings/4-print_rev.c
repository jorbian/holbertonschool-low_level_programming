#include "main.h"
/**
* print_rev - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
    rev_string(s);
    char *pointer = s;

    while (*pointer++ != '\0') 
        _putchar(*pointer); 
}
