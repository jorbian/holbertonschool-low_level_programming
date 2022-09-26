#include "main.h"

/**
* print_rev - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
    char *pointer; 
    rev_string(s);
    pointer = s;

    while (*pointer++ != '\0') 
        _putchar(*pointer); 
}
