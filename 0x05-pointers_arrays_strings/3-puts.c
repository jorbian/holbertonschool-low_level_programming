#include "main.h"
/**
  * _puts - Reverses a string
  * @str: The string
  *
  * Return
  *
*/

void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
}

