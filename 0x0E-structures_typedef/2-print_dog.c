#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog information
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *name;
		float age;
		char *owner;

		if (d->name == NULL)
			name = "(nil)";
		else
			name = d->name;

		age = d->age;

		if (d->owner == NULL)
			owner = "(nil)";
		else
			owner = d->owner;

		printf("Name: %s\n", name);
		printf("Age: %f\n", age);
		printf("Owner: %s\n", owner);
	}
	else
	{
	}
}
