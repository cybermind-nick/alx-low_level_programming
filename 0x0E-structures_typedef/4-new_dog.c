#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog struct on heap
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog struct (dog_t *)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
