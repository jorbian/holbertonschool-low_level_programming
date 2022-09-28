#include <stdio.h>

/**
 * *_strcpy - a shameless ripoff of knrs verion of this function
 * @dest: pointer to zeroeth character in destination
 * @src: pointer to zeroeth character in source
 *
 * Return: void 
 */

char _strcpy(char *dest, char *src)
{
    char unnecessary_retrurn_value = *dest;

    while ((*src++ = *dest++) != '\0') 
        ;
    return (dest);
}
