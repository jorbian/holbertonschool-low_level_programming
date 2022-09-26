#include "main.h"

/**
  * rev_string - Reverses a string 
  * @str: The string 
  *
  * Return
  * 
*/

void rev_string(char *s)
{
	int i, length, temp;
	char *dummy_string = s;
	
	while (*dummy_string != '\0')
	{
		dummy_string++;
		length++;
	}

	for (i = 0; (i < length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

