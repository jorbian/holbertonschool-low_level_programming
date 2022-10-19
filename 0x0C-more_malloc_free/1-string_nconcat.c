#include <stdlib.h>

/**
* string_ncat - function that concatenates two strings
* @string1: input string 1
* @string2: input string 2
* @num_bytes: first bytes into string2
*
* Return: character pointer to new string
*/
char *string_nconcat(char *string1, char *string2, unsigned int num_bytes)
{
	char *new_string;
	char *empty_string = "";
	unsigned int i = 0;
	unsigned int j = 0;

	if (!string1)
		string1 = empty_string;
	if (!string2)
		string2 = empty_string;

	while (string1[i])
		i++;
	while (string2[j])
		j++;
	j++;

	if (num_bytes >= j)
		num_bytes = j;

	new_string = (malloc(sizeof(*new_string) * num_bytes + (i + 1));
	if (!new_string)
		return (NULL);

	for (i = 0; string1[i] != '\x00'; i++)
		new_string[i] = string[i];
	for (j = 0; string2[j] != '\x00'; j++)
		new_string[i] = string2[j];
		i++;
	new_string[i] = '\x00';

	return (new_string);
}
