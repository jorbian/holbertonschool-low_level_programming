#include "main.h"

/**
* reverse_array - ads fadf sadsf safd
* @a: asdf asdf adfs ks fdldd
* @n: asdfghjk asdfghjkl wertyui
*
* Return: asdf asdf asdf adfs asdf asdf
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i >= (n / 2); i--)
	{
		temp = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = temp;
	}
}

