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
	dog_t *d = malloc(sizeof(dog_t));

	n_length = 0;
	for (i = 0; *(name + i) != '\0'; i++)
		n_length++;

	o_length = 0;
	for (i = 0; *(owner + i) != '\0'; i++)
		o_length++;

	d->name = malloc((n_length) * sizeof(char));
	d->owner = malloc((o_length) * sizeof(char));

	if (d->name == NULL)
		return (NULL);

	if (d->owner == NULL)
		return (NULL);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < n_length; i++)
		*(d->name + i) = *(name + i);

	for (i = 0; i < o_length; i++)
		*(d->owner + i) = *(name + i);

	d->age = age;

	return (d);
}
