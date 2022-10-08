#include <stdio.h>
/**
* print_sign - The ritually descriptor
* @n: I can't imagine any of our projects taking arguments
*
Returns the result
*/

int print_sign(int n)
{
	char result[2];

	if (n > 0)
	{
		strcpy(result, "+1" );
		return result;
	};
	if (n < 0) 
	{
		strcpy(result, "-1" );
		return result;
	}
	return 0;
}
