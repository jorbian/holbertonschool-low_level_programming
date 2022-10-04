#include "main.h"

/**
* _strcmp - ads fadf sadsf safd 
* @s1: asdf asdf adfs ks fdldd 
* @s2: asdfghjk asdfghjkl wertyui
* 
* Return: asdf asdf asdf adfs asdf asdf
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

