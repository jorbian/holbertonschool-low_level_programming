#include "dog.h"
#include <stdlib.h>

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
	dog_t *new_dog;
	int i;

	int name_length = 0;
	int owner_length = 0;
	while(name[name_length++])
		;
	while(owner[owner_length++])
		;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(name_length * sizeof(new_dog->name));
	if (!new_dog)
		return (NULL);
	for (i = 0; i < name_length; i++)
		new_dog->name[i] = name[i];
	
	new_dog->age = age;

	new_dog->owner = malloc(owner_length * sizeof(new_dog->owner));
        if (!new_dog)
                return (NULL);
        for (i = 0; i < owner_length; i++)
                new_dog->owner[i] = owner[i];

	return (new_dog);
}
