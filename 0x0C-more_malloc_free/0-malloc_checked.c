#include <stdlib.h>
/**
* malloc_checked - ads fadfs asd
* @b: asdf
*
* Return: a void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}

