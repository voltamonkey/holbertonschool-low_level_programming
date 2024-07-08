#include <stdio.h>
#include "dog.h"

/**
 * init_dog- initialize variable
 *@d: point ti start
 *@age: age of dog
 *@name: name of the dog
 *@owner: owner of the dog
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

