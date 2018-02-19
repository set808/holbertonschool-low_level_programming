#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates  a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: returns a new dog struct. NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int x;
	char *n, *o;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n = malloc(sizeof(name));
	if (n  == NULL)
		return (NULL);
	o = malloc(sizeof(owner));
	if (o == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		n[x] = name[x];
	n[x] = '\0';
	for (x = 0; owner[x] != '\0'; x++)
		o[x] = owner[x];
	o[x] = '\0';

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = 0;
	return (new_dog);
}
