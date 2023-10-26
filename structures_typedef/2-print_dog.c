#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints info from struct dog
 * @d: dog whose info is recorded
 **/

void print_dog(struct dog *d)
{

	if (d)
	{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	}
}
