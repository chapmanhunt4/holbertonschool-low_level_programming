#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variables from struct dog
 * @d: the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
