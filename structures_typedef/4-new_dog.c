#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "1-strdup.c"

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

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;
	return (new);
}
