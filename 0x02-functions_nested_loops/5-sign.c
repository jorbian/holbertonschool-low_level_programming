#include <stdio.h>
/**
* print_sign - The ritually descriptor
* @n: I can't imagine any of our projects taking arguments
*
Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
*/

int print_sign(int n)
{
	if (n > 0) return 1;
	if (n < 0) return -1;
	return 0;
}
