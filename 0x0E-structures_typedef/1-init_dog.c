#include "dog.h"

/**
 * init_dog - initalizes dog information
 * @d: pointer to structure dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
