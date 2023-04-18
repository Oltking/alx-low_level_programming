#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize a dog structure
 *
 * @d: param for the dog structure
 * @name: param for the name of the dog
 * @age: param for the age of the dog
 * # param for the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
