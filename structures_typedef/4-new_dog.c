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
	char *n = strdup(name);
	char *o = strdup(owner);

	if (new && n && o)
	{
		new->name = n;
		new->age = age;
		new->owner = o;
		return (new);
	}
		n = malloc(strlen(name) + 1);
		o = malloc(strlen(owner) + 1);

	free(new);
	free(n);
	free(o);
	return (0);
}
