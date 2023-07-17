#include "dog.h"

/**
 * init_dog - initilizes dog struct
 * @d: d pointer
 * @name: namePointer
 * @age: float
 * @owner: name of owner
 * Returns: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
