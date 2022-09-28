#include <stdio.h>

/**
 * *_strcpy - a shameless ripoff of knrs verion of this function
 * @dest: pointer to zeroeth character in destination
 * @src: pointer to zeroeth character in source
 *
 * Return: void 
 */

char _strcpy(char *dest, char *src) {

    char *temp = *dest; 

    while ((*src++ = *temp++) != '\0') 
        ;
    return (*temp);
}
