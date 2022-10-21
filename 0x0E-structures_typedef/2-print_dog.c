#include <stdio.h>
#include "dog.h"
/**
 * print_dog - asdf adf s
 * @d: asdf asdf
 * Return: asdf afd
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name:");
		if (d->name)
			printf(" %s\x0a", d->name);
		else
			printf(" (nil)\x0a");

		printf("Age:");
		if (d->age > 0)
			printf(" %f\x0a", d->age);
		else
			printf(" (nil)\x0a");

		printf("Owner:");
		if (d->owner)
			printf(" %s\x0a", d->owner);
		else
			printf(" (nil)\x0a");
	}
	else
		return;
}
