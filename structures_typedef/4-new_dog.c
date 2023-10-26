#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - copies and creates new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog info
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	new->name = malloc(strlen(name) + 1);
	new->owner = malloc(strlen(owner) + 1);

	if (new)
	{
		new->name = strdup(name);
		new->owner = strdup(owner);

		if (new->name && new->owner)
		{
			new->age = age;
			return (new);
		}
		free(new->name);
		free(new->owner);
	}
	free(new);
	return (0);
}
