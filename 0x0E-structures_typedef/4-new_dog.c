#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog.
 * @name: name of the dog.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: a pointer to new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(strlen(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(strlen(owner) + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->name, name);
	doggy->age = age;
	strcpy(doggy->owner, owner);

	return (doggy);
}
