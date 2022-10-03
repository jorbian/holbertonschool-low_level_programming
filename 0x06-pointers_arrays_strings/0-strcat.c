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
	int dest_length;
	int src_length;
	int i;

	dest_length = 0;
	while (*(dest + dest_length))
		dest_length++;

	src_length = 0;
	for (i = 0; *(src + src_length) != '\0'; i++)
	{
		src_length++;
		dest_length++;

		*(dest + dest_length) = *(src + src_length);
	}
	*(dest + dest_length) = '\0';

	return (dest);
}
