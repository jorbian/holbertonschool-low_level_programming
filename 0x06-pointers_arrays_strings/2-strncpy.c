#include "main.h"
/** 
* _strncpy - asdf asd fasd fasdf 
* @dest: asdf asdf asdf asdf asdf 
* @src: asd fasd fasdf asd f
* @n: asd fasdf asd f
*
* Return: asd fdfs
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (*(src + i++))
		src_length++;

	for (i = 0; (*(src + i) && i) < n; i++)
		*(dest + i) = *(src + i);
	for (i = src_length; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}

