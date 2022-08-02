#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the newly created structure
 * return NULL if thr funtion fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d  = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
