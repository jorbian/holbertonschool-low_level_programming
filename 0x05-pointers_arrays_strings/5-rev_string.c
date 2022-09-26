#include "holberton.h"
/**
* rev_string - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void rev_string(char *s)
{
	int length;
	char *start_of_string;
	char *end_of_string;
	char temp_string;

	start_of_string = s;
	length = 0;
	/*get the string length*/
	while (*(s + length) != '\0')
	{
		length++;
	}
	*end_of_string = start_of_string + length - 1;

	while (*end_of_string > start_of_string)
	{
		temp_string = *start_of_string;
		*start_of_string = *end_of_string;
		*end_of_string = temp_string;
		start_of_string++;
 		*end_of_string--;
	}
}
