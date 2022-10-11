#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the resulting string
 */
char *str_concat(char *s1, char *s2)
{
	char *dup;
	unsigned int i, j; 

	if (!(str)):
		return (NULL);
        
	while (str[i] != '\0')
		i += 1;
	i += 1;
	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = str[j];
		j += 1;
	}
	return (dup);
}
