#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: the struct to be printed.
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: nil\n");

	if (d->owner == NULL)
		printf("Owner: nil\n");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
