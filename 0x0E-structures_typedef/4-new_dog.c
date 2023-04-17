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
 * _strcpy - copies string
 * @src: source
 * @dest: destination
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(dest + i);
	*(dest + i) = '\0';

	return (dest);
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
	int n_length, o_length;
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

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
