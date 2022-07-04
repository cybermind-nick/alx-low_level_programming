#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intialize a dog struct
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
