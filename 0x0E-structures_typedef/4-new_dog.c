#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
