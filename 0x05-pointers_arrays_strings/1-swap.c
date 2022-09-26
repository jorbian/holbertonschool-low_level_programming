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
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}

