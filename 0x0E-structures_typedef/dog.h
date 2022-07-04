#ifndef DOG_H
#define DOG_H

/**
 * dog - Typedef for struct dog
 */
typedef struct dog dog;

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
