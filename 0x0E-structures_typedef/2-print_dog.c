#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the contents of a dog struct
 * @d: dog struct pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name == NULL ? printf("nil\n") : printf("Name: %s", d->name);
	d->age == NULL ? printf("nil\n") : printf("Name: %f", d->age);
	d->owner == NULL ? printf("nil\n") : printf("Name: %s", d->owner);
}
