#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - asdf adsf
* @d: asdf asdf adsf
* Return: 0
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d);
}

