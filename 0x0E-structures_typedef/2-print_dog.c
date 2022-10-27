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
		if (!d->name)
			printf(" (nil)\x0a");
		else
			printf(" %s\x0a", d->name);

		printf("Age:");
		if (d->age < 0)
			printf(" (nil)\x0a");
		else
			printf(" %f\x0a", d->age);

		printf("Owner:");
		if (!d->owner)
			printf(" (nil)\x0a");
		else
			printf(" %s\x0a", d->owner);
	}
	else
		return;
}
