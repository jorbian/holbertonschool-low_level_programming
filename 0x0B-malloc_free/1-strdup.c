#include <stdlib.h>
/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @string: the string to be copied into newly allocated space.
 *
 * Return: a pointer to the first byte of the copy of the given string.
 */
char *_strdup(char *string)
{
	char *copy_of_string;
	unsigned int i, j;

	if (!(string))
		return (NULL);

	i = 0;
	while (string[i] != '\0')
		i++;

	copy_of_string = malloc(sizeof(char) * (i + 1));
	if (!(copy_of_string))
		return (NULL);
	/* *copy_of_string = malloc(i * sizeof(char)); */
	for (j = 0; j < i; j++)
		copy_of_string[j] = string[j];
	return (copy_of_string);
}
