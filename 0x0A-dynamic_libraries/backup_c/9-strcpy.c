#include<stdio.h>
#include "main.h"
/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: not.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int index = 0;

	while (src[length] != '\0')
		length++;

	for ( ; index < length ; index++)
		dest[index] = src[index];

	dest[length] = '\0';
	return (dest);
}
