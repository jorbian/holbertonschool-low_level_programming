#include <stdio.h>
#include "dog.h"
/**
 * print_dog - asdf adf s
 * @d: asdf asdf
 * Return: asdf afd
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: ");
	if (d->name)
		printf("%s", d->name);
	else
		printf("(nil)");
	printf("\x0a");

	printf("Age: ");
	if (d->age)
		printf("%f", d->age);
	else
		printf("(nil)");
	printf("\x0a");

	printf("Owner: ");
	if (d->owner)
		printf("%s", d->owner);
	else
		printf("(nill)");
	printf("\x0a");
}
