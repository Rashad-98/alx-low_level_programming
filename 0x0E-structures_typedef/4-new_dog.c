#include "dog.h"
#include <stdlib.h>

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
	unsigned int long i, n_length, o_length;
	char *the_name;
	char *the_owner;
	dog_t *d = malloc(sizeof(dog_t));

	n_length = 0;
	for (i = 0; *(name + i) != '\0'; i++)
		n_length++;

	o_length = 0;
	for (i = 0; *(owner + i) != '\0'; i++)
		o_length++;

	the_name = malloc((n_length + 1) * sizeof(char));
	the_owner = malloc((o_length + 1) * sizeof(char));

	if (the_name == NULL)
		return (NULL);

	if (the_owner == NULL)
		return (NULL);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < n_length + 1; i++)
		*(the_name + i) = *(name + i);

	for (i = 0; i < o_length + 1; i++)
		*(the_owner + i) = *(name + i);

	d->name = the_name;
	d->age = age;
	d->owner = the_owner;

	return (d);
}
