#include "main.h"
/**
  * swap_int- Reverses a string
  * @a: The string
  * @b: The string
  *
  * Return nothing
  *
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

