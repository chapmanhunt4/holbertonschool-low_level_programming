#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the doggo, Git change
 * @d: doggo
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
