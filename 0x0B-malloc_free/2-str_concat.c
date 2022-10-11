#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @string1: the first string
 * @string2: the second string
 *
 * Return: the resulting string
 */
char *str_concat(char *string1, char *string2)
{
	char *pointer;
	int len_of_string1, len_of_string2, size_buffer;
	int i;

	/*Check for valid strings*/
	if (!(string1))
		string1 = "";
	if (!(string2))
		string2 = "";

	for (len_of_string1 = 0; string1[len_of_string1]; len_of_string1++)
		;
	for (len_of_string2 = 0; string2[len_of_string2]; len_of_string2++)
		;

	size_buffer = (len_of_string1 + len_of_string2) + 1;
	pointer = malloc(size_buffer * sizeof(char));

	for (i = 0; i < size_buffer; i++)
		i < len_of_string1 ?
		(pointer[i] = string1[i]) : (pointer[i] = string2[i - len_of_string1]);

	return (pointer);
}
