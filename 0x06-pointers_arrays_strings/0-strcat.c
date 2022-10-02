#include "main.h"
/**
* *_strcat - check the code.
* @dest: asdf asdf
* @src: asdf asd fad fasdf adfs adf 
*
* Return: Returns 1 if yes and 0 if no
*/
char *_strcat(char *dest, char *src)
{
	char *anchor = dest;
	int original_length = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		original_length++;
	}
	dest += original_length;
	while (*dest++ = *src++)
		;
	return (anchor);
}
