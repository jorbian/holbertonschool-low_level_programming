#ifndef DOG_H
#define DOG_H

/**
 * struct dog - asdf asdf adsf
 * @name: a pointer to the first character of dog's name
 * @age: age of the dog expressed as floating point
 * @owner: a pointer to the first character of owner's name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
