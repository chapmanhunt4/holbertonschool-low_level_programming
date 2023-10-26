#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - copies and creates new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = dog;
	char *n = strdup(name);
	char *o = strdup(owner);

	if (new && n && o)
	{
		new->name = n;
		new->age = age;
		new->owner = o;
		return (new);
	}
	else
	{
		return(0);
	}
}
