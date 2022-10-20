#include "dog.h"
#include "main.h"

/**
 * init_dog - constructor method for the object dog
 * @d: pointer to where we're going to put the parameters
 * @name: where we're going to put its name
 * @age: the dogs age as a float
 * @owner: pointer to where we're going to not its owner.
 *
 * Return: just returns void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
