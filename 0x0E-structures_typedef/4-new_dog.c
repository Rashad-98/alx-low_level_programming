#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @str: string
 *
 * Return: integer
 */
int _strlen(char *str)
{
	int i;
	int length;

	length = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		length++;

	return (length);
}

/**
 * new_dog - create a varible of type dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n_length, o_length;
	dog_t *d;

	if (!name || !owner || age < 0)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	n_length = _strlen(name);
	o_length = _strlen(owner);

	d->name = malloc(((n_length)) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(((o_length)) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < n_length; i++)
		*(d->name + i) = *(name + i);
	*(d->name + n_length) = '\0';

	d->age = age;

	for (i = 0; i < o_length; i++)
		*(d->owner + i) = *(name + i);
	*(d->owner + o_length) = '\0';

	return (d);
}
