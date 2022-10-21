#include "dog.h"

/**
 * new_dog - constructor method for the object dog
 * @name: where we're going to put its name
 * @age: the dogs age as a float
 * @owner: pointer to where we're going to not its owner.
 *
 * Return: the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (*new_dog);
}
