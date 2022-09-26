#include "main.h"
#include <string.h>

/**
  * rev_string - Reverses a string 
  * @str: The string 
  *
  * Return
  * 
*/

void rev_string(char *s)
{
	int i, temp;
	int length = strlen(s);

	for (i = 0; (i < length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

