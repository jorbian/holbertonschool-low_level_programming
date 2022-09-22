#include <stdio.h>

/**
* _isdigit - check the code.
* @ch: asdf asdf
*
* Return: Returns 1 if yes and 0 if no
*/
int _isdigit(int ch)
{
	if ((ch >= 48) && (ch <= 57))
		return (1);
	else
		return (0);
}
