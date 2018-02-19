#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d:  struct dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
