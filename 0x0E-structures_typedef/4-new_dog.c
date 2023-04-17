#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a varible of type dot_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dot_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *the_name = malloc(strlen(name) + 1);
	char *the_owner = malloc(strlen(owner) + 1);
	dog_t *d = malloc(sizeof(dog_t));

	if (the_name == NULL)
		return NULL;

	if (the_owner == NULL)
		return NULL;

	if (d == NULL)
		return (NULL);

	strcpy(the_name, name);
	strcpy(the_owner, owner);

	d->name = the_name;
	d->age = age;
	d->owner = the_owner;

	return (d);
}
