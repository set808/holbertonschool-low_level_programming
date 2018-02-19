#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * _strdup - returns a pointer to newly allocated space in memory that contains
 * a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	int x;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; *(str + x) != '\0'; x++)
		*(s + x) = *(str + x);
	*(s + x) = '\0';
	return (s);
}

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
	char *n, *o;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n = _strdup(name);
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = _strdup(owner);
	if (0 == NULL)
	{
		free(new_dog);
		return (NULL);
	}



	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;
	return (new_dog);
}
