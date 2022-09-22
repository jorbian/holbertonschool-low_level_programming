#include <stdio.h>

/**
* _isupper - check the code.
* @ch: asdf asdf
*
* Return: Returns 1 if yes and 0 if no
*/
int _isupper(char ch)
{
	if ((ch >= 65) && (ch <= 122))
		return (1);
	else
		return (0);
}
