#include "dog.h"

/**
 * init_dog - initializes struct members
 * @d: pointer to dog struct
 * @name: pointer of dog name
 * @age: dog age
 * @owner: pointer to dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

