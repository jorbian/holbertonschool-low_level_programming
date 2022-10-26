#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - asdf asdf
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_info;
	char *copy_name, *copy_owner;
	unsigned int x, name_length = 0, owner_length = 0;

	new_dog_info = malloc(sizeof(dog_t));
	if (!new_dog_info)
		return (NULL);

	if (!name || age <= 0 || owner == NULL)
	{
		free(new_dog_info);
		return (NULL);
	}

	while (name[name_length++])
		;
	while (owner[owner_length++])
		;

	copy_name = malloc(sizeof(char) * (name_length + 1));
	if (!copy_name)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (owner_length + 1));
	if (!copy_owner)
		return (NULL);

	for (x = 0; x <= name_length; x++)
		copy_name[x] = name[x];

	for (x = 0; x <= owner_length; x++)
		copy_owner[x] = owner[x];

	new_dog_info->name = copy_name;
	new_dog_info->owner = copy_owner;
	new_dog_info->age = age;

	return (new_dog_info);
}
